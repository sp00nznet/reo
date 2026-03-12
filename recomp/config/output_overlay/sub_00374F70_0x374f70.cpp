#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00374F70
// Address: 0x374f70 - 0x375160
void sub_00374F70_0x374f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x374f70u;

    // 0x374f70: 0x27bdffa0
    ctx->pc = 0x374f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x374f74: 0x3c020001
    ctx->pc = 0x374f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x374f78: 0xffbf0010
    ctx->pc = 0x374f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x374f7c: 0xe7b7000c
    ctx->pc = 0x374f7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x374f80: 0xe7b60008
    ctx->pc = 0x374f80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x374f84: 0xe7b50004
    ctx->pc = 0x374f84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x374f88: 0xe7b40000
    ctx->pc = 0x374f88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x374f8c: 0x84a30002
    ctx->pc = 0x374f8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x374f90: 0x431023
    ctx->pc = 0x374f90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374f94: 0x3042ffff
    ctx->pc = 0x374f94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x374f98: 0x4400004
    ctx->pc = 0x374F98u;
    {
        const bool branch_taken_0x374f98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x374F9Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x374f98) {
            ctx->pc = 0x374FACu;
            goto label_374fac;
        }
    }
    ctx->pc = 0x374FA0u;
    // 0x374fa0: 0x44820000
    ctx->pc = 0x374fa0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x374fa4: 0x10000007
    ctx->pc = 0x374FA4u;
    {
        const bool branch_taken_0x374fa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374FA8u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x374fa4) {
            ctx->pc = 0x374FC4u;
            goto label_374fc4;
        }
    }
    ctx->pc = 0x374FACu;
label_374fac:
    // 0x374fac: 0x30420001
    ctx->pc = 0x374facu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x374fb0: 0x621825
    ctx->pc = 0x374fb0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374fb4: 0x44830000
    ctx->pc = 0x374fb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x374fb8: 0x0
    ctx->pc = 0x374fb8u;
    // NOP
    // 0x374fbc: 0x46800060
    ctx->pc = 0x374fbcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x374fc0: 0x46010840
    ctx->pc = 0x374fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_374fc4:
    // 0x374fc4: 0x3c034780
    ctx->pc = 0x374fc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)18304 << 16));
    // 0x374fc8: 0x84a20000
    ctx->pc = 0x374fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x374fcc: 0x44830000
    ctx->pc = 0x374fccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x374fd0: 0x0
    ctx->pc = 0x374fd0u;
    // NOP
    // 0x374fd4: 0x46000d03
    ctx->pc = 0x374fd4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x374fd8: 0x3c030001
    ctx->pc = 0x374fd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x374fdc: 0x0
    ctx->pc = 0x374fdcu;
    // NOP
    // 0x374fe0: 0x621023
    ctx->pc = 0x374fe0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374fe4: 0x3042ffff
    ctx->pc = 0x374fe4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x374fe8: 0x4400004
    ctx->pc = 0x374FE8u;
    {
        const bool branch_taken_0x374fe8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x374FECu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x374fe8) {
            ctx->pc = 0x374FFCu;
            goto label_374ffc;
        }
    }
    ctx->pc = 0x374FF0u;
    // 0x374ff0: 0x44820000
    ctx->pc = 0x374ff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x374ff4: 0x10000007
    ctx->pc = 0x374FF4u;
    {
        const bool branch_taken_0x374ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374FF8u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x374ff4) {
            ctx->pc = 0x375014u;
            goto label_375014;
        }
    }
    ctx->pc = 0x374FFCu;
