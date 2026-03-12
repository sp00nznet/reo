#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00373F40
// Address: 0x373f40 - 0x374780
void sub_00373F40_0x373f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x373f40u;

    // 0x373f40: 0x27bdff60
    ctx->pc = 0x373f40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x373f44: 0xffbf0080
    ctx->pc = 0x373f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x373f48: 0x7fb70070
    ctx->pc = 0x373f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x373f4c: 0x7fb60060
    ctx->pc = 0x373f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x373f50: 0x27b7009c
    ctx->pc = 0x373f50u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 156));
    // 0x373f54: 0x7fb50050
    ctx->pc = 0x373f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x373f58: 0x27b60098
    ctx->pc = 0x373f58u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 152));
    // 0x373f5c: 0x7fb40040
    ctx->pc = 0x373f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x373f60: 0xc0a82d
    ctx->pc = 0x373f60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f64: 0x7fb30030
    ctx->pc = 0x373f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x373f68: 0x24940004
    ctx->pc = 0x373f68u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 4));
    // 0x373f6c: 0x7fb20020
    ctx->pc = 0x373f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x373f70: 0x7fb10010
    ctx->pc = 0x373f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373f74: 0xa0902d
    ctx->pc = 0x373f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f78: 0x7fb00000
    ctx->pc = 0x373f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x373f7c: 0x882d
    ctx->pc = 0x373f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f80: 0x8cd30034
    ctx->pc = 0x373f80u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x373f84: 0x100000e0
    ctx->pc = 0x373F84u;
    {
        const bool branch_taken_0x373f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x373F88u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 148));
        if (branch_taken_0x373f84) {
            ctx->pc = 0x374308u;
            goto label_374308;
        }
    }
    ctx->pc = 0x373F8Cu;
label_373f8c:
    // 0x373f8c: 0x8e840808
    ctx->pc = 0x373f8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 2056)));
    // 0x373f90: 0x1118c0
    ctx->pc = 0x373f90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
    // 0x373f94: 0x712821
    ctx->pc = 0x373f94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x373f98: 0x52840
    ctx->pc = 0x373f98u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x373f9c: 0x2403ffff
    ctx->pc = 0x373f9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x373fa0: 0xb12821
    ctx->pc = 0x373fa0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x373fa4: 0x528c0
    ctx->pc = 0x373fa4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x373fa8: 0x852021
    ctx->pc = 0x373fa8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x373fac: 0x8c840000
    ctx->pc = 0x373facu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x373fb0: 0x108300d4
    ctx->pc = 0x373FB0u;
    {
        const bool branch_taken_0x373fb0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x373fb0) {
            ctx->pc = 0x374304u;
            goto label_374304;
        }
    }
    ctx->pc = 0x373FB8u;
    // 0x373fb8: 0x108000d2
    ctx->pc = 0x373FB8u;
    {
        const bool branch_taken_0x373fb8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x373FBCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x373fb8) {
            ctx->pc = 0x374304u;
            goto label_374304;
        }
    }
    ctx->pc = 0x373FC0u;
    // 0x373fc0: 0x8c24aee8
    ctx->pc = 0x373fc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x373fc4: 0x28810100
    ctx->pc = 0x373fc4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 256));
    // 0x373fc8: 0x102000ce
    ctx->pc = 0x373FC8u;
    {
        const bool branch_taken_0x373fc8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x373fc8) {
            ctx->pc = 0x374304u;
            goto label_374304;
        }
    }
    ctx->pc = 0x373FD0u;
    // 0x373fd0: 0x3c010057
    ctx->pc = 0x373fd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x373fd4: 0x41840
    ctx->pc = 0x373fd4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x373fd8: 0x8c22aee0
    ctx->pc = 0x373fd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x373fdc: 0x641821
    ctx->pc = 0x373fdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x373fe0: 0x31940
    ctx->pc = 0x373fe0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x373fe4: 0x113100
    ctx->pc = 0x373fe4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 17), 4));
    // 0x373fe8: 0x24040008
    ctx->pc = 0x373fe8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x373fec: 0x431021
    ctx->pc = 0x373fecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373ff0: 0x3c010057
    ctx->pc = 0x373ff0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x373ff4: 0xac550000
    ctx->pc = 0x373ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x373ff8: 0x8c25aee8
    ctx->pc = 0x373ff8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x373ffc: 0x3c010057
    ctx->pc = 0x373ffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374000: 0x51840
    ctx->pc = 0x374000u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x374004: 0x8c22aee0
    ctx->pc = 0x374004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x374008: 0x651821
    ctx->pc = 0x374008u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37400c: 0x31940
    ctx->pc = 0x37400cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x374010: 0x431021
    ctx->pc = 0x374010u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374014: 0x3c010057
    ctx->pc = 0x374014u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374018: 0xac540004
    ctx->pc = 0x374018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x37401c: 0x8c25aee8
    ctx->pc = 0x37401cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x374020: 0x3c010057
    ctx->pc = 0x374020u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374024: 0x51840
    ctx->pc = 0x374024u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x374028: 0x8c22aee0
    ctx->pc = 0x374028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x37402c: 0x651821
    ctx->pc = 0x37402cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x374030: 0x31940
    ctx->pc = 0x374030u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x374034: 0x431021
    ctx->pc = 0x374034u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374038: 0x3c010057
    ctx->pc = 0x374038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37403c: 0xac510008
    ctx->pc = 0x37403cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x374040: 0x8e43000c
    ctx->pc = 0x374040u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x374044: 0x8c27aee8
    ctx->pc = 0x374044u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x374048: 0x8e620000
    ctx->pc = 0x374048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x37404c: 0x664021
    ctx->pc = 0x37404cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x374050: 0x3c010057
    ctx->pc = 0x374050u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374054: 0x8d030000
    ctx->pc = 0x374054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x374058: 0x8c25aee0
    ctx->pc = 0x374058u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x37405c: 0x73040
    ctx->pc = 0x37405cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 1));
    // 0x374060: 0xc73021
    ctx->pc = 0x374060u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x374064: 0x63140
    ctx->pc = 0x374064u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 5));
    // 0x374068: 0x31880
    ctx->pc = 0x374068u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37406c: 0xa63821
    ctx->pc = 0x37406cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x374070: 0x431021
    ctx->pc = 0x374070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374074: 0x8c460000
    ctx->pc = 0x374074u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x374078: 0x24e50010
    ctx->pc = 0x374078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 16));
