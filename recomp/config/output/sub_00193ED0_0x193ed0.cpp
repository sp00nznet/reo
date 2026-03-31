#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193ED0
// Address: 0x193ed0 - 0x194fd0
void sub_00193ED0_0x193ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193ed0u;

label_193ed0:
    // 0x193ed0: 0x24020fff
    ctx->pc = 0x193ed0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4095));
    // 0x193ed4: 0x3c01002a
    ctx->pc = 0x193ed4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x193ed8: 0x44820000
    ctx->pc = 0x193ed8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x193edc: 0xc423fd54
    ctx->pc = 0x193edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x193ee0: 0x46800060
    ctx->pc = 0x193ee0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x193ee4: 0x3c01002a
    ctx->pc = 0x193ee4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x193ee8: 0x46801820
    ctx->pc = 0x193ee8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x193eec: 0x46006300
    ctx->pc = 0x193eecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x193ef0: 0xc422fd58
    ctx->pc = 0x193ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193ef4: 0x460c0834
    ctx->pc = 0x193ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193ef8: 0x46801020
    ctx->pc = 0x193ef8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x193efc: 0x45000003
    ctx->pc = 0x193EFCu;
    {
        const bool branch_taken_0x193efc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x193F00u;
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x193efc) {
            ctx->pc = 0x193F0Cu;
            goto label_193f0c;
        }
    }
    ctx->pc = 0x193F04u;
    // 0x193f04: 0x1000001d
    ctx->pc = 0x193F04u;
    {
        const bool branch_taken_0x193f04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193F08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193f04) {
            ctx->pc = 0x193F7Cu;
            goto label_193f7c;
        }
    }
    ctx->pc = 0x193F0Cu;
label_193f0c:
    // 0x193f0c: 0x44800000
    ctx->pc = 0x193f0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x193f10: 0x0
    ctx->pc = 0x193f10u;
    // NOP
    // 0x193f14: 0x460c0036
    ctx->pc = 0x193f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f18: 0x45010003
    ctx->pc = 0x193F18u;
    {
        const bool branch_taken_0x193f18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193F1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193f18) {
            ctx->pc = 0x193F28u;
            goto label_193f28;
        }
    }
    ctx->pc = 0x193F20u;
    // 0x193f20: 0x10000016
    ctx->pc = 0x193F20u;
    {
        const bool branch_taken_0x193f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x193f20) {
            ctx->pc = 0x193F7Cu;
            goto label_193f7c;
        }
    }
    ctx->pc = 0x193F28u;
label_193f28:
    // 0x193f28: 0x460d0834
    ctx->pc = 0x193f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f2c: 0x45000003
    ctx->pc = 0x193F2Cu;
    {
        const bool branch_taken_0x193f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x193F30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193f2c) {
            ctx->pc = 0x193F3Cu;
            goto label_193f3c;
        }
    }
    ctx->pc = 0x193F34u;
    // 0x193f34: 0x10000011
    ctx->pc = 0x193F34u;
    {
        const bool branch_taken_0x193f34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x193f34) {
            ctx->pc = 0x193F7Cu;
            goto label_193f7c;
        }
    }
    ctx->pc = 0x193F3Cu;
label_193f3c:
    // 0x193f3c: 0x460d0036
    ctx->pc = 0x193f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f40: 0x45010003
    ctx->pc = 0x193F40u;
    {
        const bool branch_taken_0x193f40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193F44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193f40) {
            ctx->pc = 0x193F50u;
            goto label_193f50;
        }
    }
    ctx->pc = 0x193F48u;
    // 0x193f48: 0x1000000c
    ctx->pc = 0x193F48u;
    {
        const bool branch_taken_0x193f48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x193f48) {
            ctx->pc = 0x193F7Cu;
            goto label_193f7c;
        }
    }
    ctx->pc = 0x193F50u;
label_193f50:
    // 0x193f50: 0x46007034
    ctx->pc = 0x193f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f54: 0x45000003
    ctx->pc = 0x193F54u;
    {
        const bool branch_taken_0x193f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x193F58u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x193f54) {
            ctx->pc = 0x193F64u;
            goto label_193f64;
        }
    }
    ctx->pc = 0x193F5Cu;
    // 0x193f5c: 0x10000007
    ctx->pc = 0x193F5Cu;
    {
        const bool branch_taken_0x193f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193F60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193f5c) {
            ctx->pc = 0x193F7Cu;
            goto label_193f7c;
        }
    }
    ctx->pc = 0x193F64u;
label_193f64:
    // 0x193f64: 0xc420f9f4
    ctx->pc = 0x193f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f68: 0x460e0034
    ctx->pc = 0x193f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f6c: 0x45010002
    ctx->pc = 0x193F6Cu;
    {
        const bool branch_taken_0x193f6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193F70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x193f6c) {
            ctx->pc = 0x193F78u;
            goto label_193f78;
        }
    }
    ctx->pc = 0x193F74u;
    // 0x193f74: 0x102d
    ctx->pc = 0x193f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193f78:
    // 0x193f78: 0x38420001
    ctx->pc = 0x193f78u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_193f7c:
    // 0x193f7c: 0x3e00008
    ctx->pc = 0x193F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193ED0u: goto label_193ed0;
            case 0x193F0Cu: goto label_193f0c;
            case 0x193F28u: goto label_193f28;
            case 0x193F3Cu: goto label_193f3c;
            case 0x193F50u: goto label_193f50;
            case 0x193F64u: goto label_193f64;
            case 0x193F78u: goto label_193f78;
            case 0x193F7Cu: goto label_193f7c;
            case 0x193FB8u: goto label_193fb8;
            case 0x194068u: goto label_194068;
            case 0x194078u: goto label_194078;
            case 0x1940D4u: goto label_1940d4;
            case 0x1940F0u: goto label_1940f0;
            case 0x19414Cu: goto label_19414c;
            case 0x19415Cu: goto label_19415c;
            case 0x1941B8u: goto label_1941b8;
            case 0x1941D4u: goto label_1941d4;
            case 0x1941F4u: goto label_1941f4;
            case 0x194238u: goto label_194238;
            case 0x194338u: goto label_194338;
            case 0x194354u: goto label_194354;
            case 0x194420u: goto label_194420;
            case 0x19443Cu: goto label_19443c;
            case 0x19445Cu: goto label_19445c;
            case 0x194498u: goto label_194498;
            case 0x194578u: goto label_194578;
            case 0x194594u: goto label_194594;
            case 0x194620u: goto label_194620;
            case 0x19463Cu: goto label_19463c;
            case 0x1946C8u: goto label_1946c8;
            case 0x1946E4u: goto label_1946e4;
            case 0x194704u: goto label_194704;
            case 0x19474Cu: goto label_19474c;
            case 0x19484Cu: goto label_19484c;
            case 0x194868u: goto label_194868;
            case 0x194924u: goto label_194924;
            case 0x194940u: goto label_194940;
            case 0x1949FCu: goto label_1949fc;
            case 0x194A18u: goto label_194a18;
            case 0x194A38u: goto label_194a38;
            case 0x194A7Cu: goto label_194a7c;
            case 0x194B6Cu: goto label_194b6c;
            case 0x194B88u: goto label_194b88;
            case 0x194C24u: goto label_194c24;
            case 0x194C40u: goto label_194c40;
            case 0x194C60u: goto label_194c60;
            case 0x194CA4u: goto label_194ca4;
            case 0x194D8Cu: goto label_194d8c;
            case 0x194DA0u: goto label_194da0;
            case 0x194E2Cu: goto label_194e2c;
            case 0x194E48u: goto label_194e48;
            case 0x194EDCu: goto label_194edc;
            case 0x194EF0u: goto label_194ef0;
            case 0x194F80u: goto label_194f80;
            case 0x194F9Cu: goto label_194f9c;
            case 0x194FBCu: goto label_194fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193F84u;
    // 0x193f84: 0x0
    ctx->pc = 0x193f84u;
    // NOP
    // 0x193f88: 0x0
    ctx->pc = 0x193f88u;
    // NOP
    // 0x193f8c: 0x0
    ctx->pc = 0x193f8cu;
    // NOP
    // 0x193f90: 0x27bdffd0
    ctx->pc = 0x193f90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193f94: 0x3c01002a
    ctx->pc = 0x193f94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x193f98: 0xffbf0020
    ctx->pc = 0x193f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193f9c: 0x7fb10010
    ctx->pc = 0x193f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193fa0: 0x7fb00000
    ctx->pc = 0x193fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193fa4: 0x8c22fda4
    ctx->pc = 0x193fa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966692)));
    // 0x193fa8: 0x10400003
    ctx->pc = 0x193FA8u;
    {
        const bool branch_taken_0x193fa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193FACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193fa8) {
            ctx->pc = 0x193FB8u;
            goto label_193fb8;
        }
    }
    ctx->pc = 0x193FB0u;
    // 0x193fb0: 0x10000090
    ctx->pc = 0x193FB0u;
    {
        const bool branch_taken_0x193fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193FB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x193fb0) {
            ctx->pc = 0x1941F4u;
            goto label_1941f4;
        }
    }
    ctx->pc = 0x193FB8u;
label_193fb8:
    // 0x193fb8: 0x3c040023
    ctx->pc = 0x193fb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x193fbc: 0x3c057000
    ctx->pc = 0x193fbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x193fc0: 0x2484fe50
    ctx->pc = 0x193fc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966864));
    // 0x193fc4: 0xc0626c2
    ctx->pc = 0x193FC4u;
    SET_GPR_U32(ctx, 31, 0x193FCCu);
    ctx->pc = 0x193FC8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x189B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B08_0x189b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FCCu; }
    }
    if (ctx->pc != 0x193FCCu) { return; }
    ctx->pc = 0x193FCCu;
    // 0x193fcc: 0x8e040008
    ctx->pc = 0x193fccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x193fd0: 0xc0662d8
    ctx->pc = 0x193FD0u;
    SET_GPR_U32(ctx, 31, 0x193FD8u);
    ctx->pc = 0x193FD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x198B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198B60_0x198b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FD8u; }
    }
    if (ctx->pc != 0x193FD8u) { return; }
    ctx->pc = 0x193FD8u;
    // 0x193fd8: 0x22402
    ctx->pc = 0x193fd8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 16));
    // 0x193fdc: 0x21a02
    ctx->pc = 0x193fdcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x193fe0: 0x308500ff
    ctx->pc = 0x193fe0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
    // 0x193fe4: 0x306300ff
    ctx->pc = 0x193fe4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x193fe8: 0x32238
    ctx->pc = 0x193fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
    // 0x193fec: 0x3c017000
    ctx->pc = 0x193fecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x193ff0: 0x304300ff
    ctx->pc = 0x193ff0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x193ff4: 0xa42025
    ctx->pc = 0x193ff4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x193ff8: 0x31c38
    ctx->pc = 0x193ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x193ffc: 0x21602
    ctx->pc = 0x193ffcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
    // 0x194000: 0x642025
    ctx->pc = 0x194000u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194004: 0x304300ff
    ctx->pc = 0x194004u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x194008: 0x24020001
    ctx->pc = 0x194008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19400c: 0x31e38
    ctx->pc = 0x19400cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x194010: 0x2103c
    ctx->pc = 0x194010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194014: 0x641825
    ctx->pc = 0x194014u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194018: 0x621025
    ctx->pc = 0x194018u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19401c: 0xfc220028
    ctx->pc = 0x19401cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 40), GPR_U64(ctx, 2));
    // 0x194020: 0xc06629c
    ctx->pc = 0x194020u;
    SET_GPR_U32(ctx, 31, 0x194028u);
    ctx->pc = 0x194024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194028u; }
    }
    if (ctx->pc != 0x194028u) { return; }
    ctx->pc = 0x194028u;
    // 0x194028: 0x86040002
    ctx->pc = 0x194028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19402c: 0x28c3c
    ctx->pc = 0x19402cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194030: 0xc0662a4
    ctx->pc = 0x194030u;
    SET_GPR_U32(ctx, 31, 0x194038u);
    ctx->pc = 0x194034u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194038u; }
    }
    if (ctx->pc != 0x194038u) { return; }
    ctx->pc = 0x194038u;
    // 0x194038: 0x21c3c
    ctx->pc = 0x194038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19403c: 0x11143c
    ctx->pc = 0x19403cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x194040: 0x31c3f
    ctx->pc = 0x194040u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x194044: 0x2143f
    ctx->pc = 0x194044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x194048: 0x44820000
    ctx->pc = 0x194048u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x19404c: 0x0
    ctx->pc = 0x19404cu;
    // NOP
    // 0x194050: 0x46800320
    ctx->pc = 0x194050u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x194054: 0x3c023f80
    ctx->pc = 0x194054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x194058: 0x44830000
    ctx->pc = 0x194058u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x19405c: 0x44827000
    ctx->pc = 0x19405cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x194060: 0xc064fb4
    ctx->pc = 0x194060u;
    SET_GPR_U32(ctx, 31, 0x194068u);
    ctx->pc = 0x194064u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x193ED0u;
    goto label_193ed0;
    ctx->pc = 0x194068u;
label_194068:
    // 0x194068: 0x14400003
    ctx->pc = 0x194068u;
    {
        const bool branch_taken_0x194068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19406Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x194068) {
            ctx->pc = 0x194078u;
            goto label_194078;
        }
    }
    ctx->pc = 0x194070u;
    // 0x194070: 0x10000060
    ctx->pc = 0x194070u;
    {
        const bool branch_taken_0x194070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194074u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194070) {
            ctx->pc = 0x1941F4u;
            goto label_1941f4;
        }
    }
    ctx->pc = 0x194078u;