label_374ffc:
    // 0x374ffc: 0x30420001
    ctx->pc = 0x374ffcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x375000: 0x621825
    ctx->pc = 0x375000u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x375004: 0x44830000
    ctx->pc = 0x375004u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x375008: 0x0
    ctx->pc = 0x375008u;
    // NOP
    // 0x37500c: 0x46800060
    ctx->pc = 0x37500cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x375010: 0x46010840
    ctx->pc = 0x375010u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_375014:
    // 0x375014: 0x3c024780
    ctx->pc = 0x375014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x375018: 0x3c040032
    ctx->pc = 0x375018u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x37501c: 0x44820000
    ctx->pc = 0x37501cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x375020: 0x3c050032
    ctx->pc = 0x375020u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x375024: 0x24844144
    ctx->pc = 0x375024u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16708));
    // 0x375028: 0x24a54138
    ctx->pc = 0x375028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x37502c: 0x46000d83
    ctx->pc = 0x37502cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
    // 0x375030: 0x0
    ctx->pc = 0x375030u;
    // NOP
    // 0x375034: 0x0
    ctx->pc = 0x375034u;
    // NOP
    // 0x375038: 0xc0dc050
    ctx->pc = 0x375038u;
    SET_GPR_U32(ctx, 31, 0x375040u);
    ctx->pc = 0x370140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370140_0x370140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375040u; }
    }
    if (ctx->pc != 0x375040u) { return; }
    ctx->pc = 0x375040u;
    // 0x375040: 0x3042ffff
    ctx->pc = 0x375040u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x375044: 0x4400004
    ctx->pc = 0x375044u;
    {
        const bool branch_taken_0x375044 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x375048u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x375044) {
            ctx->pc = 0x375058u;
            goto label_375058;
        }
    }
    ctx->pc = 0x37504Cu;
    // 0x37504c: 0x44820000
    ctx->pc = 0x37504cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x375050: 0x10000007
    ctx->pc = 0x375050u;
    {
        const bool branch_taken_0x375050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375054u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x375050) {
            ctx->pc = 0x375070u;
            goto label_375070;
        }
    }
    ctx->pc = 0x375058u;
label_375058:
    // 0x375058: 0x30420001
    ctx->pc = 0x375058u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x37505c: 0x621825
    ctx->pc = 0x37505cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x375060: 0x44830000
    ctx->pc = 0x375060u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x375064: 0x0
    ctx->pc = 0x375064u;
    // NOP
    // 0x375068: 0x46800060
    ctx->pc = 0x375068u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x37506c: 0x46010840
    ctx->pc = 0x37506cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_375070:
    // 0x375070: 0x3c024780
    ctx->pc = 0x375070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x375074: 0x3c040032
    ctx->pc = 0x375074u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x375078: 0x44820000
    ctx->pc = 0x375078u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x37507c: 0x3c050032
    ctx->pc = 0x37507cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x375080: 0x24844144
    ctx->pc = 0x375080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16708));
    // 0x375084: 0x24a54138
    ctx->pc = 0x375084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x375088: 0x46000dc3
    ctx->pc = 0x375088u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[23] = ctx->f[1] / ctx->f[0];
    // 0x37508c: 0x0
    ctx->pc = 0x37508cu;
    // NOP
    // 0x375090: 0x0
    ctx->pc = 0x375090u;
    // NOP
    // 0x375094: 0xc0dc068
    ctx->pc = 0x375094u;
    SET_GPR_U32(ctx, 31, 0x37509Cu);
    ctx->pc = 0x3701A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003701A0_0x3701a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37509Cu; }
    }
    if (ctx->pc != 0x37509Cu) { return; }
    ctx->pc = 0x37509Cu;
    // 0x37509c: 0x3042ffff
    ctx->pc = 0x37509cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x3750a0: 0x4400004
    ctx->pc = 0x3750A0u;
    {
        const bool branch_taken_0x3750a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3750A4u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x3750a0) {
            ctx->pc = 0x3750B4u;
            goto label_3750b4;
        }
    }
    ctx->pc = 0x3750A8u;
    // 0x3750a8: 0x44820000
    ctx->pc = 0x3750a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3750ac: 0x10000007
    ctx->pc = 0x3750ACu;
    {
        const bool branch_taken_0x3750ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3750B0u;
        ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x3750ac) {
            ctx->pc = 0x3750CCu;
            goto label_3750cc;
        }
    }
    ctx->pc = 0x3750B4u;