label_37407c:
    // 0x37407c: 0x8cc30000
    ctx->pc = 0x37407cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x374080: 0x2484ffff
    ctx->pc = 0x374080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x374084: 0x8cc20004
    ctx->pc = 0x374084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x374088: 0xaca30000
    ctx->pc = 0x374088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x37408c: 0x24c60008
    ctx->pc = 0x37408cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x374090: 0xaca20004
    ctx->pc = 0x374090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x374094: 0x1c80fff9
    ctx->pc = 0x374094u;
    {
        const bool branch_taken_0x374094 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x374098u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x374094) {
            ctx->pc = 0x37407Cu;
            goto label_37407c;
        }
    }
    ctx->pc = 0x37409Cu;
    // 0x37409c: 0x25050004
    ctx->pc = 0x37409cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 4));
    // 0x3740a0: 0x24e60010
    ctx->pc = 0x3740a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 16));
    // 0x3740a4: 0xc064674
    ctx->pc = 0x3740A4u;
    SET_GPR_U32(ctx, 31, 0x3740ACu);
    ctx->pc = 0x3740A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3740ACu; }
        if (ctx->pc != 0x3740ACu) { return; }
    }
    ctx->pc = 0x3740ACu;
    // 0x3740ac: 0x3c010057
    ctx->pc = 0x3740acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3740b0: 0x3c023f80
    ctx->pc = 0x3740b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x3740b4: 0x8c25aee8
    ctx->pc = 0x3740b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x3740b8: 0xc7a00090
    ctx->pc = 0x3740b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3740bc: 0x3c010057
    ctx->pc = 0x3740bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3740c0: 0x52040
    ctx->pc = 0x3740c0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x3740c4: 0x8c23aee0
    ctx->pc = 0x3740c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x3740c8: 0x852021
    ctx->pc = 0x3740c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3740cc: 0x42140
    ctx->pc = 0x3740ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x3740d0: 0x641821
    ctx->pc = 0x3740d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3740d4: 0x3c010057
    ctx->pc = 0x3740d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3740d8: 0xc4610040
    ctx->pc = 0x3740d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3740dc: 0x46010000
    ctx->pc = 0x3740dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3740e0: 0xe7a00090
    ctx->pc = 0x3740e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3740e4: 0xc4610044
    ctx->pc = 0x3740e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3740e8: 0xc6000000
    ctx->pc = 0x3740e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3740ec: 0x46010000
    ctx->pc = 0x3740ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3740f0: 0xe6000000
    ctx->pc = 0x3740f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3740f4: 0x8c25aee8
    ctx->pc = 0x3740f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x3740f8: 0xc6c00000
    ctx->pc = 0x3740f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3740fc: 0x3c010057
    ctx->pc = 0x3740fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374100: 0x52040
    ctx->pc = 0x374100u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x374104: 0x8c23aee0
    ctx->pc = 0x374104u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x374108: 0x852021
    ctx->pc = 0x374108u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37410c: 0x42140
    ctx->pc = 0x37410cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x374110: 0x641821
    ctx->pc = 0x374110u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374114: 0x3c010057
    ctx->pc = 0x374114u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374118: 0xc4610048
    ctx->pc = 0x374118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37411c: 0x46010000
    ctx->pc = 0x37411cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x374120: 0xe6c00000
    ctx->pc = 0x374120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x374124: 0x8c25aee8
    ctx->pc = 0x374124u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x374128: 0xc7a00090
    ctx->pc = 0x374128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37412c: 0x3c010057
    ctx->pc = 0x37412cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374130: 0x52040
    ctx->pc = 0x374130u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x374134: 0x8c23aee0
    ctx->pc = 0x374134u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x374138: 0x852021
    ctx->pc = 0x374138u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37413c: 0x42140
    ctx->pc = 0x37413cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x374140: 0x641821
    ctx->pc = 0x374140u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374144: 0x3c010057
    ctx->pc = 0x374144u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374148: 0xe4600040
    ctx->pc = 0x374148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x37414c: 0x8c25aee8
    ctx->pc = 0x37414cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x374150: 0xc6000000
    ctx->pc = 0x374150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374154: 0x3c010057
    ctx->pc = 0x374154u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374158: 0x52040
    ctx->pc = 0x374158u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x37415c: 0x8c23aee0
    ctx->pc = 0x37415cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x374160: 0x852021
    ctx->pc = 0x374160u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x374164: 0x42140
    ctx->pc = 0x374164u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x374168: 0x641821
    ctx->pc = 0x374168u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37416c: 0x3c010057
    ctx->pc = 0x37416cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374170: 0xe4600044
    ctx->pc = 0x374170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x374174: 0x8c25aee8
    ctx->pc = 0x374174u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x374178: 0xc6c00000
    ctx->pc = 0x374178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37417c: 0x3c010057
    ctx->pc = 0x37417cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374180: 0x52040
    ctx->pc = 0x374180u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x374184: 0x8c23aee0
    ctx->pc = 0x374184u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x374188: 0x852021
    ctx->pc = 0x374188u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37418c: 0x42140
    ctx->pc = 0x37418cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x374190: 0x641821
    ctx->pc = 0x374190u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374194: 0xe4600048
    ctx->pc = 0x374194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x374198: 0xaee20000
    ctx->pc = 0x374198u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x37419c: 0x86430004
    ctx->pc = 0x37419cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3741a0: 0x223082a
    ctx->pc = 0x3741a0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x3741a4: 0x14200022
    ctx->pc = 0x3741A4u;
    {
        const bool branch_taken_0x3741a4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x3741a4) {
            ctx->pc = 0x374230u;
            goto label_374230;
        }
    }
    ctx->pc = 0x3741ACu;
    // 0x3741ac: 0x86420006
    ctx->pc = 0x3741acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3741b0: 0x621021
    ctx->pc = 0x3741b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3741b4: 0x222082a
    ctx->pc = 0x3741b4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x3741b8: 0x1020001d
    ctx->pc = 0x3741B8u;
    {
        const bool branch_taken_0x3741b8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x3741b8) {
            ctx->pc = 0x374230u;
            goto label_374230;
        }
    }
    ctx->pc = 0x3741C0u;
    // 0x3741c0: 0x3c010057
    ctx->pc = 0x3741c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3741c4: 0x24070001
    ctx->pc = 0x3741c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x3741c8: 0x8c26aee8
    ctx->pc = 0x3741c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x3741cc: 0x26a40038
    ctx->pc = 0x3741ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 56));
    // 0x3741d0: 0x26a50090
    ctx->pc = 0x3741d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 144));
    // 0x3741d4: 0x3c010057
    ctx->pc = 0x3741d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3741d8: 0x61840
    ctx->pc = 0x3741d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x3741dc: 0x8c22aee0
    ctx->pc = 0x3741dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x3741e0: 0x661821
    ctx->pc = 0x3741e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3741e4: 0x31940
    ctx->pc = 0x3741e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x3741e8: 0x431021
    ctx->pc = 0x3741e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3741ec: 0x3c010057
    ctx->pc = 0x3741ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3741f0: 0xa047000c
    ctx->pc = 0x3741f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x3741f4: 0x8c27aee8
    ctx->pc = 0x3741f4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x3741f8: 0x8e620000
    ctx->pc = 0x3741f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3741fc: 0x3c010057
    ctx->pc = 0x3741fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374200: 0x73040
    ctx->pc = 0x374200u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 1));
    // 0x374204: 0x8c23aee0
    ctx->pc = 0x374204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x374208: 0xc73021
    ctx->pc = 0x374208u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x37420c: 0x8c42000c
    ctx->pc = 0x37420cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x374210: 0x63140
    ctx->pc = 0x374210u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 5));
    // 0x374214: 0x661821
    ctx->pc = 0x374214u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x374218: 0x24670050
    ctx->pc = 0x374218u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 80));
    // 0x37421c: 0x24680054
    ctx->pc = 0x37421cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 84));
    // 0x374220: 0xc0dd330
    ctx->pc = 0x374220u;
    SET_GPR_U32(ctx, 31, 0x374228u);
    ctx->pc = 0x374224u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x374CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374CC0_0x374cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374228u; }
    }
    if (ctx->pc != 0x374228u) { return; }
    ctx->pc = 0x374228u;
    // 0x374228: 0x10000025
    ctx->pc = 0x374228u;
    {
        const bool branch_taken_0x374228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x374228) {
            ctx->pc = 0x3742C0u;
            goto label_3742c0;
        }
    }
    ctx->pc = 0x374230u;
