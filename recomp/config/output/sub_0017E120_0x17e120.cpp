#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017E120
// Address: 0x17e120 - 0x17e320
void sub_0017E120_0x17e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e120u;

    // 0x17e120: 0x27bdffe0
    ctx->pc = 0x17e120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e124: 0xffb20010
    ctx->pc = 0x17e124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17e128: 0xe0902d
    ctx->pc = 0x17e128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e12c: 0xffb00000
    ctx->pc = 0x17e12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e130: 0x26500400
    ctx->pc = 0x17e130u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 1024));
    // 0x17e134: 0x200382d
    ctx->pc = 0x17e134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e138: 0xffb10008
    ctx->pc = 0x17e138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e13c: 0xffbf0018
    ctx->pc = 0x17e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17e140: 0xc05f6bc
    ctx->pc = 0x17E140u;
    SET_GPR_U32(ctx, 31, 0x17E148u);
    ctx->pc = 0x17E144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17DAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DAF0_0x17daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E148u; }
    }
    if (ctx->pc != 0x17E148u) { return; }
    ctx->pc = 0x17E148u;
    // 0x17e148: 0x220202d
    ctx->pc = 0x17e148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e14c: 0x200282d
    ctx->pc = 0x17e14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e150: 0xdfb00000
    ctx->pc = 0x17e150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e154: 0x240302d
    ctx->pc = 0x17e154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e158: 0xdfb20010
    ctx->pc = 0x17e158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e15c: 0xdfb10008
    ctx->pc = 0x17e15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e160: 0xdfbf0018
    ctx->pc = 0x17e160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e164: 0x805f85c
    ctx->pc = 0x17E164u;
    ctx->pc = 0x17E168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17E170u;
    goto label_17e170;
    ctx->pc = 0x17E16Cu;
    // 0x17e16c: 0x0
    ctx->pc = 0x17e16cu;
    // NOP
label_17e170:
    // 0x17e170: 0x27bdffe0
    ctx->pc = 0x17e170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e174: 0xffb00000
    ctx->pc = 0x17e174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e178: 0xc0802d
    ctx->pc = 0x17e178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e17c: 0xffb10008
    ctx->pc = 0x17e17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e180: 0xa0882d
    ctx->pc = 0x17e180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e184: 0xffbf0010
    ctx->pc = 0x17e184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e188: 0xe7b40018
    ctx->pc = 0x17e188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17e18c: 0xc05f8ea
    ctx->pc = 0x17E18Cu;
    SET_GPR_U32(ctx, 31, 0x17E194u);
    ctx->pc = 0x17E190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x17E3A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E3A8_0x17e3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E194u; }
    }
    if (ctx->pc != 0x17E194u) { return; }
    ctx->pc = 0x17E194u;
    // 0x17e194: 0x24030001
    ctx->pc = 0x17e194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e198: 0x1443000f
    ctx->pc = 0x17E198u;
    {
        const bool branch_taken_0x17e198 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17E19Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e198) {
            ctx->pc = 0x17E1D8u;
            goto label_17e1d8;
        }
    }
    ctx->pc = 0x17E1A0u;
    // 0x17e1a0: 0x3c077fff
    ctx->pc = 0x17e1a0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32767 << 16));
    // 0x17e1a4: 0x34e7ff80
    ctx->pc = 0x17e1a4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65408));
label_17e1a8:
    // 0x17e1a8: 0x62080
    ctx->pc = 0x17e1a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 2));
    // 0x17e1ac: 0x24c60001
    ctx->pc = 0x17e1acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x17e1b0: 0x911821
    ctx->pc = 0x17e1b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x17e1b4: 0x902021
    ctx->pc = 0x17e1b4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x17e1b8: 0x8c620000
    ctx->pc = 0x17e1b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e1bc: 0x28c50100
    ctx->pc = 0x17e1bcu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), 256));
    // 0x17e1c0: 0x471024
    ctx->pc = 0x17e1c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17e1c4: 0x21040
    ctx->pc = 0x17e1c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x17e1c8: 0x14a0fff7
    ctx->pc = 0x17E1C8u;
    {
        const bool branch_taken_0x17e1c8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E1CCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17e1c8) {
            ctx->pc = 0x17E1A8u;
            goto label_17e1a8;
        }
    }
    ctx->pc = 0x17E1D0u;
    // 0x17e1d0: 0x10000033
    ctx->pc = 0x17E1D0u;
    {
        const bool branch_taken_0x17e1d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E1D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17e1d0) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17E1D8u;