label_194078:
    // 0x194078: 0x3c024f00
    ctx->pc = 0x194078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x19407c: 0x8c24fd54
    ctx->pc = 0x19407cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x194080: 0x31c3c
    ctx->pc = 0x194080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x194084: 0x112c3c
    ctx->pc = 0x194084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x194088: 0x31c3f
    ctx->pc = 0x194088u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19408c: 0x52c3f
    ctx->pc = 0x19408cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x194090: 0x44820000
    ctx->pc = 0x194090u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x194094: 0x3c01002a
    ctx->pc = 0x194094u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194098: 0x852021
    ctx->pc = 0x194098u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19409c: 0x8c22fd58
    ctx->pc = 0x19409cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x1940a0: 0x3c01002a
    ctx->pc = 0x1940a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1940a4: 0x431021
    ctx->pc = 0x1940a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1940a8: 0xc421f9f4
    ctx->pc = 0x1940a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1940ac: 0x21100
    ctx->pc = 0x1940acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1940b0: 0x41900
    ctx->pc = 0x1940b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1940b4: 0x21438
    ctx->pc = 0x1940b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1940b8: 0x46010036
    ctx->pc = 0x1940b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1940bc: 0x45010005
    ctx->pc = 0x1940BCu;
    {
        const bool branch_taken_0x1940bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1940C0u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1940bc) {
            ctx->pc = 0x1940D4u;
            goto label_1940d4;
        }
    }
    ctx->pc = 0x1940C4u;
    // 0x1940c4: 0x46000864
    ctx->pc = 0x1940c4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1940c8: 0x44030800
    ctx->pc = 0x1940c8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1940cc: 0x10000008
    ctx->pc = 0x1940CCu;
    {
        const bool branch_taken_0x1940cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1940D0u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x1940cc) {
            ctx->pc = 0x1940F0u;
            goto label_1940f0;
        }
    }
    ctx->pc = 0x1940D4u;
label_1940d4:
    // 0x1940d4: 0x46000841
    ctx->pc = 0x1940d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1940d8: 0x3c028000
    ctx->pc = 0x1940d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1940dc: 0x46000864
    ctx->pc = 0x1940dcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1940e0: 0x44030800
    ctx->pc = 0x1940e0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1940e4: 0x0
    ctx->pc = 0x1940e4u;
    // NOP
    // 0x1940e8: 0x621825
    ctx->pc = 0x1940e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1940ec: 0x3103c
    ctx->pc = 0x1940ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1940f0:
    // 0x1940f0: 0x3c017000
    ctx->pc = 0x1940f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1940f4: 0x2103e
    ctx->pc = 0x1940f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1940f8: 0x2103c
    ctx->pc = 0x1940f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1940fc: 0x441025
    ctx->pc = 0x1940fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x194100: 0xfc220030
    ctx->pc = 0x194100u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 48), GPR_U64(ctx, 2));
    // 0x194104: 0xc06629c
    ctx->pc = 0x194104u;
    SET_GPR_U32(ctx, 31, 0x19410Cu);
    ctx->pc = 0x194108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19410Cu; }
    }
    if (ctx->pc != 0x19410Cu) { return; }
    ctx->pc = 0x19410Cu;
    // 0x19410c: 0x86040006
    ctx->pc = 0x19410cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x194110: 0x2843c
    ctx->pc = 0x194110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194114: 0xc0662a4
    ctx->pc = 0x194114u;
    SET_GPR_U32(ctx, 31, 0x19411Cu);
    ctx->pc = 0x194118u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19411Cu; }
    }
    if (ctx->pc != 0x19411Cu) { return; }
    ctx->pc = 0x19411Cu;
    // 0x19411c: 0x21c3c
    ctx->pc = 0x19411cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194120: 0x10143c
    ctx->pc = 0x194120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x194124: 0x31c3f
    ctx->pc = 0x194124u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x194128: 0x2143f
    ctx->pc = 0x194128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19412c: 0x44820000
    ctx->pc = 0x19412cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x194130: 0x0
    ctx->pc = 0x194130u;
    // NOP
    // 0x194134: 0x46800320
    ctx->pc = 0x194134u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x194138: 0x3c023f80
    ctx->pc = 0x194138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x19413c: 0x44830000
    ctx->pc = 0x19413cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x194140: 0x44827000
    ctx->pc = 0x194140u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x194144: 0xc064fb4
    ctx->pc = 0x194144u;
    SET_GPR_U32(ctx, 31, 0x19414Cu);
    ctx->pc = 0x194148u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x193ED0u;
    goto label_193ed0;
    ctx->pc = 0x19414Cu;
label_19414c:
    // 0x19414c: 0x14400003
    ctx->pc = 0x19414Cu;
    {
        const bool branch_taken_0x19414c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194150u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x19414c) {
            ctx->pc = 0x19415Cu;
            goto label_19415c;
        }
    }
    ctx->pc = 0x194154u;
    // 0x194154: 0x10000027
    ctx->pc = 0x194154u;
    {
        const bool branch_taken_0x194154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194158u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194154) {
            ctx->pc = 0x1941F4u;
            goto label_1941f4;
        }
    }
    ctx->pc = 0x19415Cu;
label_19415c:
    // 0x19415c: 0x3c024f00
    ctx->pc = 0x19415cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x194160: 0x8c24fd54
    ctx->pc = 0x194160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x194164: 0x31c3c
    ctx->pc = 0x194164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x194168: 0x102c3c
    ctx->pc = 0x194168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19416c: 0x31c3f
    ctx->pc = 0x19416cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x194170: 0x52c3f
    ctx->pc = 0x194170u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x194174: 0x44820000
    ctx->pc = 0x194174u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x194178: 0x3c01002a
    ctx->pc = 0x194178u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19417c: 0x852021
    ctx->pc = 0x19417cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x194180: 0x8c22fd58
    ctx->pc = 0x194180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x194184: 0x3c01002a
    ctx->pc = 0x194184u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194188: 0x431021
    ctx->pc = 0x194188u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19418c: 0xc421f9f4
    ctx->pc = 0x19418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194190: 0x21100
    ctx->pc = 0x194190u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194194: 0x41900
    ctx->pc = 0x194194u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x194198: 0x21438
    ctx->pc = 0x194198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x19419c: 0x46010036
    ctx->pc = 0x19419cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1941a0: 0x45010005
    ctx->pc = 0x1941A0u;
    {
        const bool branch_taken_0x1941a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1941A4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1941a0) {
            ctx->pc = 0x1941B8u;
            goto label_1941b8;
        }
    }
    ctx->pc = 0x1941A8u;
    // 0x1941a8: 0x46000864
    ctx->pc = 0x1941a8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1941ac: 0x44030800
    ctx->pc = 0x1941acu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1941b0: 0x10000008
    ctx->pc = 0x1941B0u;
    {
        const bool branch_taken_0x1941b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1941B4u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x1941b0) {
            ctx->pc = 0x1941D4u;
            goto label_1941d4;
        }
    }
    ctx->pc = 0x1941B8u;
label_1941b8:
    // 0x1941b8: 0x46000841
    ctx->pc = 0x1941b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1941bc: 0x3c028000
    ctx->pc = 0x1941bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1941c0: 0x46000864
    ctx->pc = 0x1941c0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1941c4: 0x44030800
    ctx->pc = 0x1941c4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1941c8: 0x0
    ctx->pc = 0x1941c8u;
    // NOP
    // 0x1941cc: 0x621825
    ctx->pc = 0x1941ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1941d0: 0x3103c
    ctx->pc = 0x1941d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1941d4:
    // 0x1941d4: 0x3c017000
    ctx->pc = 0x1941d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1941d8: 0x2103e
    ctx->pc = 0x1941d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1941dc: 0x3c047000
    ctx->pc = 0x1941dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x1941e0: 0x2103c
    ctx->pc = 0x1941e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1941e4: 0x451025
    ctx->pc = 0x1941e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1941e8: 0xc064f88
    ctx->pc = 0x1941E8u;
    SET_GPR_U32(ctx, 31, 0x1941F0u);
    ctx->pc = 0x1941ECu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 56), GPR_U64(ctx, 2));
    ctx->pc = 0x193E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E20_0x193e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941F0u; }
    }
    if (ctx->pc != 0x1941F0u) { return; }
    ctx->pc = 0x1941F0u;
    // 0x1941f0: 0x24020001
    ctx->pc = 0x1941f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1941f4:
    // 0x1941f4: 0xdfbf0020
    ctx->pc = 0x1941f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1941f8: 0x7bb10010
    ctx->pc = 0x1941f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1941fc: 0x7bb00000
    ctx->pc = 0x1941fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194200: 0x3e00008
    ctx->pc = 0x194200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193ED0u: goto label_193ed0;
            case 0x193F0Cu: goto label_193f0c;
            case 0x193F28u: goto label_193f28;
            case 0x193F3Cu: goto label_193f3c;
            case 0x193F50u: goto label_193f50;
            case 0x193F64u: goto label_193f64;
            case 0x193F78u: goto label_193f78;
            case 0x193F7Cu: goto label_193f7c;
            case 0x193FB8u: goto label_193fb8;
            case 0x194068u: goto label_194068;
            case 0x194078u: goto label_194078;
            case 0x1940D4u: goto label_1940d4;
            case 0x1940F0u: goto label_1940f0;
            case 0x19414Cu: goto label_19414c;
            case 0x19415Cu: goto label_19415c;
            case 0x1941B8u: goto label_1941b8;
            case 0x1941D4u: goto label_1941d4;
            case 0x1941F4u: goto label_1941f4;
            case 0x194238u: goto label_194238;
            case 0x194338u: goto label_194338;
            case 0x194354u: goto label_194354;
            case 0x194420u: goto label_194420;
            case 0x19443Cu: goto label_19443c;
            case 0x19445Cu: goto label_19445c;
            case 0x194498u: goto label_194498;
            case 0x194578u: goto label_194578;
            case 0x194594u: goto label_194594;
            case 0x194620u: goto label_194620;
            case 0x19463Cu: goto label_19463c;
            case 0x1946C8u: goto label_1946c8;
            case 0x1946E4u: goto label_1946e4;
            case 0x194704u: goto label_194704;
            case 0x19474Cu: goto label_19474c;
            case 0x19484Cu: goto label_19484c;
            case 0x194868u: goto label_194868;
            case 0x194924u: goto label_194924;
            case 0x194940u: goto label_194940;
            case 0x1949FCu: goto label_1949fc;
            case 0x194A18u: goto label_194a18;
            case 0x194A38u: goto label_194a38;
            case 0x194A7Cu: goto label_194a7c;
            case 0x194B6Cu: goto label_194b6c;
            case 0x194B88u: goto label_194b88;
            case 0x194C24u: goto label_194c24;
            case 0x194C40u: goto label_194c40;
            case 0x194C60u: goto label_194c60;
            case 0x194CA4u: goto label_194ca4;
            case 0x194D8Cu: goto label_194d8c;
            case 0x194DA0u: goto label_194da0;
            case 0x194E2Cu: goto label_194e2c;
            case 0x194E48u: goto label_194e48;
            case 0x194EDCu: goto label_194edc;
            case 0x194EF0u: goto label_194ef0;
            case 0x194F80u: goto label_194f80;
            case 0x194F9Cu: goto label_194f9c;
            case 0x194FBCu: goto label_194fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194208u;
    // 0x194208: 0x0
    ctx->pc = 0x194208u;
    // NOP
    // 0x19420c: 0x0
    ctx->pc = 0x19420cu;
    // NOP
    // 0x194210: 0x27bdffd0
    ctx->pc = 0x194210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194214: 0x3c01002a
    ctx->pc = 0x194214u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194218: 0xffbf0020
    ctx->pc = 0x194218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19421c: 0x7fb10010
    ctx->pc = 0x19421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194220: 0x7fb00000
    ctx->pc = 0x194220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194224: 0x8c22fda4
    ctx->pc = 0x194224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966692)));
    // 0x194228: 0x10400003
    ctx->pc = 0x194228u;
    {
        const bool branch_taken_0x194228 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19422Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194228) {
            ctx->pc = 0x194238u;
            goto label_194238;
        }
    }
    ctx->pc = 0x194230u;
    // 0x194230: 0x1000008a
    ctx->pc = 0x194230u;
    {
        const bool branch_taken_0x194230 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194234u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x194230) {
            ctx->pc = 0x19445Cu;
            goto label_19445c;
        }
    }
    ctx->pc = 0x194238u;