label_374230:
    // 0x374230: 0x3c010057
    ctx->pc = 0x374230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374234: 0x8c24aee8
    ctx->pc = 0x374234u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x374238: 0x3c010057
    ctx->pc = 0x374238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37423c: 0x41840
    ctx->pc = 0x37423cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x374240: 0x8c22aee0
    ctx->pc = 0x374240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x374244: 0x641821
    ctx->pc = 0x374244u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374248: 0x31940
    ctx->pc = 0x374248u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x37424c: 0x431021
    ctx->pc = 0x37424cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374250: 0x3c010057
    ctx->pc = 0x374250u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374254: 0xa040000c
    ctx->pc = 0x374254u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x374258: 0x8c24aee8
    ctx->pc = 0x374258u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x37425c: 0x3c010057
    ctx->pc = 0x37425cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374260: 0x41840
    ctx->pc = 0x374260u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x374264: 0x8c22aee0
    ctx->pc = 0x374264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x374268: 0x641821
    ctx->pc = 0x374268u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37426c: 0x31940
    ctx->pc = 0x37426cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x374270: 0x431021
    ctx->pc = 0x374270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374274: 0x3c010057
    ctx->pc = 0x374274u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374278: 0xac400058
    ctx->pc = 0x374278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x37427c: 0x8c24aee8
    ctx->pc = 0x37427cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x374280: 0x3c010057
    ctx->pc = 0x374280u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374284: 0x41840
    ctx->pc = 0x374284u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x374288: 0x8c22aee0
    ctx->pc = 0x374288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x37428c: 0x641821
    ctx->pc = 0x37428cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374290: 0x31940
    ctx->pc = 0x374290u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x374294: 0x431021
    ctx->pc = 0x374294u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374298: 0x3c010057
    ctx->pc = 0x374298u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37429c: 0xac400054
    ctx->pc = 0x37429cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x3742a0: 0x8c24aee8
    ctx->pc = 0x3742a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x3742a4: 0x3c010057
    ctx->pc = 0x3742a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3742a8: 0x41840
    ctx->pc = 0x3742a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x3742ac: 0x8c22aee0
    ctx->pc = 0x3742acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x3742b0: 0x641821
    ctx->pc = 0x3742b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3742b4: 0x31940
    ctx->pc = 0x3742b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x3742b8: 0x431021
    ctx->pc = 0x3742b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3742bc: 0xac400050
    ctx->pc = 0x3742bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_3742c0:
    // 0x3742c0: 0x3c010057
    ctx->pc = 0x3742c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3742c4: 0x3c040037
    ctx->pc = 0x3742c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x3742c8: 0x8c25aee8
    ctx->pc = 0x3742c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x3742cc: 0x24844350
    ctx->pc = 0x3742ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17232));
    // 0x3742d0: 0x27a60090
    ctx->pc = 0x3742d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 144));
    // 0x3742d4: 0x3c010057
    ctx->pc = 0x3742d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3742d8: 0x51840
    ctx->pc = 0x3742d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x3742dc: 0x8c22aee0
    ctx->pc = 0x3742dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946528)));
    // 0x3742e0: 0x651821
    ctx->pc = 0x3742e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3742e4: 0x31940
    ctx->pc = 0x3742e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x3742e8: 0xc06c8f8
    ctx->pc = 0x3742E8u;
    SET_GPR_U32(ctx, 31, 0x3742F0u);
    ctx->pc = 0x3742ECu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B23E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742F0u; }
        if (ctx->pc != 0x3742F0u) { return; }
    }
    ctx->pc = 0x3742F0u;
    // 0x3742f0: 0x3c010057
    ctx->pc = 0x3742f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x3742f4: 0x8c23aee8
    ctx->pc = 0x3742f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946536)));
    // 0x3742f8: 0x24630001
    ctx->pc = 0x3742f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x3742fc: 0x3c010057
    ctx->pc = 0x3742fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x374300: 0xac23aee8
    ctx->pc = 0x374300u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946536), GPR_U32(ctx, 3));
