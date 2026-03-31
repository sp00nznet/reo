#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018F040
// Address: 0x18f040 - 0x18f1e0
void sub_0018F040_0x18f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18f040u;

    // 0x18f040: 0x3c010029
    ctx->pc = 0x18f040u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x18f044: 0x8c830004
    ctx->pc = 0x18f044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18f048: 0x8c224160
    ctx->pc = 0x18f048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16736)));
    // 0x18f04c: 0xaca00000
    ctx->pc = 0x18f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x18f050: 0x621021
    ctx->pc = 0x18f050u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f054: 0xacc00000
    ctx->pc = 0x18f054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x18f058: 0x84430006
    ctx->pc = 0x18f058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x18f05c: 0x44830000
    ctx->pc = 0x18f05cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x18f060: 0x0
    ctx->pc = 0x18f060u;
    // NOP
    // 0x18f064: 0x46800020
    ctx->pc = 0x18f064u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18f068: 0x46006036
    ctx->pc = 0x18f068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f06c: 0x45010005
    ctx->pc = 0x18F06Cu;
    {
        const bool branch_taken_0x18f06c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f06c) {
            ctx->pc = 0x18F084u;
            goto label_18f084;
        }
    }
    ctx->pc = 0x18F074u;
    // 0x18f074: 0x94880002
    ctx->pc = 0x18f074u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18f078: 0x24030001
    ctx->pc = 0x18f078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f07c: 0x15030005
    ctx->pc = 0x18F07Cu;
    {
        const bool branch_taken_0x18f07c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        ctx->pc = 0x18F080u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x18f07c) {
            ctx->pc = 0x18F094u;
            goto label_18f094;
        }
    }
    ctx->pc = 0x18F084u;
label_18f084:
    // 0x18f084: 0xaca20000
    ctx->pc = 0x18f084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18f088: 0x102d
    ctx->pc = 0x18f088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f08c: 0x10000052
    ctx->pc = 0x18F08Cu;
    {
        const bool branch_taken_0x18f08c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F090u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x18f08c) {
            ctx->pc = 0x18F1D8u;
            goto label_18f1d8;
        }
    }
    ctx->pc = 0x18F094u;
label_18f094:
    // 0x18f094: 0x681821
    ctx->pc = 0x18f094u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18f098: 0x31880
    ctx->pc = 0x18f098u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f09c: 0x621821
    ctx->pc = 0x18f09cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f0a0: 0x8463fffa
    ctx->pc = 0x18f0a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967290)));
    // 0x18f0a4: 0x44830000
    ctx->pc = 0x18f0a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x18f0a8: 0x0
    ctx->pc = 0x18f0a8u;
    // NOP
    // 0x18f0ac: 0x46800020
    ctx->pc = 0x18f0acu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18f0b0: 0x46006034
    ctx->pc = 0x18f0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f0b4: 0x4501000d
    ctx->pc = 0x18F0B4u;
    {
        const bool branch_taken_0x18f0b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f0b4) {
            ctx->pc = 0x18F0ECu;
            goto label_18f0ec;
        }
    }
    ctx->pc = 0x18F0BCu;
    // 0x18f0bc: 0x2507ffff
    ctx->pc = 0x18f0bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x18f0c0: 0x71840
    ctx->pc = 0x18f0c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
    // 0x18f0c4: 0x671821
    ctx->pc = 0x18f0c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18f0c8: 0x31880
    ctx->pc = 0x18f0c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f0cc: 0x431021
    ctx->pc = 0x18f0ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f0d0: 0xaca20000
    ctx->pc = 0x18f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18f0d4: 0xacc00000
    ctx->pc = 0x18f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x18f0d8: 0x94820002
    ctx->pc = 0x18f0d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18f0dc: 0x2442ffff
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18f0e0: 0x2143c
    ctx->pc = 0x18f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18f0e4: 0x1000003c
    ctx->pc = 0x18F0E4u;
    {
        const bool branch_taken_0x18f0e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F0E8u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        if (branch_taken_0x18f0e4) {
            ctx->pc = 0x18F1D8u;
            goto label_18f1d8;
        }
    }
    ctx->pc = 0x18F0ECu;
label_18f0ec:
    // 0x18f0ec: 0x71c3c
    ctx->pc = 0x18f0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x18f0f0: 0x31c3f
    ctx->pc = 0x18f0f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18f0f4: 0x4610003
    ctx->pc = 0x18F0F4u;
    {
        const bool branch_taken_0x18f0f4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18f0f4) {
            ctx->pc = 0x18F104u;
            goto label_18f104;
        }
    }
    ctx->pc = 0x18F0FCu;
    // 0x18f0fc: 0x10000007
    ctx->pc = 0x18F0FCu;
    {
        const bool branch_taken_0x18f0fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F100u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f0fc) {
            ctx->pc = 0x18F11Cu;
            goto label_18f11c;
        }
    }
    ctx->pc = 0x18F104u;
label_18f104:
    // 0x18f104: 0x68182a
    ctx->pc = 0x18f104u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 8)));
    // 0x18f108: 0x14600005
    ctx->pc = 0x18F108u;
    {
        const bool branch_taken_0x18f108 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F10Cu;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
        if (branch_taken_0x18f108) {
            ctx->pc = 0x18F120u;
            goto label_18f120;
        }
    }
    ctx->pc = 0x18F110u;
    // 0x18f110: 0x2503ffff
    ctx->pc = 0x18f110u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x18f114: 0x33c3c
    ctx->pc = 0x18f114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18f118: 0x73c3f
    ctx->pc = 0x18f118u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_18f11c:
    // 0x18f11c: 0x7243c
    ctx->pc = 0x18f11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