label_194238:
    // 0x194238: 0x3c040023
    ctx->pc = 0x194238u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x19423c: 0x3c057000
    ctx->pc = 0x19423cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x194240: 0x2484fe90
    ctx->pc = 0x194240u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966928));
    // 0x194244: 0xc0626c2
    ctx->pc = 0x194244u;
    SET_GPR_U32(ctx, 31, 0x19424Cu);
    ctx->pc = 0x194248u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x189B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B08_0x189b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19424Cu; }
    }
    if (ctx->pc != 0x19424Cu) { return; }
    ctx->pc = 0x19424Cu;
    // 0x19424c: 0x8e040008
    ctx->pc = 0x19424cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x194250: 0xc0662d8
    ctx->pc = 0x194250u;
    SET_GPR_U32(ctx, 31, 0x194258u);
    ctx->pc = 0x194254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198B60_0x198b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194258u; }
    }
    if (ctx->pc != 0x194258u) { return; }
    ctx->pc = 0x194258u;
    // 0x194258: 0x22402
    ctx->pc = 0x194258u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 16));
    // 0x19425c: 0x21a02
    ctx->pc = 0x19425cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x194260: 0x308500ff
    ctx->pc = 0x194260u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
    // 0x194264: 0x306300ff
    ctx->pc = 0x194264u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x194268: 0x32238
    ctx->pc = 0x194268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
    // 0x19426c: 0x3c017000
    ctx->pc = 0x19426cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194270: 0x304300ff
    ctx->pc = 0x194270u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x194274: 0xa42025
    ctx->pc = 0x194274u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x194278: 0x31c38
    ctx->pc = 0x194278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x19427c: 0x21602
    ctx->pc = 0x19427cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
    // 0x194280: 0x642025
    ctx->pc = 0x194280u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194284: 0x304300ff
    ctx->pc = 0x194284u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x194288: 0x24020001
    ctx->pc = 0x194288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19428c: 0x31e38
    ctx->pc = 0x19428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x194290: 0x2103c
    ctx->pc = 0x194290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194294: 0x641825
    ctx->pc = 0x194294u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194298: 0x621025
    ctx->pc = 0x194298u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19429c: 0xfc220028
    ctx->pc = 0x19429cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 40), GPR_U64(ctx, 2));
    // 0x1942a0: 0x8602000e
    ctx->pc = 0x1942a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1942a4: 0x3c017000
    ctx->pc = 0x1942a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1942a8: 0x8603000c
    ctx->pc = 0x1942a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1942ac: 0x21100
    ctx->pc = 0x1942acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1942b0: 0x31900
    ctx->pc = 0x1942b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1942b4: 0x21438
    ctx->pc = 0x1942b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1942b8: 0x621025
    ctx->pc = 0x1942b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1942bc: 0xfc220030
    ctx->pc = 0x1942bcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 48), GPR_U64(ctx, 2));
    // 0x1942c0: 0xc06629c
    ctx->pc = 0x1942C0u;
    SET_GPR_U32(ctx, 31, 0x1942C8u);
    ctx->pc = 0x1942C4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1942C8u; }
    }
    if (ctx->pc != 0x1942C8u) { return; }
    ctx->pc = 0x1942C8u;
    // 0x1942c8: 0x86040002
    ctx->pc = 0x1942c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1942cc: 0x28c3c
    ctx->pc = 0x1942ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1942d0: 0xc0662a4
    ctx->pc = 0x1942D0u;
    SET_GPR_U32(ctx, 31, 0x1942D8u);
    ctx->pc = 0x1942D4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1942D8u; }
    }
    if (ctx->pc != 0x1942D8u) { return; }
    ctx->pc = 0x1942D8u;
    // 0x1942d8: 0x3c01002a
    ctx->pc = 0x1942d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1942dc: 0x22c3c
    ctx->pc = 0x1942dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1942e0: 0x8c23fd54
    ctx->pc = 0x1942e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x1942e4: 0x3c024f00
    ctx->pc = 0x1942e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1942e8: 0x11243c
    ctx->pc = 0x1942e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1942ec: 0x52c3f
    ctx->pc = 0x1942ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1942f0: 0x4243f
    ctx->pc = 0x1942f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1942f4: 0x44820000
    ctx->pc = 0x1942f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1942f8: 0x3c01002a
    ctx->pc = 0x1942f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1942fc: 0x641821
    ctx->pc = 0x1942fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194300: 0x8c22fd58
    ctx->pc = 0x194300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x194304: 0x31900
    ctx->pc = 0x194304u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x194308: 0x3c01002a
    ctx->pc = 0x194308u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19430c: 0x451021
    ctx->pc = 0x19430cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x194310: 0xc421f9f4
    ctx->pc = 0x194310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194314: 0x21100
    ctx->pc = 0x194314u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194318: 0x21438
    ctx->pc = 0x194318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x19431c: 0x46010036
    ctx->pc = 0x19431cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194320: 0x45010005
    ctx->pc = 0x194320u;
    {
        const bool branch_taken_0x194320 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194324u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x194320) {
            ctx->pc = 0x194338u;
            goto label_194338;
        }
    }
    ctx->pc = 0x194328u;
    // 0x194328: 0x46000864
    ctx->pc = 0x194328u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x19432c: 0x44030800
    ctx->pc = 0x19432cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194330: 0x10000008
    ctx->pc = 0x194330u;
    {
        const bool branch_taken_0x194330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194334u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x194330) {
            ctx->pc = 0x194354u;
            goto label_194354;
        }
    }
    ctx->pc = 0x194338u;
label_194338:
    // 0x194338: 0x46000841
    ctx->pc = 0x194338u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19433c: 0x3c028000
    ctx->pc = 0x19433cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194340: 0x46000864
    ctx->pc = 0x194340u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194344: 0x44030800
    ctx->pc = 0x194344u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194348: 0x0
    ctx->pc = 0x194348u;
    // NOP
    // 0x19434c: 0x621825
    ctx->pc = 0x19434cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194350: 0x3103c
    ctx->pc = 0x194350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_194354:
    // 0x194354: 0x3c017000
    ctx->pc = 0x194354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194358: 0x2103e
    ctx->pc = 0x194358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x19435c: 0x2103c
    ctx->pc = 0x19435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194360: 0x441025
    ctx->pc = 0x194360u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x194364: 0xfc220038
    ctx->pc = 0x194364u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 56), GPR_U64(ctx, 2));
    // 0x194368: 0x86020012
    ctx->pc = 0x194368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19436c: 0x3c017000
    ctx->pc = 0x19436cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194370: 0x86030010
    ctx->pc = 0x194370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x194374: 0x21100
    ctx->pc = 0x194374u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194378: 0x31900
    ctx->pc = 0x194378u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x19437c: 0x21438
    ctx->pc = 0x19437cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x194380: 0x621025
    ctx->pc = 0x194380u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194384: 0xfc220040
    ctx->pc = 0x194384u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 64), GPR_U64(ctx, 2));
    // 0x194388: 0x86030000
    ctx->pc = 0x194388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19438c: 0x86020004
    ctx->pc = 0x19438cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x194390: 0x621021
    ctx->pc = 0x194390u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194394: 0x2243c
    ctx->pc = 0x194394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194398: 0xc06629c
    ctx->pc = 0x194398u;
    SET_GPR_U32(ctx, 31, 0x1943A0u);
    ctx->pc = 0x19439Cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943A0u; }
    }
    if (ctx->pc != 0x1943A0u) { return; }
    ctx->pc = 0x1943A0u;
    // 0x1943a0: 0x28c3c
    ctx->pc = 0x1943a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1943a4: 0x86030002
    ctx->pc = 0x1943a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1943a8: 0x86020006
    ctx->pc = 0x1943a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1943ac: 0x118c3f
    ctx->pc = 0x1943acu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1943b0: 0x621021
    ctx->pc = 0x1943b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1943b4: 0x2243c
    ctx->pc = 0x1943b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1943b8: 0xc0662a4
    ctx->pc = 0x1943B8u;
    SET_GPR_U32(ctx, 31, 0x1943C0u);
    ctx->pc = 0x1943BCu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1943C0u; }
    }
    if (ctx->pc != 0x1943C0u) { return; }
    ctx->pc = 0x1943C0u;
    // 0x1943c0: 0x3c01002a
    ctx->pc = 0x1943c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1943c4: 0x22c3c
    ctx->pc = 0x1943c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1943c8: 0x8c23fd54
    ctx->pc = 0x1943c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x1943cc: 0x3c024f00
    ctx->pc = 0x1943ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1943d0: 0x11243c
    ctx->pc = 0x1943d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1943d4: 0x52c3f
    ctx->pc = 0x1943d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1943d8: 0x4243f
    ctx->pc = 0x1943d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1943dc: 0x44820000
    ctx->pc = 0x1943dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1943e0: 0x3c01002a
    ctx->pc = 0x1943e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1943e4: 0x641821
    ctx->pc = 0x1943e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1943e8: 0x8c22fd58
    ctx->pc = 0x1943e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x1943ec: 0x31900
    ctx->pc = 0x1943ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1943f0: 0x3c01002a
    ctx->pc = 0x1943f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1943f4: 0x451021
    ctx->pc = 0x1943f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1943f8: 0xc421f9f4
    ctx->pc = 0x1943f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1943fc: 0x21100
    ctx->pc = 0x1943fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194400: 0x21438
    ctx->pc = 0x194400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x194404: 0x46010036
    ctx->pc = 0x194404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194408: 0x45010005
    ctx->pc = 0x194408u;
    {
        const bool branch_taken_0x194408 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19440Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x194408) {
            ctx->pc = 0x194420u;
            goto label_194420;
        }
    }
    ctx->pc = 0x194410u;
    // 0x194410: 0x46000864
    ctx->pc = 0x194410u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194414: 0x44030800
    ctx->pc = 0x194414u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194418: 0x10000008
    ctx->pc = 0x194418u;
    {
        const bool branch_taken_0x194418 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19441Cu;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x194418) {
            ctx->pc = 0x19443Cu;
            goto label_19443c;
        }
    }
    ctx->pc = 0x194420u;
label_194420:
    // 0x194420: 0x46000841
    ctx->pc = 0x194420u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194424: 0x3c028000
    ctx->pc = 0x194424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194428: 0x46000864
    ctx->pc = 0x194428u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x19442c: 0x44030800
    ctx->pc = 0x19442cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194430: 0x0
    ctx->pc = 0x194430u;
    // NOP
    // 0x194434: 0x621825
    ctx->pc = 0x194434u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194438: 0x3103c
    ctx->pc = 0x194438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_19443c:
    // 0x19443c: 0x3c017000
    ctx->pc = 0x19443cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194440: 0x2103e
    ctx->pc = 0x194440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194444: 0x3c047000
    ctx->pc = 0x194444u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x194448: 0x2103c
    ctx->pc = 0x194448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19444c: 0x451025
    ctx->pc = 0x19444cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x194450: 0xc064f88
    ctx->pc = 0x194450u;
    SET_GPR_U32(ctx, 31, 0x194458u);
    ctx->pc = 0x194454u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 72), GPR_U64(ctx, 2));
    ctx->pc = 0x193E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E20_0x193e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194458u; }
    }
    if (ctx->pc != 0x194458u) { return; }
    ctx->pc = 0x194458u;
    // 0x194458: 0x24020001
    ctx->pc = 0x194458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19445c:
    // 0x19445c: 0xdfbf0020
    ctx->pc = 0x19445cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194460: 0x7bb10010
    ctx->pc = 0x194460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194464: 0x7bb00000
    ctx->pc = 0x194464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194468: 0x3e00008
    ctx->pc = 0x194468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19446Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193ED0u: goto label_193ed0;
            case 0x193F0Cu: goto label_193f0c;
            case 0x193F28u: goto label_193f28;
            case 0x193F3Cu: goto label_193f3c;
            case 0x193F50u: goto label_193f50;
            case 0x193F64u: goto label_193f64;
            case 0x193F78u: goto label_193f78;
            case 0x193F7Cu: goto label_193f7c;
            case 0x193FB8u: goto label_193fb8;
            case 0x194068u: goto label_194068;
            case 0x194078u: goto label_194078;
            case 0x1940D4u: goto label_1940d4;
            case 0x1940F0u: goto label_1940f0;
            case 0x19414Cu: goto label_19414c;
            case 0x19415Cu: goto label_19415c;
            case 0x1941B8u: goto label_1941b8;
            case 0x1941D4u: goto label_1941d4;
            case 0x1941F4u: goto label_1941f4;
            case 0x194238u: goto label_194238;
            case 0x194338u: goto label_194338;
            case 0x194354u: goto label_194354;
            case 0x194420u: goto label_194420;
            case 0x19443Cu: goto label_19443c;
            case 0x19445Cu: goto label_19445c;
            case 0x194498u: goto label_194498;
            case 0x194578u: goto label_194578;
            case 0x194594u: goto label_194594;
            case 0x194620u: goto label_194620;
            case 0x19463Cu: goto label_19463c;
            case 0x1946C8u: goto label_1946c8;
            case 0x1946E4u: goto label_1946e4;
            case 0x194704u: goto label_194704;
            case 0x19474Cu: goto label_19474c;
            case 0x19484Cu: goto label_19484c;
            case 0x194868u: goto label_194868;
            case 0x194924u: goto label_194924;
            case 0x194940u: goto label_194940;
            case 0x1949FCu: goto label_1949fc;
            case 0x194A18u: goto label_194a18;
            case 0x194A38u: goto label_194a38;
            case 0x194A7Cu: goto label_194a7c;
            case 0x194B6Cu: goto label_194b6c;
            case 0x194B88u: goto label_194b88;
            case 0x194C24u: goto label_194c24;
            case 0x194C40u: goto label_194c40;
            case 0x194C60u: goto label_194c60;
            case 0x194CA4u: goto label_194ca4;
            case 0x194D8Cu: goto label_194d8c;
            case 0x194DA0u: goto label_194da0;
            case 0x194E2Cu: goto label_194e2c;
            case 0x194E48u: goto label_194e48;
            case 0x194EDCu: goto label_194edc;
            case 0x194EF0u: goto label_194ef0;
            case 0x194F80u: goto label_194f80;
            case 0x194F9Cu: goto label_194f9c;
            case 0x194FBCu: goto label_194fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194470u;
    // 0x194470: 0x27bdffd0
    ctx->pc = 0x194470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194474: 0x3c01002a
    ctx->pc = 0x194474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194478: 0xffbf0020
    ctx->pc = 0x194478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19447c: 0x7fb10010
    ctx->pc = 0x19447cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194480: 0x7fb00000
    ctx->pc = 0x194480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194484: 0x8c22fda4
    ctx->pc = 0x194484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966692)));
    // 0x194488: 0x10400003
    ctx->pc = 0x194488u;
    {
        const bool branch_taken_0x194488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19448Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194488) {
            ctx->pc = 0x194498u;
            goto label_194498;
        }
    }
    ctx->pc = 0x194490u;
    // 0x194490: 0x1000009c
    ctx->pc = 0x194490u;
    {
        const bool branch_taken_0x194490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x194490) {
            ctx->pc = 0x194704u;
            goto label_194704;
        }
    }
    ctx->pc = 0x194498u;