label_374304:
    // 0x374304: 0x26310001
    ctx->pc = 0x374304u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_374308:
    // 0x374308: 0x96830812
    ctx->pc = 0x374308u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2066)));
    // 0x37430c: 0x223182a
    ctx->pc = 0x37430cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x374310: 0x1460ff1e
    ctx->pc = 0x374310u;
    {
        const bool branch_taken_0x374310 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x374310) {
            ctx->pc = 0x373F8Cu;
            goto label_373f8c;
        }
    }
    ctx->pc = 0x374318u;
    // 0x374318: 0xdfbf0080
    ctx->pc = 0x374318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37431c: 0x7bb70070
    ctx->pc = 0x37431cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x374320: 0x7bb60060
    ctx->pc = 0x374320u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374324: 0x7bb50050
    ctx->pc = 0x374324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374328: 0x7bb40040
    ctx->pc = 0x374328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37432c: 0x7bb30030
    ctx->pc = 0x37432cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374330: 0x7bb20020
    ctx->pc = 0x374330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374334: 0x7bb10010
    ctx->pc = 0x374334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374338: 0x7bb00000
    ctx->pc = 0x374338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37433c: 0x3e00008
    ctx->pc = 0x37433Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374340u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x373F8Cu: goto label_373f8c;
            case 0x37407Cu: goto label_37407c;
            case 0x374230u: goto label_374230;
            case 0x3742C0u: goto label_3742c0;
            case 0x374304u: goto label_374304;
            case 0x374308u: goto label_374308;
            case 0x3743A4u: goto label_3743a4;
            case 0x3743C8u: goto label_3743c8;
            case 0x374400u: goto label_374400;
            case 0x374404u: goto label_374404;
            case 0x37443Cu: goto label_37443c;
            case 0x374448u: goto label_374448;
            case 0x374470u: goto label_374470;
            case 0x37447Cu: goto label_37447c;
            case 0x37448Cu: goto label_37448c;
            case 0x3744D0u: goto label_3744d0;
            case 0x3745B4u: goto label_3745b4;
            case 0x3745D8u: goto label_3745d8;
            case 0x374610u: goto label_374610;
            case 0x374614u: goto label_374614;
            case 0x37464Cu: goto label_37464c;
            case 0x374658u: goto label_374658;
            case 0x374680u: goto label_374680;
            case 0x37468Cu: goto label_37468c;
            case 0x37469Cu: goto label_37469c;
            case 0x3746E0u: goto label_3746e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x374344u;
    // 0x374344: 0x0
    ctx->pc = 0x374344u;
    // NOP
    // 0x374348: 0x0
    ctx->pc = 0x374348u;
    // NOP
    // 0x37434c: 0x0
    ctx->pc = 0x37434cu;
    // NOP
    // 0x374350: 0x27bdffb0
    ctx->pc = 0x374350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x374354: 0xffbf0030
    ctx->pc = 0x374354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x374358: 0x7fb20020
    ctx->pc = 0x374358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37435c: 0x7fb10010
    ctx->pc = 0x37435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374360: 0x7fb00000
    ctx->pc = 0x374360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374364: 0x80802d
    ctx->pc = 0x374364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374368: 0xc1ac574
    ctx->pc = 0x374368u;
    SET_GPR_U32(ctx, 31, 0x374370u);
    ctx->pc = 0x37436Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x6B15D0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B15D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374370u; }
        if (ctx->pc != 0x374370u) { return; }
    }
    ctx->pc = 0x374370u;
    // 0x374370: 0x8e110018
    ctx->pc = 0x374370u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x374374: 0x24020002
    ctx->pc = 0x374374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x374378: 0x8e300000
    ctx->pc = 0x374378u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37437c: 0x92030002
    ctx->pc = 0x37437cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x374380: 0x10620011
    ctx->pc = 0x374380u;
    {
        const bool branch_taken_0x374380 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x374384u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x374380) {
            ctx->pc = 0x3743C8u;
            goto label_3743c8;
        }
    }
    ctx->pc = 0x374388u;
    // 0x374388: 0x24020001
    ctx->pc = 0x374388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37438c: 0x10620005
    ctx->pc = 0x37438Cu;
    {
        const bool branch_taken_0x37438c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x37438c) {
            ctx->pc = 0x3743A4u;
            goto label_3743a4;
        }
    }
    ctx->pc = 0x374394u;
    // 0x374394: 0x10600003
    ctx->pc = 0x374394u;
    {
        const bool branch_taken_0x374394 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x374394) {
            ctx->pc = 0x3743A4u;
            goto label_3743a4;
        }
    }
    ctx->pc = 0x37439Cu;
    // 0x37439c: 0x10000019
    ctx->pc = 0x37439Cu;
    {
        const bool branch_taken_0x37439c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3743A0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        if (branch_taken_0x37439c) {
            ctx->pc = 0x374404u;
            goto label_374404;
        }
    }
    ctx->pc = 0x3743A4u;
label_3743a4:
    // 0x3743a4: 0x8e020034
    ctx->pc = 0x3743a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3743a8: 0x8c45082c
    ctx->pc = 0x3743a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 2092)));
    // 0x3743ac: 0xc064038
    ctx->pc = 0x3743ACu;
    SET_GPR_U32(ctx, 31, 0x3743B4u);
    ctx->pc = 0x3743B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743B4u; }
        if (ctx->pc != 0x3743B4u) { return; }
    }
    ctx->pc = 0x3743B4u;
    // 0x3743b4: 0x92050175
    ctx->pc = 0x3743b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 373)));
    // 0x3743b8: 0xc1acca0
    ctx->pc = 0x3743B8u;
    SET_GPR_U32(ctx, 31, 0x3743C0u);
    ctx->pc = 0x3743BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x6B3280u;
    {
        auto targetFn = runtime->lookupFunction(0x6B3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3743C0u; }
        if (ctx->pc != 0x3743C0u) { return; }
    }
    ctx->pc = 0x3743C0u;
    // 0x3743c0: 0x1000000f
    ctx->pc = 0x3743C0u;
    {
        const bool branch_taken_0x3743c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3743c0) {
            ctx->pc = 0x374400u;
            goto label_374400;
        }
    }
    ctx->pc = 0x3743C8u;
label_3743c8:
    // 0x3743c8: 0xc6030038
    ctx->pc = 0x3743c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3743cc: 0x3c0242c8
    ctx->pc = 0x3743ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x3743d0: 0xc602003c
    ctx->pc = 0x3743d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3743d4: 0x27a40040
    ctx->pc = 0x3743d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x3743d8: 0xc6010040
    ctx->pc = 0x3743d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3743dc: 0x44820000
    ctx->pc = 0x3743dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3743e0: 0xe4830000
    ctx->pc = 0x3743e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3743e4: 0xe4820004
    ctx->pc = 0x3743e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3743e8: 0xe4810008
    ctx->pc = 0x3743e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3743ec: 0xc7a10044
    ctx->pc = 0x3743ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3743f0: 0x46000800
    ctx->pc = 0x3743f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3743f4: 0xe7a00044
    ctx->pc = 0x3743f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3743f8: 0xc1acca0
    ctx->pc = 0x3743F8u;
    SET_GPR_U32(ctx, 31, 0x374400u);
    ctx->pc = 0x3743FCu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 373)));
    ctx->pc = 0x6B3280u;
    {
        auto targetFn = runtime->lookupFunction(0x6B3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374400u; }
        if (ctx->pc != 0x374400u) { return; }
    }
    ctx->pc = 0x374400u;