label_17e1d8:
    // 0x17e1d8: 0x3c014eff
    ctx->pc = 0x17e1d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)20223 << 16));
    // 0x17e1dc: 0x3421ffff
    ctx->pc = 0x17e1dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65535));
    // 0x17e1e0: 0x44811800
    ctx->pc = 0x17e1e0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x17e1e4: 0x3c014b7f
    ctx->pc = 0x17e1e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19327 << 16));
    // 0x17e1e8: 0x3421ffff
    ctx->pc = 0x17e1e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65535));
    // 0x17e1ec: 0x44811000
    ctx->pc = 0x17e1ecu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x17e1f0: 0x24080001
    ctx->pc = 0x17e1f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e1f4: 0x3c098000
    ctx->pc = 0x17e1f4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)32768 << 16));
label_17e1f8:
    // 0x17e1f8: 0x61080
    ctx->pc = 0x17e1f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x17e1fc: 0x24c60001
    ctx->pc = 0x17e1fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x17e200: 0x511821
    ctx->pc = 0x17e200u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17e204: 0x28c70100
    ctx->pc = 0x17e204u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 6), 256));
    // 0x17e208: 0x8c640000
    ctx->pc = 0x17e208u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e20c: 0x14800003
    ctx->pc = 0x17E20Cu;
    {
        const bool branch_taken_0x17e20c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E210u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x17e20c) {
            ctx->pc = 0x17E21Cu;
            goto label_17e21c;
        }
    }
    ctx->pc = 0x17E214u;
    // 0x17e214: 0xac680000
    ctx->pc = 0x17e214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x17e218: 0x100202d
    ctx->pc = 0x17e218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_17e21c:
    // 0x17e21c: 0x4800006
    ctx->pc = 0x17E21Cu;
    {
        const bool branch_taken_0x17e21c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x17E220u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x17e21c) {
            ctx->pc = 0x17E238u;
            goto label_17e238;
        }
    }
    ctx->pc = 0x17E224u;
    // 0x17e224: 0x44840000
    ctx->pc = 0x17e224u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x17e228: 0x46800020
    ctx->pc = 0x17e228u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x17e22c: 0x10000008
    ctx->pc = 0x17E22Cu;
    {
        const bool branch_taken_0x17e22c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E230u;
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x17e22c) {
            ctx->pc = 0x17E250u;
            goto label_17e250;
        }
    }
    ctx->pc = 0x17E234u;
    // 0x17e234: 0x0
    ctx->pc = 0x17e234u;
    // NOP