label_194498:
    // 0x194498: 0x3c040023
    ctx->pc = 0x194498u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x19449c: 0x3c057000
    ctx->pc = 0x19449cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x1944a0: 0x2484fee0
    ctx->pc = 0x1944a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x1944a4: 0xc0626c2
    ctx->pc = 0x1944A4u;
    SET_GPR_U32(ctx, 31, 0x1944ACu);
    ctx->pc = 0x1944A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x189B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B08_0x189b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944ACu; }
    }
    if (ctx->pc != 0x1944ACu) { return; }
    ctx->pc = 0x1944ACu;
    // 0x1944ac: 0x8e04000c
    ctx->pc = 0x1944acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1944b0: 0xc0662d8
    ctx->pc = 0x1944B0u;
    SET_GPR_U32(ctx, 31, 0x1944B8u);
    ctx->pc = 0x1944B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x198B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198B60_0x198b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944B8u; }
    }
    if (ctx->pc != 0x1944B8u) { return; }
    ctx->pc = 0x1944B8u;
    // 0x1944b8: 0x22402
    ctx->pc = 0x1944b8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 16));
    // 0x1944bc: 0x21a02
    ctx->pc = 0x1944bcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x1944c0: 0x308500ff
    ctx->pc = 0x1944c0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
    // 0x1944c4: 0x306300ff
    ctx->pc = 0x1944c4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1944c8: 0x32238
    ctx->pc = 0x1944c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
    // 0x1944cc: 0x3c017000
    ctx->pc = 0x1944ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1944d0: 0x304300ff
    ctx->pc = 0x1944d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1944d4: 0xa42025
    ctx->pc = 0x1944d4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1944d8: 0x31c38
    ctx->pc = 0x1944d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1944dc: 0x21602
    ctx->pc = 0x1944dcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
    // 0x1944e0: 0x642025
    ctx->pc = 0x1944e0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1944e4: 0x304300ff
    ctx->pc = 0x1944e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1944e8: 0x24020001
    ctx->pc = 0x1944e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1944ec: 0x31e38
    ctx->pc = 0x1944ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1944f0: 0x2103c
    ctx->pc = 0x1944f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1944f4: 0x641825
    ctx->pc = 0x1944f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1944f8: 0x621025
    ctx->pc = 0x1944f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1944fc: 0xfc220028
    ctx->pc = 0x1944fcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 40), GPR_U64(ctx, 2));
    // 0x194500: 0xc06629c
    ctx->pc = 0x194500u;
    SET_GPR_U32(ctx, 31, 0x194508u);
    ctx->pc = 0x194504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194508u; }
    }
    if (ctx->pc != 0x194508u) { return; }
    ctx->pc = 0x194508u;
    // 0x194508: 0x86040002
    ctx->pc = 0x194508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19450c: 0x28c3c
    ctx->pc = 0x19450cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194510: 0xc0662a4
    ctx->pc = 0x194510u;
    SET_GPR_U32(ctx, 31, 0x194518u);
    ctx->pc = 0x194514u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194518u; }
    }
    if (ctx->pc != 0x194518u) { return; }
    ctx->pc = 0x194518u;
    // 0x194518: 0x3c01002a
    ctx->pc = 0x194518u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19451c: 0x22c3c
    ctx->pc = 0x19451cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194520: 0x8c23fd54
    ctx->pc = 0x194520u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x194524: 0x3c024f00
    ctx->pc = 0x194524u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x194528: 0x11243c
    ctx->pc = 0x194528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x19452c: 0x52c3f
    ctx->pc = 0x19452cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x194530: 0x4243f
    ctx->pc = 0x194530u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x194534: 0x44820000
    ctx->pc = 0x194534u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x194538: 0x3c01002a
    ctx->pc = 0x194538u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19453c: 0x641821
    ctx->pc = 0x19453cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194540: 0x8c22fd58
    ctx->pc = 0x194540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x194544: 0x31900
    ctx->pc = 0x194544u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x194548: 0x3c01002a
    ctx->pc = 0x194548u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19454c: 0x451021
    ctx->pc = 0x19454cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x194550: 0xc421f9f4
    ctx->pc = 0x194550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194554: 0x21100
    ctx->pc = 0x194554u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194558: 0x21438
    ctx->pc = 0x194558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x19455c: 0x46010036
    ctx->pc = 0x19455cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194560: 0x45010005
    ctx->pc = 0x194560u;
    {
        const bool branch_taken_0x194560 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194564u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x194560) {
            ctx->pc = 0x194578u;
            goto label_194578;
        }
    }
    ctx->pc = 0x194568u;
    // 0x194568: 0x46000864
    ctx->pc = 0x194568u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x19456c: 0x44030800
    ctx->pc = 0x19456cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194570: 0x10000008
    ctx->pc = 0x194570u;
    {
        const bool branch_taken_0x194570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194574u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x194570) {
            ctx->pc = 0x194594u;
            goto label_194594;
        }
    }
    ctx->pc = 0x194578u;
label_194578:
    // 0x194578: 0x46000841
    ctx->pc = 0x194578u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19457c: 0x3c028000
    ctx->pc = 0x19457cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194580: 0x46000864
    ctx->pc = 0x194580u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194584: 0x44030800
    ctx->pc = 0x194584u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194588: 0x0
    ctx->pc = 0x194588u;
    // NOP
    // 0x19458c: 0x621825
    ctx->pc = 0x19458cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194590: 0x3103c
    ctx->pc = 0x194590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_194594:
    // 0x194594: 0x3c017000
    ctx->pc = 0x194594u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194598: 0x2103e
    ctx->pc = 0x194598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x19459c: 0x2103c
    ctx->pc = 0x19459cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1945a0: 0x441025
    ctx->pc = 0x1945a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1945a4: 0xfc220030
    ctx->pc = 0x1945a4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 48), GPR_U64(ctx, 2));
    // 0x1945a8: 0xc06629c
    ctx->pc = 0x1945A8u;
    SET_GPR_U32(ctx, 31, 0x1945B0u);
    ctx->pc = 0x1945ACu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945B0u; }
    }
    if (ctx->pc != 0x1945B0u) { return; }
    ctx->pc = 0x1945B0u;
    // 0x1945b0: 0x86040006
    ctx->pc = 0x1945b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1945b4: 0x28c3c
    ctx->pc = 0x1945b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1945b8: 0xc0662a4
    ctx->pc = 0x1945B8u;
    SET_GPR_U32(ctx, 31, 0x1945C0u);
    ctx->pc = 0x1945BCu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945C0u; }
    }
    if (ctx->pc != 0x1945C0u) { return; }
    ctx->pc = 0x1945C0u;
    // 0x1945c0: 0x3c01002a
    ctx->pc = 0x1945c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1945c4: 0x22c3c
    ctx->pc = 0x1945c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1945c8: 0x8c23fd54
    ctx->pc = 0x1945c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x1945cc: 0x3c024f00
    ctx->pc = 0x1945ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1945d0: 0x11243c
    ctx->pc = 0x1945d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1945d4: 0x52c3f
    ctx->pc = 0x1945d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1945d8: 0x4243f
    ctx->pc = 0x1945d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1945dc: 0x44820000
    ctx->pc = 0x1945dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1945e0: 0x3c01002a
    ctx->pc = 0x1945e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1945e4: 0x641821
    ctx->pc = 0x1945e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1945e8: 0x8c22fd58
    ctx->pc = 0x1945e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x1945ec: 0x31900
    ctx->pc = 0x1945ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1945f0: 0x3c01002a
    ctx->pc = 0x1945f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1945f4: 0x451021
    ctx->pc = 0x1945f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1945f8: 0xc421f9f4
    ctx->pc = 0x1945f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1945fc: 0x21100
    ctx->pc = 0x1945fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194600: 0x21438
    ctx->pc = 0x194600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x194604: 0x46010036
    ctx->pc = 0x194604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194608: 0x45010005
    ctx->pc = 0x194608u;
    {
        const bool branch_taken_0x194608 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19460Cu;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x194608) {
            ctx->pc = 0x194620u;
            goto label_194620;
        }
    }
    ctx->pc = 0x194610u;
    // 0x194610: 0x46000864
    ctx->pc = 0x194610u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194614: 0x44030800
    ctx->pc = 0x194614u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194618: 0x10000008
    ctx->pc = 0x194618u;
    {
        const bool branch_taken_0x194618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19461Cu;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x194618) {
            ctx->pc = 0x19463Cu;
            goto label_19463c;
        }
    }
    ctx->pc = 0x194620u;
label_194620:
    // 0x194620: 0x46000841
    ctx->pc = 0x194620u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194624: 0x3c028000
    ctx->pc = 0x194624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194628: 0x46000864
    ctx->pc = 0x194628u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x19462c: 0x44030800
    ctx->pc = 0x19462cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194630: 0x0
    ctx->pc = 0x194630u;
    // NOP
    // 0x194634: 0x621825
    ctx->pc = 0x194634u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194638: 0x3103c
    ctx->pc = 0x194638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_19463c:
    // 0x19463c: 0x3c017000
    ctx->pc = 0x19463cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194640: 0x2103e
    ctx->pc = 0x194640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194644: 0x2103c
    ctx->pc = 0x194644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194648: 0x441025
    ctx->pc = 0x194648u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19464c: 0xfc220038
    ctx->pc = 0x19464cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 56), GPR_U64(ctx, 2));
    // 0x194650: 0xc06629c
    ctx->pc = 0x194650u;
    SET_GPR_U32(ctx, 31, 0x194658u);
    ctx->pc = 0x194654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194658u; }
    }
    if (ctx->pc != 0x194658u) { return; }
    ctx->pc = 0x194658u;
    // 0x194658: 0x8604000a
    ctx->pc = 0x194658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19465c: 0x2843c
    ctx->pc = 0x19465cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194660: 0xc0662a4
    ctx->pc = 0x194660u;
    SET_GPR_U32(ctx, 31, 0x194668u);
    ctx->pc = 0x194664u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194668u; }
    }
    if (ctx->pc != 0x194668u) { return; }
    ctx->pc = 0x194668u;
    // 0x194668: 0x3c01002a
    ctx->pc = 0x194668u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19466c: 0x22c3c
    ctx->pc = 0x19466cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194670: 0x8c23fd54
    ctx->pc = 0x194670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x194674: 0x3c024f00
    ctx->pc = 0x194674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x194678: 0x10243c
    ctx->pc = 0x194678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19467c: 0x52c3f
    ctx->pc = 0x19467cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x194680: 0x4243f
    ctx->pc = 0x194680u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x194684: 0x44820000
    ctx->pc = 0x194684u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x194688: 0x3c01002a
    ctx->pc = 0x194688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19468c: 0x641821
    ctx->pc = 0x19468cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194690: 0x8c22fd58
    ctx->pc = 0x194690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x194694: 0x31900
    ctx->pc = 0x194694u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x194698: 0x3c01002a
    ctx->pc = 0x194698u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19469c: 0x451021
    ctx->pc = 0x19469cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1946a0: 0xc421f9f4
    ctx->pc = 0x1946a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1946a4: 0x21100
    ctx->pc = 0x1946a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1946a8: 0x21438
    ctx->pc = 0x1946a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1946ac: 0x46010036
    ctx->pc = 0x1946acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1946b0: 0x45010005
    ctx->pc = 0x1946B0u;
    {
        const bool branch_taken_0x1946b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1946B4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1946b0) {
            ctx->pc = 0x1946C8u;
            goto label_1946c8;
        }
    }
    ctx->pc = 0x1946B8u;
    // 0x1946b8: 0x46000864
    ctx->pc = 0x1946b8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1946bc: 0x44030800
    ctx->pc = 0x1946bcu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1946c0: 0x10000008
    ctx->pc = 0x1946C0u;
    {
        const bool branch_taken_0x1946c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1946C4u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x1946c0) {
            ctx->pc = 0x1946E4u;
            goto label_1946e4;
        }
    }
    ctx->pc = 0x1946C8u;
label_1946c8:
    // 0x1946c8: 0x46000841
    ctx->pc = 0x1946c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1946cc: 0x3c028000
    ctx->pc = 0x1946ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1946d0: 0x46000864
    ctx->pc = 0x1946d0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1946d4: 0x44030800
    ctx->pc = 0x1946d4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1946d8: 0x0
    ctx->pc = 0x1946d8u;
    // NOP
    // 0x1946dc: 0x621825
    ctx->pc = 0x1946dcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1946e0: 0x3103c
    ctx->pc = 0x1946e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1946e4:
    // 0x1946e4: 0x3c017000
    ctx->pc = 0x1946e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1946e8: 0x2103e
    ctx->pc = 0x1946e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1946ec: 0x3c047000
    ctx->pc = 0x1946ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x1946f0: 0x2103c
    ctx->pc = 0x1946f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1946f4: 0x451025
    ctx->pc = 0x1946f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1946f8: 0xc064f88
    ctx->pc = 0x1946F8u;
    SET_GPR_U32(ctx, 31, 0x194700u);
    ctx->pc = 0x1946FCu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 64), GPR_U64(ctx, 2));
    ctx->pc = 0x193E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E20_0x193e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194700u; }
    }
    if (ctx->pc != 0x194700u) { return; }
    ctx->pc = 0x194700u;
    // 0x194700: 0x24020001
    ctx->pc = 0x194700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_194704:
    // 0x194704: 0xdfbf0020
    ctx->pc = 0x194704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194708: 0x7bb10010
    ctx->pc = 0x194708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19470c: 0x7bb00000
    ctx->pc = 0x19470cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194710: 0x3e00008
    ctx->pc = 0x194710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194714u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193ED0u: goto label_193ed0;
            case 0x193F0Cu: goto label_193f0c;
            case 0x193F28u: goto label_193f28;
            case 0x193F3Cu: goto label_193f3c;
            case 0x193F50u: goto label_193f50;
            case 0x193F64u: goto label_193f64;
            case 0x193F78u: goto label_193f78;
            case 0x193F7Cu: goto label_193f7c;
            case 0x193FB8u: goto label_193fb8;
            case 0x194068u: goto label_194068;
            case 0x194078u: goto label_194078;
            case 0x1940D4u: goto label_1940d4;
            case 0x1940F0u: goto label_1940f0;
            case 0x19414Cu: goto label_19414c;
            case 0x19415Cu: goto label_19415c;
            case 0x1941B8u: goto label_1941b8;
            case 0x1941D4u: goto label_1941d4;
            case 0x1941F4u: goto label_1941f4;
            case 0x194238u: goto label_194238;
            case 0x194338u: goto label_194338;
            case 0x194354u: goto label_194354;
            case 0x194420u: goto label_194420;
            case 0x19443Cu: goto label_19443c;
            case 0x19445Cu: goto label_19445c;
            case 0x194498u: goto label_194498;
            case 0x194578u: goto label_194578;
            case 0x194594u: goto label_194594;
            case 0x194620u: goto label_194620;
            case 0x19463Cu: goto label_19463c;
            case 0x1946C8u: goto label_1946c8;
            case 0x1946E4u: goto label_1946e4;
            case 0x194704u: goto label_194704;
            case 0x19474Cu: goto label_19474c;
            case 0x19484Cu: goto label_19484c;
            case 0x194868u: goto label_194868;
            case 0x194924u: goto label_194924;
            case 0x194940u: goto label_194940;
            case 0x1949FCu: goto label_1949fc;
            case 0x194A18u: goto label_194a18;
            case 0x194A38u: goto label_194a38;
            case 0x194A7Cu: goto label_194a7c;
            case 0x194B6Cu: goto label_194b6c;
            case 0x194B88u: goto label_194b88;
            case 0x194C24u: goto label_194c24;
            case 0x194C40u: goto label_194c40;
            case 0x194C60u: goto label_194c60;
            case 0x194CA4u: goto label_194ca4;
            case 0x194D8Cu: goto label_194d8c;
            case 0x194DA0u: goto label_194da0;
            case 0x194E2Cu: goto label_194e2c;
            case 0x194E48u: goto label_194e48;
            case 0x194EDCu: goto label_194edc;
            case 0x194EF0u: goto label_194ef0;
            case 0x194F80u: goto label_194f80;
            case 0x194F9Cu: goto label_194f9c;
            case 0x194FBCu: goto label_194fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194718u;
    // 0x194718: 0x0
    ctx->pc = 0x194718u;
    // NOP
    // 0x19471c: 0x0
    ctx->pc = 0x19471cu;
    // NOP
    // 0x194720: 0x27bdffc0
    ctx->pc = 0x194720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194724: 0x3c01002a
    ctx->pc = 0x194724u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194728: 0xffbf0030
    ctx->pc = 0x194728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19472c: 0x7fb20020
    ctx->pc = 0x19472cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194730: 0x7fb10010
    ctx->pc = 0x194730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194734: 0x7fb00000
    ctx->pc = 0x194734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194738: 0x8c22fda4
    ctx->pc = 0x194738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966692)));
    // 0x19473c: 0x10400003
    ctx->pc = 0x19473Cu;
    {
        const bool branch_taken_0x19473c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194740u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19473c) {
            ctx->pc = 0x19474Cu;
            goto label_19474c;
        }
    }
    ctx->pc = 0x194744u;
    // 0x194744: 0x100000bc
    ctx->pc = 0x194744u;
    {
        const bool branch_taken_0x194744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194748u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x194744) {
            ctx->pc = 0x194A38u;
            goto label_194a38;
        }
    }
    ctx->pc = 0x19474Cu;