label_374400:
    // 0x374400: 0x8e230008
    ctx->pc = 0x374400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_374404:
    // 0x374404: 0x8e440808
    ctx->pc = 0x374404u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x374408: 0x310c0
    ctx->pc = 0x374408u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x37440c: 0x431021
    ctx->pc = 0x37440cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374410: 0x21040
    ctx->pc = 0x374410u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x374414: 0x431021
    ctx->pc = 0x374414u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374418: 0x210c0
    ctx->pc = 0x374418u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37441c: 0x442021
    ctx->pc = 0x37441cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x374420: 0x90820088
    ctx->pc = 0x374420u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x374424: 0x10400005
    ctx->pc = 0x374424u;
    {
        const bool branch_taken_0x374424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x374428u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x374424) {
            ctx->pc = 0x37443Cu;
            goto label_37443c;
        }
    }
    ctx->pc = 0x37442Cu;
    // 0x37442c: 0xc0dd2c8
    ctx->pc = 0x37442Cu;
    SET_GPR_U32(ctx, 31, 0x374434u);
    ctx->pc = 0x374B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374B20_0x374b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374434u; }
    }
    if (ctx->pc != 0x374434u) { return; }
    ctx->pc = 0x374434u;
    // 0x374434: 0x10000004
    ctx->pc = 0x374434u;
    {
        const bool branch_taken_0x374434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374438u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
        if (branch_taken_0x374434) {
            ctx->pc = 0x374448u;
            goto label_374448;
        }
    }
    ctx->pc = 0x37443Cu;
label_37443c:
    // 0x37443c: 0xc0dd300
    ctx->pc = 0x37443Cu;
    SET_GPR_U32(ctx, 31, 0x374444u);
    ctx->pc = 0x374C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C00_0x374c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374444u; }
    }
    if (ctx->pc != 0x374444u) { return; }
    ctx->pc = 0x374444u;
    // 0x374444: 0x24040067
    ctx->pc = 0x374444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
label_374448:
    // 0x374448: 0xc06bde0
    ctx->pc = 0x374448u;
    SET_GPR_U32(ctx, 31, 0x374450u);
    ctx->pc = 0x37444Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374450u; }
        if (ctx->pc != 0x374450u) { return; }
    }
    ctx->pc = 0x374450u;
    // 0x374450: 0x9222000c
    ctx->pc = 0x374450u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x374454: 0x10400006
    ctx->pc = 0x374454u;
    {
        const bool branch_taken_0x374454 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x374458u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
        if (branch_taken_0x374454) {
            ctx->pc = 0x374470u;
            goto label_374470;
        }
    }
    ctx->pc = 0x37445Cu;
    // 0x37445c: 0x2404005e
    ctx->pc = 0x37445cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x374460: 0xc06bde0
    ctx->pc = 0x374460u;
    SET_GPR_U32(ctx, 31, 0x374468u);
    ctx->pc = 0x374464u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374468u; }
        if (ctx->pc != 0x374468u) { return; }
    }
    ctx->pc = 0x374468u;
    // 0x374468: 0x10000004
    ctx->pc = 0x374468u;
    {
        const bool branch_taken_0x374468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37446Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x374468) {
            ctx->pc = 0x37447Cu;
            goto label_37447c;
        }
    }
    ctx->pc = 0x374470u;
label_374470:
    // 0x374470: 0xc06bde0
    ctx->pc = 0x374470u;
    SET_GPR_U32(ctx, 31, 0x374478u);
    ctx->pc = 0x374474u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374478u; }
        if (ctx->pc != 0x374478u) { return; }
    }
    ctx->pc = 0x374478u;
    // 0x374478: 0x26240050
    ctx->pc = 0x374478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
label_37447c:
    // 0x37447c: 0xc0dd458
    ctx->pc = 0x37447Cu;
    SET_GPR_U32(ctx, 31, 0x374484u);
    ctx->pc = 0x375160u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375160_0x375160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374484u; }
    }
    if (ctx->pc != 0x374484u) { return; }
    ctx->pc = 0x374484u;
    // 0x374484: 0x10000012
    ctx->pc = 0x374484u;
    {
        const bool branch_taken_0x374484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374488u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x374484) {
            ctx->pc = 0x3744D0u;
            goto label_3744d0;
        }
    }
    ctx->pc = 0x37448Cu;