label_17e238:
    // 0x17e238: 0x30820001
    ctx->pc = 0x17e238u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x17e23c: 0x431025
    ctx->pc = 0x17e23cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e240: 0x44820000
    ctx->pc = 0x17e240u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x17e244: 0x46800020
    ctx->pc = 0x17e244u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x17e248: 0x46000000
    ctx->pc = 0x17e248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x17e24c: 0x4600a002
    ctx->pc = 0x17e24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_17e250:
    // 0x17e250: 0x3c014f00
    ctx->pc = 0x17e250u;
    SET_GPR_U32(ctx, 1, ((uint32_t)20224 << 16));
    // 0x17e254: 0x44810800
    ctx->pc = 0x17e254u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x17e258: 0x0
    ctx->pc = 0x17e258u;
    // NOP
    // 0x17e25c: 0x0
    ctx->pc = 0x17e25cu;
    // NOP
    // 0x17e260: 0x46030003
    ctx->pc = 0x17e260u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x17e264: 0x0
    ctx->pc = 0x17e264u;
    // NOP
    // 0x17e268: 0x0
    ctx->pc = 0x17e268u;
    // NOP
    // 0x17e26c: 0x46001003
    ctx->pc = 0x17e26cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x17e270: 0x46000836
    ctx->pc = 0x17e270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e274: 0x46000124
    ctx->pc = 0x17e274u;
    *(int32_t*)&ctx->f[4] = FPU_CVT_W_S(ctx->f[0]);
    // 0x17e278: 0x44022000
    ctx->pc = 0x17e278u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[4]);
    // 0x17e27c: 0x45000005
    ctx->pc = 0x17E27Cu;
    {
        const bool branch_taken_0x17e27c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e27c) {
            ctx->pc = 0x17E294u;
            goto label_17e294;
        }
    }
    ctx->pc = 0x17E284u;
    // 0x17e284: 0x46010001
    ctx->pc = 0x17e284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17e288: 0x46000064
    ctx->pc = 0x17e288u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x17e28c: 0x44020800
    ctx->pc = 0x17e28cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x17e290: 0x491025
    ctx->pc = 0x17e290u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_17e294:
    // 0x17e294: 0x14e0ffd8
    ctx->pc = 0x17E294u;
    {
        const bool branch_taken_0x17e294 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E298u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17e294) {
            ctx->pc = 0x17E1F8u;
            goto label_17e1f8;
        }
    }
    ctx->pc = 0x17E29Cu;
    // 0x17e29c: 0xdfb00000
    ctx->pc = 0x17e29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e2a0:
    // 0x17e2a0: 0xdfb10008
    ctx->pc = 0x17e2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e2a4: 0xdfbf0010
    ctx->pc = 0x17e2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e2a8: 0xc7b40018
    ctx->pc = 0x17e2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e2ac: 0x3e00008
    ctx->pc = 0x17E2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E2B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E170u: goto label_17e170;
            case 0x17E1A8u: goto label_17e1a8;
            case 0x17E1D8u: goto label_17e1d8;
            case 0x17E1F8u: goto label_17e1f8;
            case 0x17E21Cu: goto label_17e21c;
            case 0x17E238u: goto label_17e238;
            case 0x17E250u: goto label_17e250;
            case 0x17E294u: goto label_17e294;
            case 0x17E2A0u: goto label_17e2a0;
            case 0x17E2FCu: goto label_17e2fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E2B4u;
    // 0x17e2b4: 0x0
    ctx->pc = 0x17e2b4u;
    // NOP
    // 0x17e2b8: 0x27bdffe0
    ctx->pc = 0x17e2b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e2bc: 0xffb00000
    ctx->pc = 0x17e2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e2c0: 0x80802d
    ctx->pc = 0x17e2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2c4: 0xe7b50018
    ctx->pc = 0x17e2c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17e2c8: 0x46006546
    ctx->pc = 0x17e2c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x17e2cc: 0xe7b40010
    ctx->pc = 0x17e2ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17e2d0: 0xffbf0008
    ctx->pc = 0x17e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17e2d4: 0xc05f8c8
    ctx->pc = 0x17E2D4u;
    SET_GPR_U32(ctx, 31, 0x17E2DCu);
    ctx->pc = 0x17E2D8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x17E320u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E320_0x17e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2DCu; }
    }
    if (ctx->pc != 0x17E2DCu) { return; }
    ctx->pc = 0x17E2DCu;
    // 0x17e2dc: 0x3c060024
    ctx->pc = 0x17e2dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17e2e0: 0x24030001
    ctx->pc = 0x17e2e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e2e4: 0x202d
    ctx->pc = 0x17e2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e2e8: 0x24c61498
    ctx->pc = 0x17e2e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5272));
    // 0x17e2ec: 0x10430003
    ctx->pc = 0x17E2ECu;
    {
        const bool branch_taken_0x17e2ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x17E2F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e2ec) {
            ctx->pc = 0x17E2FCu;
            goto label_17e2fc;
        }
    }
    ctx->pc = 0x17E2F4u;
    // 0x17e2f4: 0xc05f472
    ctx->pc = 0x17E2F4u;
    SET_GPR_U32(ctx, 31, 0x17E2FCu);
    ctx->pc = 0x17D1C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D1C8_0x17d1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2FCu; }
    }
    if (ctx->pc != 0x17E2FCu) { return; }
    ctx->pc = 0x17E2FCu;
label_17e2fc:
    // 0x17e2fc: 0xe6140040
    ctx->pc = 0x17e2fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x17e300: 0xe615003c
    ctx->pc = 0x17e300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x17e304: 0xdfbf0008
    ctx->pc = 0x17e304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e308: 0xdfb00000
    ctx->pc = 0x17e308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e30c: 0xc7b50018
    ctx->pc = 0x17e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17e310: 0xc7b40010
    ctx->pc = 0x17e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e314: 0x3e00008
    ctx->pc = 0x17E314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E318u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E170u: goto label_17e170;
            case 0x17E1A8u: goto label_17e1a8;
            case 0x17E1D8u: goto label_17e1d8;
            case 0x17E1F8u: goto label_17e1f8;
            case 0x17E21Cu: goto label_17e21c;
            case 0x17E238u: goto label_17e238;
            case 0x17E250u: goto label_17e250;
            case 0x17E294u: goto label_17e294;
            case 0x17E2A0u: goto label_17e2a0;
            case 0x17E2FCu: goto label_17e2fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E31Cu;
    // 0x17e31c: 0x0
    ctx->pc = 0x17e31cu;
    // NOP
}