label_19474c:
    // 0x19474c: 0x3c040023
    ctx->pc = 0x19474cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x194750: 0x3c057000
    ctx->pc = 0x194750u;
    SET_GPR_U32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x194754: 0x2484ff30
    ctx->pc = 0x194754u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967088));
    // 0x194758: 0xc0626c2
    ctx->pc = 0x194758u;
    SET_GPR_U32(ctx, 31, 0x194760u);
    ctx->pc = 0x19475Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x189B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B08_0x189b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194760u; }
    }
    if (ctx->pc != 0x194760u) { return; }
    ctx->pc = 0x194760u;
    // 0x194760: 0x3c01002a
    ctx->pc = 0x194760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194764: 0x34028080
    ctx->pc = 0x194764u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32896));
    // 0x194768: 0x9427fee8
    ctx->pc = 0x194768u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294967016)));
    // 0x19476c: 0x24030001
    ctx->pc = 0x19476cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x194770: 0x21438
    ctx->pc = 0x194770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x194774: 0x3c04002a
    ctx->pc = 0x194774u;
    SET_GPR_U32(ctx, 4, ((uint32_t)42 << 16));
    // 0x194778: 0x3183c
    ctx->pc = 0x194778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19477c: 0x34428080
    ctx->pc = 0x19477cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
    // 0x194780: 0x431025
    ctx->pc = 0x194780u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194784: 0x24848680
    ctx->pc = 0x194784u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936192));
    // 0x194788: 0x2625000c
    ctx->pc = 0x194788u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 12));
    // 0x19478c: 0x2626000e
    ctx->pc = 0x19478cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 14));
    // 0x194790: 0x3c017000
    ctx->pc = 0x194790u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194794: 0x24e3ffff
    ctx->pc = 0x194794u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x194798: 0xfc220028
    ctx->pc = 0x194798u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 40), GPR_U64(ctx, 2));
    // 0x19479c: 0x310c0
    ctx->pc = 0x19479cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1947a0: 0x431023
    ctx->pc = 0x1947a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1947a4: 0x210c0
    ctx->pc = 0x1947a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1947a8: 0x828021
    ctx->pc = 0x1947a8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1947ac: 0xc06628c
    ctx->pc = 0x1947ACu;
    SET_GPR_U32(ctx, 31, 0x1947B4u);
    ctx->pc = 0x1947B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A30_0x198a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947B4u; }
    }
    if (ctx->pc != 0x1947B4u) { return; }
    ctx->pc = 0x1947B4u;
    // 0x1947b4: 0x8622000e
    ctx->pc = 0x1947b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1947b8: 0x3c017000
    ctx->pc = 0x1947b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x1947bc: 0x8623000c
    ctx->pc = 0x1947bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1947c0: 0x21100
    ctx->pc = 0x1947c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1947c4: 0x31900
    ctx->pc = 0x1947c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1947c8: 0x21438
    ctx->pc = 0x1947c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1947cc: 0x621025
    ctx->pc = 0x1947ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1947d0: 0xfc220030
    ctx->pc = 0x1947d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 48), GPR_U64(ctx, 2));
    // 0x1947d4: 0xc06629c
    ctx->pc = 0x1947D4u;
    SET_GPR_U32(ctx, 31, 0x1947DCu);
    ctx->pc = 0x1947D8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947DCu; }
    }
    if (ctx->pc != 0x1947DCu) { return; }
    ctx->pc = 0x1947DCu;
    // 0x1947dc: 0x86240002
    ctx->pc = 0x1947dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1947e0: 0x2943c
    ctx->pc = 0x1947e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1947e4: 0xc0662a4
    ctx->pc = 0x1947E4u;
    SET_GPR_U32(ctx, 31, 0x1947ECu);
    ctx->pc = 0x1947E8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947ECu; }
    }
    if (ctx->pc != 0x1947ECu) { return; }
    ctx->pc = 0x1947ECu;
    // 0x1947ec: 0x3c01002a
    ctx->pc = 0x1947ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1947f0: 0x22c3c
    ctx->pc = 0x1947f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1947f4: 0x8c23fd54
    ctx->pc = 0x1947f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x1947f8: 0x3c024f00
    ctx->pc = 0x1947f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1947fc: 0x12243c
    ctx->pc = 0x1947fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x194800: 0x52c3f
    ctx->pc = 0x194800u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x194804: 0x4243f
    ctx->pc = 0x194804u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x194808: 0x44820000
    ctx->pc = 0x194808u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x19480c: 0x3c01002a
    ctx->pc = 0x19480cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194810: 0x641821
    ctx->pc = 0x194810u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194814: 0x8c22fd58
    ctx->pc = 0x194814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x194818: 0x31900
    ctx->pc = 0x194818u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x19481c: 0x3c01002a
    ctx->pc = 0x19481cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194820: 0x451021
    ctx->pc = 0x194820u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x194824: 0xc421f9f4
    ctx->pc = 0x194824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194828: 0x21100
    ctx->pc = 0x194828u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x19482c: 0x21438
    ctx->pc = 0x19482cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x194830: 0x46010036
    ctx->pc = 0x194830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194834: 0x45010005
    ctx->pc = 0x194834u;
    {
        const bool branch_taken_0x194834 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194838u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x194834) {
            ctx->pc = 0x19484Cu;
            goto label_19484c;
        }
    }
    ctx->pc = 0x19483Cu;
    // 0x19483c: 0x46000864
    ctx->pc = 0x19483cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194840: 0x44030800
    ctx->pc = 0x194840u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194844: 0x10000008
    ctx->pc = 0x194844u;
    {
        const bool branch_taken_0x194844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194848u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x194844) {
            ctx->pc = 0x194868u;
            goto label_194868;
        }
    }
    ctx->pc = 0x19484Cu;
label_19484c:
    // 0x19484c: 0x46000841
    ctx->pc = 0x19484cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194850: 0x3c028000
    ctx->pc = 0x194850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194854: 0x46000864
    ctx->pc = 0x194854u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194858: 0x44030800
    ctx->pc = 0x194858u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x19485c: 0x0
    ctx->pc = 0x19485cu;
    // NOP
    // 0x194860: 0x621825
    ctx->pc = 0x194860u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194864: 0x3103c
    ctx->pc = 0x194864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_194868:
    // 0x194868: 0x3c017000
    ctx->pc = 0x194868u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x19486c: 0x2103e
    ctx->pc = 0x19486cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194870: 0x200202d
    ctx->pc = 0x194870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194874: 0x2103c
    ctx->pc = 0x194874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194878: 0x26250010
    ctx->pc = 0x194878u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
    // 0x19487c: 0x461025
    ctx->pc = 0x19487cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x194880: 0x26260012
    ctx->pc = 0x194880u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 18));
    // 0x194884: 0xc06628c
    ctx->pc = 0x194884u;
    SET_GPR_U32(ctx, 31, 0x19488Cu);
    ctx->pc = 0x194888u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 56), GPR_U64(ctx, 2));
    ctx->pc = 0x198A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A30_0x198a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19488Cu; }
    }
    if (ctx->pc != 0x19488Cu) { return; }
    ctx->pc = 0x19488Cu;
    // 0x19488c: 0x86220012
    ctx->pc = 0x19488cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x194890: 0x3c017000
    ctx->pc = 0x194890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194894: 0x86230010
    ctx->pc = 0x194894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x194898: 0x21100
    ctx->pc = 0x194898u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x19489c: 0x31900
    ctx->pc = 0x19489cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1948a0: 0x21438
    ctx->pc = 0x1948a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1948a4: 0x621025
    ctx->pc = 0x1948a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1948a8: 0xfc220040
    ctx->pc = 0x1948a8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 64), GPR_U64(ctx, 2));
    // 0x1948ac: 0xc06629c
    ctx->pc = 0x1948ACu;
    SET_GPR_U32(ctx, 31, 0x1948B4u);
    ctx->pc = 0x1948B0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948B4u; }
    }
    if (ctx->pc != 0x1948B4u) { return; }
    ctx->pc = 0x1948B4u;
    // 0x1948b4: 0x86240006
    ctx->pc = 0x1948b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1948b8: 0x2943c
    ctx->pc = 0x1948b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1948bc: 0xc0662a4
    ctx->pc = 0x1948BCu;
    SET_GPR_U32(ctx, 31, 0x1948C4u);
    ctx->pc = 0x1948C0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948C4u; }
    }
    if (ctx->pc != 0x1948C4u) { return; }
    ctx->pc = 0x1948C4u;
    // 0x1948c4: 0x3c01002a
    ctx->pc = 0x1948c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1948c8: 0x22c3c
    ctx->pc = 0x1948c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1948cc: 0x8c23fd54
    ctx->pc = 0x1948ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x1948d0: 0x3c024f00
    ctx->pc = 0x1948d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1948d4: 0x12243c
    ctx->pc = 0x1948d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1948d8: 0x52c3f
    ctx->pc = 0x1948d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1948dc: 0x4243f
    ctx->pc = 0x1948dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1948e0: 0x44820000
    ctx->pc = 0x1948e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1948e4: 0x3c01002a
    ctx->pc = 0x1948e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1948e8: 0x641821
    ctx->pc = 0x1948e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1948ec: 0x8c22fd58
    ctx->pc = 0x1948ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x1948f0: 0x31900
    ctx->pc = 0x1948f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1948f4: 0x3c01002a
    ctx->pc = 0x1948f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1948f8: 0x451021
    ctx->pc = 0x1948f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1948fc: 0xc421f9f4
    ctx->pc = 0x1948fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194900: 0x21100
    ctx->pc = 0x194900u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194904: 0x21438
    ctx->pc = 0x194904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x194908: 0x46010036
    ctx->pc = 0x194908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19490c: 0x45010005
    ctx->pc = 0x19490Cu;
    {
        const bool branch_taken_0x19490c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194910u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x19490c) {
            ctx->pc = 0x194924u;
            goto label_194924;
        }
    }
    ctx->pc = 0x194914u;
    // 0x194914: 0x46000864
    ctx->pc = 0x194914u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194918: 0x44030800
    ctx->pc = 0x194918u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x19491c: 0x10000008
    ctx->pc = 0x19491Cu;
    {
        const bool branch_taken_0x19491c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194920u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x19491c) {
            ctx->pc = 0x194940u;
            goto label_194940;
        }
    }
    ctx->pc = 0x194924u;
label_194924:
    // 0x194924: 0x46000841
    ctx->pc = 0x194924u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194928: 0x3c028000
    ctx->pc = 0x194928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x19492c: 0x46000864
    ctx->pc = 0x19492cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194930: 0x44030800
    ctx->pc = 0x194930u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194934: 0x0
    ctx->pc = 0x194934u;
    // NOP
    // 0x194938: 0x621825
    ctx->pc = 0x194938u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19493c: 0x3103c
    ctx->pc = 0x19493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_194940:
    // 0x194940: 0x3c017000
    ctx->pc = 0x194940u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194944: 0x2103e
    ctx->pc = 0x194944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194948: 0x200202d
    ctx->pc = 0x194948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19494c: 0x2103c
    ctx->pc = 0x19494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194950: 0x26250014
    ctx->pc = 0x194950u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 20));
    // 0x194954: 0x461025
    ctx->pc = 0x194954u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x194958: 0x26260016
    ctx->pc = 0x194958u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 22));
    // 0x19495c: 0xc06628c
    ctx->pc = 0x19495Cu;
    SET_GPR_U32(ctx, 31, 0x194964u);
    ctx->pc = 0x194960u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 72), GPR_U64(ctx, 2));
    ctx->pc = 0x198A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A30_0x198a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194964u; }
    }
    if (ctx->pc != 0x194964u) { return; }
    ctx->pc = 0x194964u;
    // 0x194964: 0x86220016
    ctx->pc = 0x194964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x194968: 0x3c017000
    ctx->pc = 0x194968u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x19496c: 0x86230014
    ctx->pc = 0x19496cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x194970: 0x21100
    ctx->pc = 0x194970u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194974: 0x31900
    ctx->pc = 0x194974u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x194978: 0x21438
    ctx->pc = 0x194978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x19497c: 0x621025
    ctx->pc = 0x19497cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194980: 0xfc220050
    ctx->pc = 0x194980u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 80), GPR_U64(ctx, 2));
    // 0x194984: 0xc06629c
    ctx->pc = 0x194984u;
    SET_GPR_U32(ctx, 31, 0x19498Cu);
    ctx->pc = 0x194988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x198A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A70_0x198a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19498Cu; }
    }
    if (ctx->pc != 0x19498Cu) { return; }
    ctx->pc = 0x19498Cu;
    // 0x19498c: 0x8624000a
    ctx->pc = 0x19498cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x194990: 0x2843c
    ctx->pc = 0x194990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194994: 0xc0662a4
    ctx->pc = 0x194994u;
    SET_GPR_U32(ctx, 31, 0x19499Cu);
    ctx->pc = 0x194998u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->pc = 0x198A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198A90_0x198a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19499Cu; }
    }
    if (ctx->pc != 0x19499Cu) { return; }
    ctx->pc = 0x19499Cu;
    // 0x19499c: 0x3c01002a
    ctx->pc = 0x19499cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1949a0: 0x22c3c
    ctx->pc = 0x1949a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1949a4: 0x8c23fd54
    ctx->pc = 0x1949a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294966612)));
    // 0x1949a8: 0x3c024f00
    ctx->pc = 0x1949a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1949ac: 0x10243c
    ctx->pc = 0x1949acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1949b0: 0x52c3f
    ctx->pc = 0x1949b0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1949b4: 0x4243f
    ctx->pc = 0x1949b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1949b8: 0x44820000
    ctx->pc = 0x1949b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1949bc: 0x3c01002a
    ctx->pc = 0x1949bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1949c0: 0x641821
    ctx->pc = 0x1949c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1949c4: 0x8c22fd58
    ctx->pc = 0x1949c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966616)));
    // 0x1949c8: 0x31900
    ctx->pc = 0x1949c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1949cc: 0x3c01002a
    ctx->pc = 0x1949ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1949d0: 0x451021
    ctx->pc = 0x1949d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1949d4: 0xc421f9f4
    ctx->pc = 0x1949d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1949d8: 0x21100
    ctx->pc = 0x1949d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1949dc: 0x21438
    ctx->pc = 0x1949dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1949e0: 0x46010036
    ctx->pc = 0x1949e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1949e4: 0x45010005
    ctx->pc = 0x1949E4u;
    {
        const bool branch_taken_0x1949e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1949E8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1949e4) {
            ctx->pc = 0x1949FCu;
            goto label_1949fc;
        }
    }
    ctx->pc = 0x1949ECu;
    // 0x1949ec: 0x46000864
    ctx->pc = 0x1949ecu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1949f0: 0x44030800
    ctx->pc = 0x1949f0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1949f4: 0x10000008
    ctx->pc = 0x1949F4u;
    {
        const bool branch_taken_0x1949f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1949F8u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x1949f4) {
            ctx->pc = 0x194A18u;
            goto label_194a18;
        }
    }
    ctx->pc = 0x1949FCu;