label_37448c:
    // 0x37448c: 0x2603003a
    ctx->pc = 0x37448cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 58));
    // 0x374490: 0x821021
    ctx->pc = 0x374490u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x374494: 0x306400ff
    ctx->pc = 0x374494u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 255));
    // 0x374498: 0x8c430008
    ctx->pc = 0x374498u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37449c: 0x31840
    ctx->pc = 0x37449cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3744a0: 0x3c02004f
    ctx->pc = 0x3744a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x3744a4: 0x2431821
    ctx->pc = 0x3744a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3744a8: 0x2442dd90
    ctx->pc = 0x3744a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x3744ac: 0x94650008
    ctx->pc = 0x3744acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3744b0: 0x518c0
    ctx->pc = 0x3744b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x3744b4: 0x651821
    ctx->pc = 0x3744b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3744b8: 0x31840
    ctx->pc = 0x3744b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3744bc: 0x651821
    ctx->pc = 0x3744bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3744c0: 0x31880
    ctx->pc = 0x3744c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x3744c4: 0xc06bde0
    ctx->pc = 0x3744C4u;
    SET_GPR_U32(ctx, 31, 0x3744CCu);
    ctx->pc = 0x3744C8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744CCu; }
        if (ctx->pc != 0x3744CCu) { return; }
    }
    ctx->pc = 0x3744CCu;
    // 0x3744cc: 0x26100001
    ctx->pc = 0x3744ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_3744d0:
    // 0x3744d0: 0x8e240008
    ctx->pc = 0x3744d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3744d4: 0x8e420808
    ctx->pc = 0x3744d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x3744d8: 0x418c0
    ctx->pc = 0x3744d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x3744dc: 0x641821
    ctx->pc = 0x3744dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3744e0: 0x31840
    ctx->pc = 0x3744e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3744e4: 0x641821
    ctx->pc = 0x3744e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3744e8: 0x318c0
    ctx->pc = 0x3744e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x3744ec: 0x432021
    ctx->pc = 0x3744ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3744f0: 0x8c820004
    ctx->pc = 0x3744f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3744f4: 0x202102a
    ctx->pc = 0x3744f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x3744f8: 0x1440ffe4
    ctx->pc = 0x3744F8u;
    {
        const bool branch_taken_0x3744f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3744FCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x3744f8) {
            ctx->pc = 0x37448Cu;
            goto label_37448c;
        }
    }
    ctx->pc = 0x374500u;
    // 0x374500: 0x26250010
    ctx->pc = 0x374500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
    // 0x374504: 0xc06bde0
    ctx->pc = 0x374504u;
    SET_GPR_U32(ctx, 31, 0x37450Cu);
    ctx->pc = 0x374508u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37450Cu; }
        if (ctx->pc != 0x37450Cu) { return; }
    }
    ctx->pc = 0x37450Cu;
    // 0x37450c: 0x2404006c
    ctx->pc = 0x37450cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x374510: 0xc06bde0
    ctx->pc = 0x374510u;
    SET_GPR_U32(ctx, 31, 0x374518u);
    ctx->pc = 0x374514u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374518u; }
        if (ctx->pc != 0x374518u) { return; }
    }
    ctx->pc = 0x374518u;
    // 0x374518: 0x8e240008
    ctx->pc = 0x374518u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37451c: 0x8e420808
    ctx->pc = 0x37451cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x374520: 0x418c0
    ctx->pc = 0x374520u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x374524: 0x641821
    ctx->pc = 0x374524u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374528: 0x31840
    ctx->pc = 0x374528u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x37452c: 0x641821
    ctx->pc = 0x37452cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374530: 0x318c0
    ctx->pc = 0x374530u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x374534: 0x431021
    ctx->pc = 0x374534u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374538: 0x8c440000
    ctx->pc = 0x374538u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37453c: 0xc06305c
    ctx->pc = 0x37453Cu;
    SET_GPR_U32(ctx, 31, 0x374544u);
    ctx->pc = 0x374540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374544u; }
        if (ctx->pc != 0x374544u) { return; }
    }
    ctx->pc = 0x374544u;
    // 0x374544: 0xdfbf0030
    ctx->pc = 0x374544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374548: 0x7bb20020
    ctx->pc = 0x374548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37454c: 0x7bb10010
    ctx->pc = 0x37454cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374550: 0x7bb00000
    ctx->pc = 0x374550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374554: 0x3e00008
    ctx->pc = 0x374554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x373F8Cu: goto label_373f8c;
            case 0x37407Cu: goto label_37407c;
            case 0x374230u: goto label_374230;
            case 0x3742C0u: goto label_3742c0;
            case 0x374304u: goto label_374304;
            case 0x374308u: goto label_374308;
            case 0x3743A4u: goto label_3743a4;
            case 0x3743C8u: goto label_3743c8;
            case 0x374400u: goto label_374400;
            case 0x374404u: goto label_374404;
            case 0x37443Cu: goto label_37443c;
            case 0x374448u: goto label_374448;
            case 0x374470u: goto label_374470;
            case 0x37447Cu: goto label_37447c;
            case 0x37448Cu: goto label_37448c;
            case 0x3744D0u: goto label_3744d0;
            case 0x3745B4u: goto label_3745b4;
            case 0x3745D8u: goto label_3745d8;
            case 0x374610u: goto label_374610;
            case 0x374614u: goto label_374614;
            case 0x37464Cu: goto label_37464c;
            case 0x374658u: goto label_374658;
            case 0x374680u: goto label_374680;
            case 0x37468Cu: goto label_37468c;
            case 0x37469Cu: goto label_37469c;
            case 0x3746E0u: goto label_3746e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37455Cu;
    // 0x37455c: 0x0
    ctx->pc = 0x37455cu;
    // NOP
    // 0x374560: 0x27bdffb0
    ctx->pc = 0x374560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x374564: 0xffbf0030
    ctx->pc = 0x374564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x374568: 0x7fb20020
    ctx->pc = 0x374568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37456c: 0x7fb10010
    ctx->pc = 0x37456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x374570: 0x7fb00000
    ctx->pc = 0x374570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374574: 0x80802d
    ctx->pc = 0x374574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374578: 0xc1ac574
    ctx->pc = 0x374578u;
    SET_GPR_U32(ctx, 31, 0x374580u);
    ctx->pc = 0x37457Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x6B15D0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B15D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374580u; }
        if (ctx->pc != 0x374580u) { return; }
    }
    ctx->pc = 0x374580u;
    // 0x374580: 0x8e110018
    ctx->pc = 0x374580u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x374584: 0x24020002
    ctx->pc = 0x374584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x374588: 0x8e300000
    ctx->pc = 0x374588u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37458c: 0x92030002
    ctx->pc = 0x37458cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x374590: 0x10620011
    ctx->pc = 0x374590u;
    {
        const bool branch_taken_0x374590 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x374594u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x374590) {
            ctx->pc = 0x3745D8u;
            goto label_3745d8;
        }
    }
    ctx->pc = 0x374598u;
    // 0x374598: 0x24020001
    ctx->pc = 0x374598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37459c: 0x10620005
    ctx->pc = 0x37459Cu;
    {
        const bool branch_taken_0x37459c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x37459c) {
            ctx->pc = 0x3745B4u;
            goto label_3745b4;
        }
    }
    ctx->pc = 0x3745A4u;
    // 0x3745a4: 0x10600003
    ctx->pc = 0x3745A4u;
    {
        const bool branch_taken_0x3745a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x3745a4) {
            ctx->pc = 0x3745B4u;
            goto label_3745b4;
        }
    }
    ctx->pc = 0x3745ACu;
    // 0x3745ac: 0x10000019
    ctx->pc = 0x3745ACu;
    {
        const bool branch_taken_0x3745ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3745B0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        if (branch_taken_0x3745ac) {
            ctx->pc = 0x374614u;
            goto label_374614;
        }
    }
    ctx->pc = 0x3745B4u;