label_18f120:
    // 0x18f120: 0x4243f
    ctx->pc = 0x18f120u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x18f124: 0x41840
    ctx->pc = 0x18f124u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x18f128: 0x641821
    ctx->pc = 0x18f128u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f12c: 0x31880
    ctx->pc = 0x18f12cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f130: 0x431021
    ctx->pc = 0x18f130u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18f134:
    // 0x18f134: 0x84440006
    ctx->pc = 0x18f134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x18f138: 0x44840000
    ctx->pc = 0x18f138u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x18f13c: 0x0
    ctx->pc = 0x18f13cu;
    // NOP
    // 0x18f140: 0x46800020
    ctx->pc = 0x18f140u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18f144: 0x460c0032
    ctx->pc = 0x18f144u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f148: 0x45000005
    ctx->pc = 0x18F148u;
    {
        const bool branch_taken_0x18f148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f148) {
            ctx->pc = 0x18F160u;
            goto label_18f160;
        }
    }
    ctx->pc = 0x18F150u;
    // 0x18f150: 0xaca20000
    ctx->pc = 0x18f150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18f154: 0xe0102d
    ctx->pc = 0x18f154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f158: 0x1000001f
    ctx->pc = 0x18F158u;
    {
        const bool branch_taken_0x18f158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F15Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x18f158) {
            ctx->pc = 0x18F1D8u;
            goto label_18f1d8;
        }
    }
    ctx->pc = 0x18F160u;
label_18f160:
    // 0x18f160: 0x460c0034
    ctx->pc = 0x18f160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f164: 0x4500000d
    ctx->pc = 0x18F164u;
    {
        const bool branch_taken_0x18f164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f164) {
            ctx->pc = 0x18F19Cu;
            goto label_18f19c;
        }
    }
    ctx->pc = 0x18F16Cu;
    // 0x18f16c: 0x84430012
    ctx->pc = 0x18f16cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x18f170: 0x44830000
    ctx->pc = 0x18f170u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x18f174: 0x0
    ctx->pc = 0x18f174u;
    // NOP
    // 0x18f178: 0x46800020
    ctx->pc = 0x18f178u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18f17c: 0x46006034
    ctx->pc = 0x18f17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f180: 0x45000006
    ctx->pc = 0x18F180u;
    {
        const bool branch_taken_0x18f180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f180) {
            ctx->pc = 0x18F19Cu;
            goto label_18f19c;
        }
    }
    ctx->pc = 0x18F188u;
    // 0x18f188: 0xaca20000
    ctx->pc = 0x18f188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18f18c: 0x2442000c
    ctx->pc = 0x18f18cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x18f190: 0xacc20000
    ctx->pc = 0x18f190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18f194: 0x10000010
    ctx->pc = 0x18F194u;
    {
        const bool branch_taken_0x18f194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F198u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f194) {
            ctx->pc = 0x18F1D8u;
            goto label_18f1d8;
        }
    }
    ctx->pc = 0x18F19Cu;
label_18f19c:
    // 0x18f19c: 0x44840000
    ctx->pc = 0x18f19cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x18f1a0: 0x0
    ctx->pc = 0x18f1a0u;
    // NOP
    // 0x18f1a4: 0x46800020
    ctx->pc = 0x18f1a4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x18f1a8: 0x46006034
    ctx->pc = 0x18f1a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f1ac: 0x45000006
    ctx->pc = 0x18F1ACu;
    {
        const bool branch_taken_0x18f1ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F1B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x18f1ac) {
            ctx->pc = 0x18F1C8u;
            goto label_18f1c8;
        }
    }
    ctx->pc = 0x18F1B4u;
    // 0x18f1b4: 0x24e3ffff
    ctx->pc = 0x18f1b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x18f1b8: 0x2442fff4
    ctx->pc = 0x18f1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x18f1bc: 0x33c3c
    ctx->pc = 0x18f1bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18f1c0: 0x1000ffdc
    ctx->pc = 0x18F1C0u;
    {
        const bool branch_taken_0x18f1c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F1C4u;
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        if (branch_taken_0x18f1c0) {
            ctx->pc = 0x18F134u;
            goto label_18f134;
        }
    }
    ctx->pc = 0x18F1C8u;
label_18f1c8:
    // 0x18f1c8: 0x2442000c
    ctx->pc = 0x18f1c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x18f1cc: 0x33c3c
    ctx->pc = 0x18f1ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18f1d0: 0x1000ffd8
    ctx->pc = 0x18F1D0u;
    {
        const bool branch_taken_0x18f1d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F1D4u;
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        if (branch_taken_0x18f1d0) {
            ctx->pc = 0x18F134u;
            goto label_18f134;
        }
    }
    ctx->pc = 0x18F1D8u;
label_18f1d8:
    // 0x18f1d8: 0x3e00008
    ctx->pc = 0x18F1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F084u: goto label_18f084;
            case 0x18F094u: goto label_18f094;
            case 0x18F0ECu: goto label_18f0ec;
            case 0x18F104u: goto label_18f104;
            case 0x18F11Cu: goto label_18f11c;
            case 0x18F120u: goto label_18f120;
            case 0x18F134u: goto label_18f134;
            case 0x18F160u: goto label_18f160;
            case 0x18F19Cu: goto label_18f19c;
            case 0x18F1C8u: goto label_18f1c8;
            case 0x18F1D8u: goto label_18f1d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F1E0u;
}