label_1949fc:
    // 0x1949fc: 0x46000841
    ctx->pc = 0x1949fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194a00: 0x3c028000
    ctx->pc = 0x194a00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194a04: 0x46000864
    ctx->pc = 0x194a04u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194a08: 0x44030800
    ctx->pc = 0x194a08u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194a0c: 0x0
    ctx->pc = 0x194a0cu;
    // NOP
    // 0x194a10: 0x621825
    ctx->pc = 0x194a10u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194a14: 0x3103c
    ctx->pc = 0x194a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_194a18:
    // 0x194a18: 0x3c017000
    ctx->pc = 0x194a18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194a1c: 0x2103e
    ctx->pc = 0x194a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194a20: 0x3c047000
    ctx->pc = 0x194a20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x194a24: 0x2103c
    ctx->pc = 0x194a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194a28: 0x451025
    ctx->pc = 0x194a28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x194a2c: 0xc064f88
    ctx->pc = 0x194A2Cu;
    SET_GPR_U32(ctx, 31, 0x194A34u);
    ctx->pc = 0x194A30u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 88), GPR_U64(ctx, 2));
    ctx->pc = 0x193E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E20_0x193e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A34u; }
    }
    if (ctx->pc != 0x194A34u) { return; }
    ctx->pc = 0x194A34u;
    // 0x194a34: 0x24020001
    ctx->pc = 0x194a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_194a38:
    // 0x194a38: 0xdfbf0030
    ctx->pc = 0x194a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194a3c: 0x7bb20020
    ctx->pc = 0x194a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194a40: 0x7bb10010
    ctx->pc = 0x194a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a44: 0x7bb00000
    ctx->pc = 0x194a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194a48: 0x3e00008
    ctx->pc = 0x194A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194A4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193ED0u: goto label_193ed0;
            case 0x193F0Cu: goto label_193f0c;
            case 0x193F28u: goto label_193f28;
            case 0x193F3Cu: goto label_193f3c;
            case 0x193F50u: goto label_193f50;
            case 0x193F64u: goto label_193f64;
            case 0x193F78u: goto label_193f78;
            case 0x193F7Cu: goto label_193f7c;
            case 0x193FB8u: goto label_193fb8;
            case 0x194068u: goto label_194068;
            case 0x194078u: goto label_194078;
            case 0x1940D4u: goto label_1940d4;
            case 0x1940F0u: goto label_1940f0;
            case 0x19414Cu: goto label_19414c;
            case 0x19415Cu: goto label_19415c;
            case 0x1941B8u: goto label_1941b8;
            case 0x1941D4u: goto label_1941d4;
            case 0x1941F4u: goto label_1941f4;
            case 0x194238u: goto label_194238;
            case 0x194338u: goto label_194338;
            case 0x194354u: goto label_194354;
            case 0x194420u: goto label_194420;
            case 0x19443Cu: goto label_19443c;
            case 0x19445Cu: goto label_19445c;
            case 0x194498u: goto label_194498;
            case 0x194578u: goto label_194578;
            case 0x194594u: goto label_194594;
            case 0x194620u: goto label_194620;
            case 0x19463Cu: goto label_19463c;
            case 0x1946C8u: goto label_1946c8;
            case 0x1946E4u: goto label_1946e4;
            case 0x194704u: goto label_194704;
            case 0x19474Cu: goto label_19474c;
            case 0x19484Cu: goto label_19484c;
            case 0x194868u: goto label_194868;
            case 0x194924u: goto label_194924;
            case 0x194940u: goto label_194940;
            case 0x1949FCu: goto label_1949fc;
            case 0x194A18u: goto label_194a18;
            case 0x194A38u: goto label_194a38;
            case 0x194A7Cu: goto label_194a7c;
            case 0x194B6Cu: goto label_194b6c;
            case 0x194B88u: goto label_194b88;
            case 0x194C24u: goto label_194c24;
            case 0x194C40u: goto label_194c40;
            case 0x194C60u: goto label_194c60;
            case 0x194CA4u: goto label_194ca4;
            case 0x194D8Cu: goto label_194d8c;
            case 0x194DA0u: goto label_194da0;
            case 0x194E2Cu: goto label_194e2c;
            case 0x194E48u: goto label_194e48;
            case 0x194EDCu: goto label_194edc;
            case 0x194EF0u: goto label_194ef0;
            case 0x194F80u: goto label_194f80;
            case 0x194F9Cu: goto label_194f9c;
            case 0x194FBCu: goto label_194fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194A50u;
    // 0x194a50: 0x27bdffd0
    ctx->pc = 0x194a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194a54: 0x3c01002a
    ctx->pc = 0x194a54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194a58: 0xffbf0020
    ctx->pc = 0x194a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194a5c: 0x7fb00010
    ctx->pc = 0x194a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194a60: 0xe7b50004
    ctx->pc = 0x194a60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x194a64: 0xe7b40000
    ctx->pc = 0x194a64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x194a68: 0x8c22fda4
    ctx->pc = 0x194a68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966692)));
    // 0x194a6c: 0x10400003
    ctx->pc = 0x194A6Cu;
    {
        const bool branch_taken_0x194a6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194A70u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194a6c) {
            ctx->pc = 0x194A7Cu;
            goto label_194a7c;
        }
    }
    ctx->pc = 0x194A74u;
    // 0x194a74: 0x1000007a
    ctx->pc = 0x194A74u;
    {
        const bool branch_taken_0x194a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194A78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x194a74) {
            ctx->pc = 0x194C60u;
            goto label_194c60;
        }
    }
    ctx->pc = 0x194A7Cu;
label_194a7c:
    // 0x194a7c: 0x3c040023
    ctx->pc = 0x194a7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x194a80: 0x3c057000
    ctx->pc = 0x194a80u;
    SET_GPR_U32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x194a84: 0x2484ff90
    ctx->pc = 0x194a84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967184));
    // 0x194a88: 0xc0626c2
    ctx->pc = 0x194A88u;
    SET_GPR_U32(ctx, 31, 0x194A90u);
    ctx->pc = 0x194A8Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x189B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B08_0x189b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A90u; }
    }
    if (ctx->pc != 0x194A90u) { return; }
    ctx->pc = 0x194A90u;
    // 0x194a90: 0x8e040020
    ctx->pc = 0x194a90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x194a94: 0xc0662d8
    ctx->pc = 0x194A94u;
    SET_GPR_U32(ctx, 31, 0x194A9Cu);
    ctx->pc = 0x194A98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x198B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198B60_0x198b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A9Cu; }
    }
    if (ctx->pc != 0x194A9Cu) { return; }
    ctx->pc = 0x194A9Cu;
    // 0x194a9c: 0x22402
    ctx->pc = 0x194a9cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 16));
    // 0x194aa0: 0x21a02
    ctx->pc = 0x194aa0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x194aa4: 0x308500ff
    ctx->pc = 0x194aa4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
    // 0x194aa8: 0x306300ff
    ctx->pc = 0x194aa8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x194aac: 0x32238
    ctx->pc = 0x194aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
    // 0x194ab0: 0x3c017000
    ctx->pc = 0x194ab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194ab4: 0x304300ff
    ctx->pc = 0x194ab4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x194ab8: 0xa42025
    ctx->pc = 0x194ab8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x194abc: 0x31c38
    ctx->pc = 0x194abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x194ac0: 0x21602
    ctx->pc = 0x194ac0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
    // 0x194ac4: 0x642025
    ctx->pc = 0x194ac4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194ac8: 0x304300ff
    ctx->pc = 0x194ac8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x194acc: 0x9e02000c
    ctx->pc = 0x194accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x194ad0: 0x31e38
    ctx->pc = 0x194ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x194ad4: 0x641825
    ctx->pc = 0x194ad4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194ad8: 0x2103c
    ctx->pc = 0x194ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194adc: 0x431025
    ctx->pc = 0x194adcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194ae0: 0xfc220028
    ctx->pc = 0x194ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 40), GPR_U64(ctx, 2));
    // 0x194ae4: 0xc0662b4
    ctx->pc = 0x194AE4u;
    SET_GPR_U32(ctx, 31, 0x194AECu);
    ctx->pc = 0x194AE8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x198AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198AD0_0x198ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AECu; }
    }
    if (ctx->pc != 0x194AECu) { return; }
    ctx->pc = 0x194AECu;
    // 0x194aec: 0xc60c0004
    ctx->pc = 0x194aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194af0: 0xc0662bc
    ctx->pc = 0x194AF0u;
    SET_GPR_U32(ctx, 31, 0x194AF8u);
    ctx->pc = 0x194AF4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x198AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198AF0_0x198af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AF8u; }
    }
    if (ctx->pc != 0x194AF8u) { return; }
    ctx->pc = 0x194AF8u;
    // 0x194af8: 0xc60c0008
    ctx->pc = 0x194af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194afc: 0xc0662cc
    ctx->pc = 0x194AFCu;
    SET_GPR_U32(ctx, 31, 0x194B04u);
    ctx->pc = 0x194B00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x198B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198B30_0x198b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B04u; }
    }
    if (ctx->pc != 0x194B04u) { return; }
    ctx->pc = 0x194B04u;
    // 0x194b04: 0x3c01002a
    ctx->pc = 0x194b04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194b08: 0x3c024f00
    ctx->pc = 0x194b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x194b0c: 0xc423fd54
    ctx->pc = 0x194b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x194b10: 0x44820800
    ctx->pc = 0x194b10u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x194b14: 0x0
    ctx->pc = 0x194b14u;
    // NOP
    // 0x194b18: 0x46000836
    ctx->pc = 0x194b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194b1c: 0x3c01002a
    ctx->pc = 0x194b1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194b20: 0xc422fd58
    ctx->pc = 0x194b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194b24: 0x468018e0
    ctx->pc = 0x194b24u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x194b28: 0x468010a0
    ctx->pc = 0x194b28u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x194b2c: 0x461518c0
    ctx->pc = 0x194b2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
    // 0x194b30: 0x46141080
    ctx->pc = 0x194b30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x194b34: 0x460018e4
    ctx->pc = 0x194b34u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[3]);
    // 0x194b38: 0x44021800
    ctx->pc = 0x194b38u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x194b3c: 0x460010a4
    ctx->pc = 0x194b3cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x194b40: 0x21900
    ctx->pc = 0x194b40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194b44: 0x44021000
    ctx->pc = 0x194b44u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x194b48: 0x0
    ctx->pc = 0x194b48u;
    // NOP
    // 0x194b4c: 0x21100
    ctx->pc = 0x194b4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194b50: 0x21438
    ctx->pc = 0x194b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x194b54: 0x45010005
    ctx->pc = 0x194B54u;
    {
        const bool branch_taken_0x194b54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194B58u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x194b54) {
            ctx->pc = 0x194B6Cu;
            goto label_194b6c;
        }
    }
    ctx->pc = 0x194B5Cu;
    // 0x194b5c: 0x46000024
    ctx->pc = 0x194b5cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x194b60: 0x44030000
    ctx->pc = 0x194b60u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x194b64: 0x10000008
    ctx->pc = 0x194B64u;
    {
        const bool branch_taken_0x194b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194B68u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x194b64) {
            ctx->pc = 0x194B88u;
            goto label_194b88;
        }
    }
    ctx->pc = 0x194B6Cu;