label_3745b4:
    // 0x3745b4: 0x8e020034
    ctx->pc = 0x3745b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3745b8: 0x8c45082c
    ctx->pc = 0x3745b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 2092)));
    // 0x3745bc: 0xc064038
    ctx->pc = 0x3745BCu;
    SET_GPR_U32(ctx, 31, 0x3745C4u);
    ctx->pc = 0x3745C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1900E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745C4u; }
        if (ctx->pc != 0x3745C4u) { return; }
    }
    ctx->pc = 0x3745C4u;
    // 0x3745c4: 0x92050175
    ctx->pc = 0x3745c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 373)));
    // 0x3745c8: 0xc1acca0
    ctx->pc = 0x3745C8u;
    SET_GPR_U32(ctx, 31, 0x3745D0u);
    ctx->pc = 0x3745CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x6B3280u;
    {
        auto targetFn = runtime->lookupFunction(0x6B3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745D0u; }
        if (ctx->pc != 0x3745D0u) { return; }
    }
    ctx->pc = 0x3745D0u;
    // 0x3745d0: 0x1000000f
    ctx->pc = 0x3745D0u;
    {
        const bool branch_taken_0x3745d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x3745d0) {
            ctx->pc = 0x374610u;
            goto label_374610;
        }
    }
    ctx->pc = 0x3745D8u;
label_3745d8:
    // 0x3745d8: 0xc6030038
    ctx->pc = 0x3745d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3745dc: 0x3c0242c8
    ctx->pc = 0x3745dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x3745e0: 0xc602003c
    ctx->pc = 0x3745e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3745e4: 0x27a40040
    ctx->pc = 0x3745e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x3745e8: 0xc6010040
    ctx->pc = 0x3745e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3745ec: 0x44820000
    ctx->pc = 0x3745ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3745f0: 0xe4830000
    ctx->pc = 0x3745f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3745f4: 0xe4820004
    ctx->pc = 0x3745f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3745f8: 0xe4810008
    ctx->pc = 0x3745f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3745fc: 0xc7a10044
    ctx->pc = 0x3745fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374600: 0x46000800
    ctx->pc = 0x374600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x374604: 0xe7a00044
    ctx->pc = 0x374604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x374608: 0xc1acca0
    ctx->pc = 0x374608u;
    SET_GPR_U32(ctx, 31, 0x374610u);
    ctx->pc = 0x37460Cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 373)));
    ctx->pc = 0x6B3280u;
    {
        auto targetFn = runtime->lookupFunction(0x6B3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374610u; }
        if (ctx->pc != 0x374610u) { return; }
    }
    ctx->pc = 0x374610u;
label_374610:
    // 0x374610: 0x8e230008
    ctx->pc = 0x374610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_374614:
    // 0x374614: 0x8e440808
    ctx->pc = 0x374614u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x374618: 0x310c0
    ctx->pc = 0x374618u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x37461c: 0x431021
    ctx->pc = 0x37461cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374620: 0x21040
    ctx->pc = 0x374620u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x374624: 0x431021
    ctx->pc = 0x374624u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374628: 0x210c0
    ctx->pc = 0x374628u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x37462c: 0x442021
    ctx->pc = 0x37462cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x374630: 0x90820088
    ctx->pc = 0x374630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x374634: 0x10400005
    ctx->pc = 0x374634u;
    {
        const bool branch_taken_0x374634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x374638u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x374634) {
            ctx->pc = 0x37464Cu;
            goto label_37464c;
        }
    }
    ctx->pc = 0x37463Cu;
    // 0x37463c: 0xc0dd2c8
    ctx->pc = 0x37463Cu;
    SET_GPR_U32(ctx, 31, 0x374644u);
    ctx->pc = 0x374B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374B20_0x374b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374644u; }
    }
    if (ctx->pc != 0x374644u) { return; }
    ctx->pc = 0x374644u;
    // 0x374644: 0x10000004
    ctx->pc = 0x374644u;
    {
        const bool branch_taken_0x374644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374648u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
        if (branch_taken_0x374644) {
            ctx->pc = 0x374658u;
            goto label_374658;
        }
    }
    ctx->pc = 0x37464Cu;
label_37464c:
    // 0x37464c: 0xc0dd300
    ctx->pc = 0x37464Cu;
    SET_GPR_U32(ctx, 31, 0x374654u);
    ctx->pc = 0x374C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C00_0x374c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374654u; }
    }
    if (ctx->pc != 0x374654u) { return; }
    ctx->pc = 0x374654u;
    // 0x374654: 0x24040067
    ctx->pc = 0x374654u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 103));
label_374658:
    // 0x374658: 0xc06bde0
    ctx->pc = 0x374658u;
    SET_GPR_U32(ctx, 31, 0x374660u);
    ctx->pc = 0x37465Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374660u; }
        if (ctx->pc != 0x374660u) { return; }
    }
    ctx->pc = 0x374660u;
    // 0x374660: 0x9222000c
    ctx->pc = 0x374660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x374664: 0x10400006
    ctx->pc = 0x374664u;
    {
        const bool branch_taken_0x374664 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x374668u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
        if (branch_taken_0x374664) {
            ctx->pc = 0x374680u;
            goto label_374680;
        }
    }
    ctx->pc = 0x37466Cu;
    // 0x37466c: 0x2404005e
    ctx->pc = 0x37466cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x374670: 0xc06bde0
    ctx->pc = 0x374670u;
    SET_GPR_U32(ctx, 31, 0x374678u);
    ctx->pc = 0x374674u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374678u; }
        if (ctx->pc != 0x374678u) { return; }
    }
    ctx->pc = 0x374678u;
    // 0x374678: 0x10000004
    ctx->pc = 0x374678u;
    {
        const bool branch_taken_0x374678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37467Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x374678) {
            ctx->pc = 0x37468Cu;
            goto label_37468c;
        }
    }
    ctx->pc = 0x374680u;
label_374680:
    // 0x374680: 0xc06bde0
    ctx->pc = 0x374680u;
    SET_GPR_U32(ctx, 31, 0x374688u);
    ctx->pc = 0x374684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374688u; }
        if (ctx->pc != 0x374688u) { return; }
    }
    ctx->pc = 0x374688u;
    // 0x374688: 0x26240050
    ctx->pc = 0x374688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