label_3750b4:
    // 0x3750b4: 0x30420001
    ctx->pc = 0x3750b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x3750b8: 0x621825
    ctx->pc = 0x3750b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3750bc: 0x44830000
    ctx->pc = 0x3750bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x3750c0: 0x0
    ctx->pc = 0x3750c0u;
    // NOP
    // 0x3750c4: 0x468000a0
    ctx->pc = 0x3750c4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3750c8: 0x46021080
    ctx->pc = 0x3750c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3750cc:
    // 0x3750cc: 0x3c034780
    ctx->pc = 0x3750ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)18304 << 16));
    // 0x3750d0: 0x3c0240a0
    ctx->pc = 0x3750d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16544 << 16));
    // 0x3750d4: 0x44830800
    ctx->pc = 0x3750d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x3750d8: 0x44820000
    ctx->pc = 0x3750d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3750dc: 0x0
    ctx->pc = 0x3750dcu;
    // NOP
    // 0x3750e0: 0x46011543
    ctx->pc = 0x3750e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[21] = ctx->f[2] / ctx->f[1];
    // 0x3750e4: 0x4600a502
    ctx->pc = 0x3750e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3750e8: 0x4600bdc2
    ctx->pc = 0x3750e8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x3750ec: 0x4600b582
    ctx->pc = 0x3750ecu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x3750f0: 0x4600ad42
    ctx->pc = 0x3750f0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x3750f4: 0xc064880
    ctx->pc = 0x3750F4u;
    SET_GPR_U32(ctx, 31, 0x3750FCu);
    ctx->pc = 0x3750F8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    ctx->pc = 0x192200u;
    {
        auto targetFn = runtime->lookupFunction(0x192200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3750FCu; }
        if (ctx->pc != 0x3750FCu) { return; }
    }
    ctx->pc = 0x3750FCu;
    // 0x3750fc: 0x4615b300
    ctx->pc = 0x3750fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x375100: 0xc064880
    ctx->pc = 0x375100u;
    SET_GPR_U32(ctx, 31, 0x375108u);
    ctx->pc = 0x375104u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x192200u;
    {
        auto targetFn = runtime->lookupFunction(0x192200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375108u; }
        if (ctx->pc != 0x375108u) { return; }
    }
    ctx->pc = 0x375108u;
    // 0x375108: 0x44807000
    ctx->pc = 0x375108u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x37510c: 0x27a40020
    ctx->pc = 0x37510cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x375110: 0x4600a306
    ctx->pc = 0x375110u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x375114: 0xc063fc4
    ctx->pc = 0x375114u;
    SET_GPR_U32(ctx, 31, 0x37511Cu);
    ctx->pc = 0x375118u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x18FF10u;
    {
        auto targetFn = runtime->lookupFunction(0x18FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37511Cu; }
        if (ctx->pc != 0x37511Cu) { return; }
    }
    ctx->pc = 0x37511Cu;
    // 0x37511c: 0x44806000
    ctx->pc = 0x37511cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x375120: 0x27a40020
    ctx->pc = 0x375120u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x375124: 0x46006346
    ctx->pc = 0x375124u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x375128: 0xc0640b4
    ctx->pc = 0x375128u;
    SET_GPR_U32(ctx, 31, 0x375130u);
    ctx->pc = 0x37512Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1902D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375130u; }
        if (ctx->pc != 0x375130u) { return; }
    }
    ctx->pc = 0x375130u;
    // 0x375130: 0x27a50020
    ctx->pc = 0x375130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x375134: 0xc06bde0
    ctx->pc = 0x375134u;
    SET_GPR_U32(ctx, 31, 0x37513Cu);
    ctx->pc = 0x375138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37513Cu; }
        if (ctx->pc != 0x37513Cu) { return; }
    }
    ctx->pc = 0x37513Cu;
    // 0x37513c: 0xdfbf0010
    ctx->pc = 0x37513cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375140: 0xc7b7000c
    ctx->pc = 0x375140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x375144: 0xc7b60008
    ctx->pc = 0x375144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x375148: 0xc7b50004
    ctx->pc = 0x375148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37514c: 0xc7b40000
    ctx->pc = 0x37514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x375150: 0x3e00008
    ctx->pc = 0x375150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375154u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x374FACu: goto label_374fac;
            case 0x374FC4u: goto label_374fc4;
            case 0x374FFCu: goto label_374ffc;
            case 0x375014u: goto label_375014;
            case 0x375058u: goto label_375058;
            case 0x375070u: goto label_375070;
            case 0x3750B4u: goto label_3750b4;
            case 0x3750CCu: goto label_3750cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x375158u;
    // 0x375158: 0x0
    ctx->pc = 0x375158u;
    // NOP
    // 0x37515c: 0x0
    ctx->pc = 0x37515cu;
    // NOP
}