label_194b6c:
    // 0x194b6c: 0x46010001
    ctx->pc = 0x194b6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x194b70: 0x3c028000
    ctx->pc = 0x194b70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194b74: 0x46000024
    ctx->pc = 0x194b74u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x194b78: 0x44030000
    ctx->pc = 0x194b78u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x194b7c: 0x0
    ctx->pc = 0x194b7cu;
    // NOP
    // 0x194b80: 0x621825
    ctx->pc = 0x194b80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194b84: 0x3103c
    ctx->pc = 0x194b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_194b88:
    // 0x194b88: 0x3c017000
    ctx->pc = 0x194b88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194b8c: 0x2103e
    ctx->pc = 0x194b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194b90: 0x2103c
    ctx->pc = 0x194b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194b94: 0x441025
    ctx->pc = 0x194b94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x194b98: 0xfc220030
    ctx->pc = 0x194b98u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 48), GPR_U64(ctx, 2));
    // 0x194b9c: 0xc0662b4
    ctx->pc = 0x194B9Cu;
    SET_GPR_U32(ctx, 31, 0x194BA4u);
    ctx->pc = 0x194BA0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x198AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198AD0_0x198ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BA4u; }
    }
    if (ctx->pc != 0x194BA4u) { return; }
    ctx->pc = 0x194BA4u;
    // 0x194ba4: 0xc60c0014
    ctx->pc = 0x194ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194ba8: 0xc0662bc
    ctx->pc = 0x194BA8u;
    SET_GPR_U32(ctx, 31, 0x194BB0u);
    ctx->pc = 0x194BACu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x198AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198AF0_0x198af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BB0u; }
    }
    if (ctx->pc != 0x194BB0u) { return; }
    ctx->pc = 0x194BB0u;
    // 0x194bb0: 0xc60c0018
    ctx->pc = 0x194bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194bb4: 0xc0662cc
    ctx->pc = 0x194BB4u;
    SET_GPR_U32(ctx, 31, 0x194BBCu);
    ctx->pc = 0x194BB8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x198B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198B30_0x198b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BBCu; }
    }
    if (ctx->pc != 0x194BBCu) { return; }
    ctx->pc = 0x194BBCu;
    // 0x194bbc: 0x3c01002a
    ctx->pc = 0x194bbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194bc0: 0x3c024f00
    ctx->pc = 0x194bc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x194bc4: 0xc423fd54
    ctx->pc = 0x194bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x194bc8: 0x44820800
    ctx->pc = 0x194bc8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x194bcc: 0x0
    ctx->pc = 0x194bccu;
    // NOP
    // 0x194bd0: 0x46000836
    ctx->pc = 0x194bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194bd4: 0x3c01002a
    ctx->pc = 0x194bd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194bd8: 0xc422fd58
    ctx->pc = 0x194bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194bdc: 0x468018e0
    ctx->pc = 0x194bdcu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x194be0: 0x468010a0
    ctx->pc = 0x194be0u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x194be4: 0x461518c0
    ctx->pc = 0x194be4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
    // 0x194be8: 0x46141080
    ctx->pc = 0x194be8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x194bec: 0x460018e4
    ctx->pc = 0x194becu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[3]);
    // 0x194bf0: 0x44021800
    ctx->pc = 0x194bf0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x194bf4: 0x460010a4
    ctx->pc = 0x194bf4u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x194bf8: 0x21900
    ctx->pc = 0x194bf8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194bfc: 0x44021000
    ctx->pc = 0x194bfcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x194c00: 0x0
    ctx->pc = 0x194c00u;
    // NOP
    // 0x194c04: 0x21100
    ctx->pc = 0x194c04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194c08: 0x21438
    ctx->pc = 0x194c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x194c0c: 0x45010005
    ctx->pc = 0x194C0Cu;
    {
        const bool branch_taken_0x194c0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194C10u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x194c0c) {
            ctx->pc = 0x194C24u;
            goto label_194c24;
        }
    }
    ctx->pc = 0x194C14u;
    // 0x194c14: 0x46000024
    ctx->pc = 0x194c14u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x194c18: 0x44030000
    ctx->pc = 0x194c18u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x194c1c: 0x10000008
    ctx->pc = 0x194C1Cu;
    {
        const bool branch_taken_0x194c1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194C20u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x194c1c) {
            ctx->pc = 0x194C40u;
            goto label_194c40;
        }
    }
    ctx->pc = 0x194C24u;
label_194c24:
    // 0x194c24: 0x46010001
    ctx->pc = 0x194c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x194c28: 0x3c028000
    ctx->pc = 0x194c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194c2c: 0x46000024
    ctx->pc = 0x194c2cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x194c30: 0x44030000
    ctx->pc = 0x194c30u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x194c34: 0x0
    ctx->pc = 0x194c34u;
    // NOP
    // 0x194c38: 0x621825
    ctx->pc = 0x194c38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194c3c: 0x3103c
    ctx->pc = 0x194c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_194c40:
    // 0x194c40: 0x3c017000
    ctx->pc = 0x194c40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194c44: 0x2103e
    ctx->pc = 0x194c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194c48: 0x3c047000
    ctx->pc = 0x194c48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x194c4c: 0x2103c
    ctx->pc = 0x194c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194c50: 0x451025
    ctx->pc = 0x194c50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x194c54: 0xc064f88
    ctx->pc = 0x194C54u;
    SET_GPR_U32(ctx, 31, 0x194C5Cu);
    ctx->pc = 0x194C58u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 56), GPR_U64(ctx, 2));
    ctx->pc = 0x193E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E20_0x193e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C5Cu; }
    }
    if (ctx->pc != 0x194C5Cu) { return; }
    ctx->pc = 0x194C5Cu;
    // 0x194c5c: 0x24020001
    ctx->pc = 0x194c5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_194c60:
    // 0x194c60: 0xdfbf0020
    ctx->pc = 0x194c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194c64: 0xc7b50004
    ctx->pc = 0x194c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x194c68: 0x7bb00010
    ctx->pc = 0x194c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c6c: 0xc7b40000
    ctx->pc = 0x194c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194c70: 0x3e00008
    ctx->pc = 0x194C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194C74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193ED0u: goto label_193ed0;
            case 0x193F0Cu: goto label_193f0c;
            case 0x193F28u: goto label_193f28;
            case 0x193F3Cu: goto label_193f3c;
            case 0x193F50u: goto label_193f50;
            case 0x193F64u: goto label_193f64;
            case 0x193F78u: goto label_193f78;
            case 0x193F7Cu: goto label_193f7c;
            case 0x193FB8u: goto label_193fb8;
            case 0x194068u: goto label_194068;
            case 0x194078u: goto label_194078;
            case 0x1940D4u: goto label_1940d4;
            case 0x1940F0u: goto label_1940f0;
            case 0x19414Cu: goto label_19414c;
            case 0x19415Cu: goto label_19415c;
            case 0x1941B8u: goto label_1941b8;
            case 0x1941D4u: goto label_1941d4;
            case 0x1941F4u: goto label_1941f4;
            case 0x194238u: goto label_194238;
            case 0x194338u: goto label_194338;
            case 0x194354u: goto label_194354;
            case 0x194420u: goto label_194420;
            case 0x19443Cu: goto label_19443c;
            case 0x19445Cu: goto label_19445c;
            case 0x194498u: goto label_194498;
            case 0x194578u: goto label_194578;
            case 0x194594u: goto label_194594;
            case 0x194620u: goto label_194620;
            case 0x19463Cu: goto label_19463c;
            case 0x1946C8u: goto label_1946c8;
            case 0x1946E4u: goto label_1946e4;
            case 0x194704u: goto label_194704;
            case 0x19474Cu: goto label_19474c;
            case 0x19484Cu: goto label_19484c;
            case 0x194868u: goto label_194868;
            case 0x194924u: goto label_194924;
            case 0x194940u: goto label_194940;
            case 0x1949FCu: goto label_1949fc;
            case 0x194A18u: goto label_194a18;
            case 0x194A38u: goto label_194a38;
            case 0x194A7Cu: goto label_194a7c;
            case 0x194B6Cu: goto label_194b6c;
            case 0x194B88u: goto label_194b88;
            case 0x194C24u: goto label_194c24;
            case 0x194C40u: goto label_194c40;
            case 0x194C60u: goto label_194c60;
            case 0x194CA4u: goto label_194ca4;
            case 0x194D8Cu: goto label_194d8c;
            case 0x194DA0u: goto label_194da0;
            case 0x194E2Cu: goto label_194e2c;
            case 0x194E48u: goto label_194e48;
            case 0x194EDCu: goto label_194edc;
            case 0x194EF0u: goto label_194ef0;
            case 0x194F80u: goto label_194f80;
            case 0x194F9Cu: goto label_194f9c;
            case 0x194FBCu: goto label_194fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194C78u;
    // 0x194c78: 0x0
    ctx->pc = 0x194c78u;
    // NOP
    // 0x194c7c: 0x0
    ctx->pc = 0x194c7cu;
    // NOP
    // 0x194c80: 0x27bdffd0
    ctx->pc = 0x194c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194c84: 0x3c01002a
    ctx->pc = 0x194c84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194c88: 0xffbf0010
    ctx->pc = 0x194c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194c8c: 0x7fb00000
    ctx->pc = 0x194c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194c90: 0x8c22fda4
    ctx->pc = 0x194c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966692)));
    // 0x194c94: 0x10400003
    ctx->pc = 0x194C94u;
    {
        const bool branch_taken_0x194c94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194C98u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194c94) {
            ctx->pc = 0x194CA4u;
            goto label_194ca4;
        }
    }
    ctx->pc = 0x194C9Cu;
    // 0x194c9c: 0x100000c7
    ctx->pc = 0x194C9Cu;
    {
        const bool branch_taken_0x194c9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194CA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x194c9c) {
            ctx->pc = 0x194FBCu;
            goto label_194fbc;
        }
    }
    ctx->pc = 0x194CA4u;
label_194ca4:
    // 0x194ca4: 0x3c040023
    ctx->pc = 0x194ca4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x194ca8: 0x3c057000
    ctx->pc = 0x194ca8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x194cac: 0x2484ffd0
    ctx->pc = 0x194cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x194cb0: 0xc0626c2
    ctx->pc = 0x194CB0u;
    SET_GPR_U32(ctx, 31, 0x194CB8u);
    ctx->pc = 0x194CB4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x189B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B08_0x189b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CB8u; }
    }
    if (ctx->pc != 0x194CB8u) { return; }
    ctx->pc = 0x194CB8u;
    // 0x194cb8: 0x8e040020
    ctx->pc = 0x194cb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x194cbc: 0xc0662d8
    ctx->pc = 0x194CBCu;
    SET_GPR_U32(ctx, 31, 0x194CC4u);
    ctx->pc = 0x194CC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00198B60_0x198b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CC4u; }
    }
    if (ctx->pc != 0x194CC4u) { return; }
    ctx->pc = 0x194CC4u;
    // 0x194cc4: 0x22402
    ctx->pc = 0x194cc4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 16));
    // 0x194cc8: 0x21a02
    ctx->pc = 0x194cc8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x194ccc: 0x308500ff
    ctx->pc = 0x194cccu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
    // 0x194cd0: 0x306300ff
    ctx->pc = 0x194cd0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x194cd4: 0x32238
    ctx->pc = 0x194cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
    // 0x194cd8: 0x3c017000
    ctx->pc = 0x194cd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194cdc: 0x304300ff
    ctx->pc = 0x194cdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x194ce0: 0xa42025
    ctx->pc = 0x194ce0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x194ce4: 0x31c38
    ctx->pc = 0x194ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x194ce8: 0x21602
    ctx->pc = 0x194ce8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 24));
    // 0x194cec: 0x642025
    ctx->pc = 0x194cecu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194cf0: 0x304300ff
    ctx->pc = 0x194cf0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x194cf4: 0x9e02000c
    ctx->pc = 0x194cf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x194cf8: 0x31e38
    ctx->pc = 0x194cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x194cfc: 0x641825
    ctx->pc = 0x194cfcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194d00: 0x2103c
    ctx->pc = 0x194d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194d04: 0x431025
    ctx->pc = 0x194d04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194d08: 0xfc220028
    ctx->pc = 0x194d08u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 40), GPR_U64(ctx, 2));
    // 0x194d0c: 0xc6010024
    ctx->pc = 0x194d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d10: 0x3c017000
    ctx->pc = 0x194d10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194d14: 0xc600000c
    ctx->pc = 0x194d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194d18: 0x46000802
    ctx->pc = 0x194d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194d1c: 0xe7a0002c
    ctx->pc = 0x194d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x194d20: 0xc6010028
    ctx->pc = 0x194d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d24: 0x9fa3002c
    ctx->pc = 0x194d24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x194d28: 0xc600000c
    ctx->pc = 0x194d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194d2c: 0x46000802
    ctx->pc = 0x194d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194d30: 0xe7a00028
    ctx->pc = 0x194d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x194d34: 0x9fa20028
    ctx->pc = 0x194d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x194d38: 0x2103c
    ctx->pc = 0x194d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194d3c: 0x621025
    ctx->pc = 0x194d3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194d40: 0xfc220030
    ctx->pc = 0x194d40u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 48), GPR_U64(ctx, 2));
    // 0x194d44: 0x3c01002a
    ctx->pc = 0x194d44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194d48: 0xc420fd5c
    ctx->pc = 0x194d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194d4c: 0xc6010000
    ctx->pc = 0x194d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d50: 0x46800020
    ctx->pc = 0x194d50u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x194d54: 0x3c01002a
    ctx->pc = 0x194d54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194d58: 0x8c22f9b4
    ctx->pc = 0x194d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965684)));
    // 0x194d5c: 0x1440000b
    ctx->pc = 0x194D5Cu;
    {
        const bool branch_taken_0x194d5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194D60u;
        ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x194d5c) {
            ctx->pc = 0x194D8Cu;
            goto label_194d8c;
        }
    }
    ctx->pc = 0x194D64u;
    // 0x194d64: 0x3c01002a
    ctx->pc = 0x194d64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194d68: 0x3c023f00
    ctx->pc = 0x194d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x194d6c: 0xc421fd60
    ctx->pc = 0x194d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d70: 0xc6020004
    ctx->pc = 0x194d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194d74: 0x44820000
    ctx->pc = 0x194d74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x194d78: 0x0
    ctx->pc = 0x194d78u;
    // NOP
    // 0x194d7c: 0x46800860
    ctx->pc = 0x194d7cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x194d80: 0x46011041
    ctx->pc = 0x194d80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x194d84: 0x10000006
    ctx->pc = 0x194D84u;
    {
        const bool branch_taken_0x194d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194D88u;
        ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x194d84) {
            ctx->pc = 0x194DA0u;
            goto label_194da0;
        }
    }
    ctx->pc = 0x194D8Cu;