label_37468c:
    // 0x37468c: 0xc0dd458
    ctx->pc = 0x37468Cu;
    SET_GPR_U32(ctx, 31, 0x374694u);
    ctx->pc = 0x375160u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375160_0x375160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374694u; }
    }
    if (ctx->pc != 0x374694u) { return; }
    ctx->pc = 0x374694u;
    // 0x374694: 0x10000012
    ctx->pc = 0x374694u;
    {
        const bool branch_taken_0x374694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374698u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x374694) {
            ctx->pc = 0x3746E0u;
            goto label_3746e0;
        }
    }
    ctx->pc = 0x37469Cu;
label_37469c:
    // 0x37469c: 0x2603003a
    ctx->pc = 0x37469cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 58));
    // 0x3746a0: 0x821021
    ctx->pc = 0x3746a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3746a4: 0x306400ff
    ctx->pc = 0x3746a4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 255));
    // 0x3746a8: 0x8c430008
    ctx->pc = 0x3746a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3746ac: 0x31840
    ctx->pc = 0x3746acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3746b0: 0x3c02004f
    ctx->pc = 0x3746b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x3746b4: 0x2431821
    ctx->pc = 0x3746b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3746b8: 0x2442dd90
    ctx->pc = 0x3746b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x3746bc: 0x94650008
    ctx->pc = 0x3746bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3746c0: 0x518c0
    ctx->pc = 0x3746c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x3746c4: 0x651821
    ctx->pc = 0x3746c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3746c8: 0x31840
    ctx->pc = 0x3746c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3746cc: 0x651821
    ctx->pc = 0x3746ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3746d0: 0x31880
    ctx->pc = 0x3746d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x3746d4: 0xc06bde0
    ctx->pc = 0x3746D4u;
    SET_GPR_U32(ctx, 31, 0x3746DCu);
    ctx->pc = 0x3746D8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746DCu; }
        if (ctx->pc != 0x3746DCu) { return; }
    }
    ctx->pc = 0x3746DCu;
    // 0x3746dc: 0x26100001
    ctx->pc = 0x3746dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_3746e0:
    // 0x3746e0: 0x8e240008
    ctx->pc = 0x3746e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3746e4: 0x8e420808
    ctx->pc = 0x3746e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x3746e8: 0x418c0
    ctx->pc = 0x3746e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x3746ec: 0x641821
    ctx->pc = 0x3746ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3746f0: 0x31840
    ctx->pc = 0x3746f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3746f4: 0x641821
    ctx->pc = 0x3746f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3746f8: 0x318c0
    ctx->pc = 0x3746f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x3746fc: 0x432021
    ctx->pc = 0x3746fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374700: 0x8c820004
    ctx->pc = 0x374700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x374704: 0x202102a
    ctx->pc = 0x374704u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x374708: 0x1440ffe4
    ctx->pc = 0x374708u;
    {
        const bool branch_taken_0x374708 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37470Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x374708) {
            ctx->pc = 0x37469Cu;
            goto label_37469c;
        }
    }
    ctx->pc = 0x374710u;
    // 0x374710: 0xc0dd31c
    ctx->pc = 0x374710u;
    SET_GPR_U32(ctx, 31, 0x374718u);
    ctx->pc = 0x374714u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    ctx->pc = 0x374C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374C70_0x374c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374718u; }
    }
    if (ctx->pc != 0x374718u) { return; }
    ctx->pc = 0x374718u;
    // 0x374718: 0x8e240008
    ctx->pc = 0x374718u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37471c: 0x40282d
    ctx->pc = 0x37471cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374720: 0x8e420818
    ctx->pc = 0x374720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2072)));
    // 0x374724: 0x41940
    ctx->pc = 0x374724u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 5));
    // 0x374728: 0x641821
    ctx->pc = 0x374728u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37472c: 0x31840
    ctx->pc = 0x37472cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x374730: 0xc064a60
    ctx->pc = 0x374730u;
    SET_GPR_U32(ctx, 31, 0x374738u);
    ctx->pc = 0x374734u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x192980u;
    {
        auto targetFn = runtime->lookupFunction(0x192980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374738u; }
        if (ctx->pc != 0x374738u) { return; }
    }
    ctx->pc = 0x374738u;
    // 0x374738: 0x8e240008
    ctx->pc = 0x374738u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37473c: 0x8e420808
    ctx->pc = 0x37473cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x374740: 0x418c0
    ctx->pc = 0x374740u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x374744: 0x641821
    ctx->pc = 0x374744u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374748: 0x31840
    ctx->pc = 0x374748u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x37474c: 0x641821
    ctx->pc = 0x37474cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374750: 0x318c0
    ctx->pc = 0x374750u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x374754: 0x431021
    ctx->pc = 0x374754u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374758: 0x8c440000
    ctx->pc = 0x374758u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37475c: 0xc06305c
    ctx->pc = 0x37475Cu;
    SET_GPR_U32(ctx, 31, 0x374764u);
    ctx->pc = 0x374760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374764u; }
        if (ctx->pc != 0x374764u) { return; }
    }
    ctx->pc = 0x374764u;
    // 0x374764: 0xdfbf0030
    ctx->pc = 0x374764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374768: 0x7bb20020
    ctx->pc = 0x374768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37476c: 0x7bb10010
    ctx->pc = 0x37476cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374770: 0x7bb00000
    ctx->pc = 0x374770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374774: 0x3e00008
    ctx->pc = 0x374774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x373F8Cu: goto label_373f8c;
            case 0x37407Cu: goto label_37407c;
            case 0x374230u: goto label_374230;
            case 0x3742C0u: goto label_3742c0;
            case 0x374304u: goto label_374304;
            case 0x374308u: goto label_374308;
            case 0x3743A4u: goto label_3743a4;
            case 0x3743C8u: goto label_3743c8;
            case 0x374400u: goto label_374400;
            case 0x374404u: goto label_374404;
            case 0x37443Cu: goto label_37443c;
            case 0x374448u: goto label_374448;
            case 0x374470u: goto label_374470;
            case 0x37447Cu: goto label_37447c;
            case 0x37448Cu: goto label_37448c;
            case 0x3744D0u: goto label_3744d0;
            case 0x3745B4u: goto label_3745b4;
            case 0x3745D8u: goto label_3745d8;
            case 0x374610u: goto label_374610;
            case 0x374614u: goto label_374614;
            case 0x37464Cu: goto label_37464c;
            case 0x374658u: goto label_374658;
            case 0x374680u: goto label_374680;
            case 0x37468Cu: goto label_37468c;
            case 0x37469Cu: goto label_37469c;
            case 0x3746E0u: goto label_3746e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37477Cu;
    // 0x37477c: 0x0
    ctx->pc = 0x37477cu;
    // NOP
}