label_194d8c:
    // 0x194d8c: 0x3c01002a
    ctx->pc = 0x194d8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194d90: 0xc420fd60
    ctx->pc = 0x194d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194d94: 0xc6010004
    ctx->pc = 0x194d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d98: 0x46800020
    ctx->pc = 0x194d98u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x194d9c: 0x460009c1
    ctx->pc = 0x194d9cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_194da0:
    // 0x194da0: 0x3c01002a
    ctx->pc = 0x194da0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194da4: 0x3c023f80
    ctx->pc = 0x194da4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x194da8: 0xc426fd58
    ctx->pc = 0x194da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x194dac: 0x44821800
    ctx->pc = 0x194dacu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x194db0: 0xc6040008
    ctx->pc = 0x194db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x194db4: 0x3c02bf00
    ctx->pc = 0x194db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48896 << 16));
    // 0x194db8: 0x44821000
    ctx->pc = 0x194db8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x194dbc: 0x3c01002a
    ctx->pc = 0x194dbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194dc0: 0x3c024f00
    ctx->pc = 0x194dc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x194dc4: 0xc425fd54
    ctx->pc = 0x194dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x194dc8: 0x460320c1
    ctx->pc = 0x194dc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x194dcc: 0x468031a0
    ctx->pc = 0x194dccu;
    ctx->f[6] = FPU_CVT_S_W(*(int32_t*)&ctx->f[6]);
    // 0x194dd0: 0x3c01002a
    ctx->pc = 0x194dd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194dd4: 0xc421f9f4
    ctx->pc = 0x194dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194dd8: 0x46031082
    ctx->pc = 0x194dd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x194ddc: 0x46011042
    ctx->pc = 0x194ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194de0: 0x46073180
    ctx->pc = 0x194de0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x194de4: 0x44820000
    ctx->pc = 0x194de4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x194de8: 0x460030a4
    ctx->pc = 0x194de8u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[6]);
    // 0x194dec: 0x44021000
    ctx->pc = 0x194decu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x194df0: 0x46010036
    ctx->pc = 0x194df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194df4: 0x21100
    ctx->pc = 0x194df4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194df8: 0x468028a0
    ctx->pc = 0x194df8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[5]);
    // 0x194dfc: 0x21c38
    ctx->pc = 0x194dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x194e00: 0x46081080
    ctx->pc = 0x194e00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x194e04: 0x460010a4
    ctx->pc = 0x194e04u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x194e08: 0x44021000
    ctx->pc = 0x194e08u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x194e0c: 0x0
    ctx->pc = 0x194e0cu;
    // NOP
    // 0x194e10: 0x21100
    ctx->pc = 0x194e10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e14: 0x45010005
    ctx->pc = 0x194E14u;
    {
        const bool branch_taken_0x194e14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194E18u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x194e14) {
            ctx->pc = 0x194E2Cu;
            goto label_194e2c;
        }
    }
    ctx->pc = 0x194E1Cu;
    // 0x194e1c: 0x46000864
    ctx->pc = 0x194e1cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194e20: 0x44030800
    ctx->pc = 0x194e20u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194e24: 0x10000008
    ctx->pc = 0x194E24u;
    {
        const bool branch_taken_0x194e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194E28u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x194e24) {
            ctx->pc = 0x194E48u;
            goto label_194e48;
        }
    }
    ctx->pc = 0x194E2Cu;
label_194e2c:
    // 0x194e2c: 0x46000841
    ctx->pc = 0x194e2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194e30: 0x3c028000
    ctx->pc = 0x194e30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194e34: 0x46000864
    ctx->pc = 0x194e34u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194e38: 0x44030800
    ctx->pc = 0x194e38u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194e3c: 0x0
    ctx->pc = 0x194e3cu;
    // NOP
    // 0x194e40: 0x621825
    ctx->pc = 0x194e40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194e44: 0x3103c
    ctx->pc = 0x194e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_194e48:
    // 0x194e48: 0x3c017000
    ctx->pc = 0x194e48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194e4c: 0x2103e
    ctx->pc = 0x194e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194e50: 0x2103c
    ctx->pc = 0x194e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194e54: 0x441025
    ctx->pc = 0x194e54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x194e58: 0xfc220038
    ctx->pc = 0x194e58u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 56), GPR_U64(ctx, 2));
    // 0x194e5c: 0xc601002c
    ctx->pc = 0x194e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194e60: 0x3c017000
    ctx->pc = 0x194e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194e64: 0xc600001c
    ctx->pc = 0x194e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194e68: 0x46000802
    ctx->pc = 0x194e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194e6c: 0xe7a0002c
    ctx->pc = 0x194e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x194e70: 0xc6010030
    ctx->pc = 0x194e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194e74: 0x9fa3002c
    ctx->pc = 0x194e74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x194e78: 0xc600001c
    ctx->pc = 0x194e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194e7c: 0x46000802
    ctx->pc = 0x194e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194e80: 0xe7a00028
    ctx->pc = 0x194e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x194e84: 0x9fa20028
    ctx->pc = 0x194e84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x194e88: 0x2103c
    ctx->pc = 0x194e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194e8c: 0x621025
    ctx->pc = 0x194e8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194e90: 0xfc220040
    ctx->pc = 0x194e90u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 64), GPR_U64(ctx, 2));
    // 0x194e94: 0x3c01002a
    ctx->pc = 0x194e94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194e98: 0xc420fd5c
    ctx->pc = 0x194e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194e9c: 0xc6010010
    ctx->pc = 0x194e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194ea0: 0x46800020
    ctx->pc = 0x194ea0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x194ea4: 0x3c01002a
    ctx->pc = 0x194ea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194ea8: 0x8c22f9b4
    ctx->pc = 0x194ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965684)));
    // 0x194eac: 0x1440000b
    ctx->pc = 0x194EACu;
    {
        const bool branch_taken_0x194eac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194EB0u;
        ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x194eac) {
            ctx->pc = 0x194EDCu;
            goto label_194edc;
        }
    }
    ctx->pc = 0x194EB4u;
    // 0x194eb4: 0x3c01002a
    ctx->pc = 0x194eb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194eb8: 0x3c023f00
    ctx->pc = 0x194eb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x194ebc: 0xc421fd60
    ctx->pc = 0x194ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194ec0: 0xc6020014
    ctx->pc = 0x194ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194ec4: 0x44820000
    ctx->pc = 0x194ec4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x194ec8: 0x0
    ctx->pc = 0x194ec8u;
    // NOP
    // 0x194ecc: 0x46800860
    ctx->pc = 0x194eccu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x194ed0: 0x46011041
    ctx->pc = 0x194ed0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x194ed4: 0x10000006
    ctx->pc = 0x194ED4u;
    {
        const bool branch_taken_0x194ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194ED8u;
        ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x194ed4) {
            ctx->pc = 0x194EF0u;
            goto label_194ef0;
        }
    }
    ctx->pc = 0x194EDCu;
label_194edc:
    // 0x194edc: 0x3c01002a
    ctx->pc = 0x194edcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194ee0: 0xc420fd60
    ctx->pc = 0x194ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194ee4: 0xc6010014
    ctx->pc = 0x194ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194ee8: 0x46800020
    ctx->pc = 0x194ee8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x194eec: 0x460009c1
    ctx->pc = 0x194eecu;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_194ef0:
    // 0x194ef0: 0x3c01002a
    ctx->pc = 0x194ef0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194ef4: 0x3c023f80
    ctx->pc = 0x194ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x194ef8: 0xc426fd58
    ctx->pc = 0x194ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x194efc: 0x44821800
    ctx->pc = 0x194efcu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x194f00: 0xc6040018
    ctx->pc = 0x194f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x194f04: 0x3c02bf00
    ctx->pc = 0x194f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48896 << 16));
    // 0x194f08: 0x44821000
    ctx->pc = 0x194f08u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x194f0c: 0x3c01002a
    ctx->pc = 0x194f0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194f10: 0x3c024f00
    ctx->pc = 0x194f10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x194f14: 0xc425fd54
    ctx->pc = 0x194f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x194f18: 0x460320c1
    ctx->pc = 0x194f18u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x194f1c: 0x46031082
    ctx->pc = 0x194f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x194f20: 0x3c01002a
    ctx->pc = 0x194f20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x194f24: 0xc421f9f4
    ctx->pc = 0x194f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194f28: 0x44820000
    ctx->pc = 0x194f28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x194f2c: 0x0
    ctx->pc = 0x194f2cu;
    // NOP
    // 0x194f30: 0x46011042
    ctx->pc = 0x194f30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194f34: 0x468030a0
    ctx->pc = 0x194f34u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[6]);
    // 0x194f38: 0x46071080
    ctx->pc = 0x194f38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x194f3c: 0x460010a4
    ctx->pc = 0x194f3cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x194f40: 0x44021000
    ctx->pc = 0x194f40u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x194f44: 0x46010036
    ctx->pc = 0x194f44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194f48: 0x21100
    ctx->pc = 0x194f48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194f4c: 0x468028a0
    ctx->pc = 0x194f4cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[5]);
    // 0x194f50: 0x21c38
    ctx->pc = 0x194f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x194f54: 0x46081080
    ctx->pc = 0x194f54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x194f58: 0x460010a4
    ctx->pc = 0x194f58u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x194f5c: 0x44021000
    ctx->pc = 0x194f5cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x194f60: 0x0
    ctx->pc = 0x194f60u;
    // NOP
    // 0x194f64: 0x21100
    ctx->pc = 0x194f64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x194f68: 0x45010005
    ctx->pc = 0x194F68u;
    {
        const bool branch_taken_0x194f68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194F6Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x194f68) {
            ctx->pc = 0x194F80u;
            goto label_194f80;
        }
    }
    ctx->pc = 0x194F70u;
    // 0x194f70: 0x46000864
    ctx->pc = 0x194f70u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194f74: 0x44030800
    ctx->pc = 0x194f74u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194f78: 0x10000008
    ctx->pc = 0x194F78u;
    {
        const bool branch_taken_0x194f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194F7Cu;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        if (branch_taken_0x194f78) {
            ctx->pc = 0x194F9Cu;
            goto label_194f9c;
        }
    }
    ctx->pc = 0x194F80u;
label_194f80:
    // 0x194f80: 0x46000841
    ctx->pc = 0x194f80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194f84: 0x3c028000
    ctx->pc = 0x194f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x194f88: 0x46000864
    ctx->pc = 0x194f88u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x194f8c: 0x44030800
    ctx->pc = 0x194f8cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x194f90: 0x0
    ctx->pc = 0x194f90u;
    // NOP
    // 0x194f94: 0x621825
    ctx->pc = 0x194f94u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194f98: 0x3103c
    ctx->pc = 0x194f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_194f9c:
    // 0x194f9c: 0x3c017000
    ctx->pc = 0x194f9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)28672 << 16));
    // 0x194fa0: 0x2103e
    ctx->pc = 0x194fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x194fa4: 0x3c047000
    ctx->pc = 0x194fa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x194fa8: 0x2103c
    ctx->pc = 0x194fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194fac: 0x451025
    ctx->pc = 0x194facu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x194fb0: 0xc064f88
    ctx->pc = 0x194FB0u;
    SET_GPR_U32(ctx, 31, 0x194FB8u);
    ctx->pc = 0x194FB4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 72), GPR_U64(ctx, 2));
    ctx->pc = 0x193E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E20_0x193e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FB8u; }
    }
    if (ctx->pc != 0x194FB8u) { return; }
    ctx->pc = 0x194FB8u;
    // 0x194fb8: 0x24020001
    ctx->pc = 0x194fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_194fbc:
    // 0x194fbc: 0xdfbf0010
    ctx->pc = 0x194fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194fc0: 0x7bb00000
    ctx->pc = 0x194fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194fc4: 0x3e00008
    ctx->pc = 0x194FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194FC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193ED0u: goto label_193ed0;
            case 0x193F0Cu: goto label_193f0c;
            case 0x193F28u: goto label_193f28;
            case 0x193F3Cu: goto label_193f3c;
            case 0x193F50u: goto label_193f50;
            case 0x193F64u: goto label_193f64;
            case 0x193F78u: goto label_193f78;
            case 0x193F7Cu: goto label_193f7c;
            case 0x193FB8u: goto label_193fb8;
            case 0x194068u: goto label_194068;
            case 0x194078u: goto label_194078;
            case 0x1940D4u: goto label_1940d4;
            case 0x1940F0u: goto label_1940f0;
            case 0x19414Cu: goto label_19414c;
            case 0x19415Cu: goto label_19415c;
            case 0x1941B8u: goto label_1941b8;
            case 0x1941D4u: goto label_1941d4;
            case 0x1941F4u: goto label_1941f4;
            case 0x194238u: goto label_194238;
            case 0x194338u: goto label_194338;
            case 0x194354u: goto label_194354;
            case 0x194420u: goto label_194420;
            case 0x19443Cu: goto label_19443c;
            case 0x19445Cu: goto label_19445c;
            case 0x194498u: goto label_194498;
            case 0x194578u: goto label_194578;
            case 0x194594u: goto label_194594;
            case 0x194620u: goto label_194620;
            case 0x19463Cu: goto label_19463c;
            case 0x1946C8u: goto label_1946c8;
            case 0x1946E4u: goto label_1946e4;
            case 0x194704u: goto label_194704;
            case 0x19474Cu: goto label_19474c;
            case 0x19484Cu: goto label_19484c;
            case 0x194868u: goto label_194868;
            case 0x194924u: goto label_194924;
            case 0x194940u: goto label_194940;
            case 0x1949FCu: goto label_1949fc;
            case 0x194A18u: goto label_194a18;
            case 0x194A38u: goto label_194a38;
            case 0x194A7Cu: goto label_194a7c;
            case 0x194B6Cu: goto label_194b6c;
            case 0x194B88u: goto label_194b88;
            case 0x194C24u: goto label_194c24;
            case 0x194C40u: goto label_194c40;
            case 0x194C60u: goto label_194c60;
            case 0x194CA4u: goto label_194ca4;
            case 0x194D8Cu: goto label_194d8c;
            case 0x194DA0u: goto label_194da0;
            case 0x194E2Cu: goto label_194e2c;
            case 0x194E48u: goto label_194e48;
            case 0x194EDCu: goto label_194edc;
            case 0x194EF0u: goto label_194ef0;
            case 0x194F80u: goto label_194f80;
            case 0x194F9Cu: goto label_194f9c;
            case 0x194FBCu: goto label_194fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194FCCu;
    // 0x194fcc: 0x0
    ctx->pc = 0x194fccu;
    // NOP
}
