#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00376D50
// Address: 0x376d50 - 0x376ef0
void sub_00376D50_0x376d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x376d50u;

    // 0x376d50: 0x27bdfff0
    ctx->pc = 0x376d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x376d54: 0x80302d
    ctx->pc = 0x376d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d58: 0xffbf0000
    ctx->pc = 0x376d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376d5c: 0x24020001
    ctx->pc = 0x376d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d60: 0x8c850034
    ctx->pc = 0x376d60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x376d64: 0x90830002
    ctx->pc = 0x376d64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x376d68: 0x10620005
    ctx->pc = 0x376D68u;
    {
        const bool branch_taken_0x376d68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x376D6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 2080));
        if (branch_taken_0x376d68) {
            ctx->pc = 0x376D80u;
            goto label_376d80;
        }
    }
    ctx->pc = 0x376D70u;
    // 0x376d70: 0x10600003
    ctx->pc = 0x376D70u;
    {
        const bool branch_taken_0x376d70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x376d70) {
            ctx->pc = 0x376D80u;
            goto label_376d80;
        }
    }
    ctx->pc = 0x376D78u;
    // 0x376d78: 0x10000006
    ctx->pc = 0x376D78u;
    {
        const bool branch_taken_0x376d78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376D7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x376d78) {
            ctx->pc = 0x376D94u;
            goto label_376d94;
        }
    }
    ctx->pc = 0x376D80u;
label_376d80:
    // 0x376d80: 0x8c840000
    ctx->pc = 0x376d80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x376d84: 0xc064c90
    ctx->pc = 0x376D84u;
    SET_GPR_U32(ctx, 31, 0x376D8Cu);
    ctx->pc = 0x376D88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 80));
    ctx->pc = 0x193240u;
    {
        auto targetFn = runtime->lookupFunction(0x193240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D8Cu; }
        if (ctx->pc != 0x376D8Cu) { return; }
    }
    ctx->pc = 0x376D8Cu;
    // 0x376d8c: 0x10000004
    ctx->pc = 0x376D8Cu;
    {
        const bool branch_taken_0x376d8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376D90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x376d8c) {
            ctx->pc = 0x376DA0u;
            goto label_376da0;
        }
    }
    ctx->pc = 0x376D94u;
label_376d94:
    // 0x376d94: 0xc064c90
    ctx->pc = 0x376D94u;
    SET_GPR_U32(ctx, 31, 0x376D9Cu);
    ctx->pc = 0x376D98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 80));
    ctx->pc = 0x193240u;
    {
        auto targetFn = runtime->lookupFunction(0x193240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D9Cu; }
        if (ctx->pc != 0x376D9Cu) { return; }
    }
    ctx->pc = 0x376D9Cu;
    // 0x376d9c: 0xdfbf0000
    ctx->pc = 0x376d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_376da0:
    // 0x376da0: 0x3e00008
    ctx->pc = 0x376DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376DA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376D80u: goto label_376d80;
            case 0x376D94u: goto label_376d94;
            case 0x376DA0u: goto label_376da0;
            case 0x376E2Cu: goto label_376e2c;
            case 0x376E58u: goto label_376e58;
            case 0x376E5Cu: goto label_376e5c;
            case 0x376EC4u: goto label_376ec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x376DA8u;
    // 0x376da8: 0x0
    ctx->pc = 0x376da8u;
    // NOP
    // 0x376dac: 0x0
    ctx->pc = 0x376dacu;
    // NOP
    // 0x376db0: 0x80102d
    ctx->pc = 0x376db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376db4: 0x244401cc
    ctx->pc = 0x376db4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 460));
    // 0x376db8: 0x244501ac
    ctx->pc = 0x376db8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 428));
    // 0x376dbc: 0x8064674
    ctx->pc = 0x376DBCu;
    ctx->pc = 0x376DC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x376DC4u;
    // 0x376dc4: 0x0
    ctx->pc = 0x376dc4u;
    // NOP
    // 0x376dc8: 0x0
    ctx->pc = 0x376dc8u;
    // NOP
    // 0x376dcc: 0x0
    ctx->pc = 0x376dccu;
    // NOP
    // 0x376dd0: 0x84870000
    ctx->pc = 0x376dd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x376dd4: 0x5143c
    ctx->pc = 0x376dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x376dd8: 0x2143f
    ctx->pc = 0x376dd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x376ddc: 0x34018001
    ctx->pc = 0x376ddcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 0), 32769));
    // 0x376de0: 0x471023
    ctx->pc = 0x376de0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x376de4: 0x21c3c
    ctx->pc = 0x376de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x376de8: 0x31c3f
    ctx->pc = 0x376de8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x376dec: 0x3062ffff
    ctx->pc = 0x376decu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x376df0: 0x41082a
    ctx->pc = 0x376df0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 1)));
    // 0x376df4: 0x1420000d
    ctx->pc = 0x376DF4u;
    {
        const bool branch_taken_0x376df4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x376DF8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        if (branch_taken_0x376df4) {
            ctx->pc = 0x376E2Cu;
            goto label_376e2c;
        }
    }
    ctx->pc = 0x376DFCu;
    // 0x376dfc: 0xe61023
    ctx->pc = 0x376dfcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x376e00: 0x31c3c
    ctx->pc = 0x376e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x376e04: 0xa4820000
    ctx->pc = 0x376e04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x376e08: 0x31c3f
    ctx->pc = 0x376e08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x376e0c: 0x6143c
    ctx->pc = 0x376e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x376e10: 0x2143f
    ctx->pc = 0x376e10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x376e14: 0x621021
    ctx->pc = 0x376e14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x376e18: 0x4400010
    ctx->pc = 0x376E18u;
    {
        const bool branch_taken_0x376e18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x376E1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x376e18) {
            ctx->pc = 0x376E5Cu;
            goto label_376e5c;
        }
    }
    ctx->pc = 0x376E20u;
    // 0x376e20: 0xa4850000
    ctx->pc = 0x376e20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x376e24: 0x1000000d
    ctx->pc = 0x376E24u;
    {
        const bool branch_taken_0x376e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376E28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x376e24) {
            ctx->pc = 0x376E5Cu;
            goto label_376e5c;
        }
    }
    ctx->pc = 0x376E2Cu;
label_376e2c:
    // 0x376e2c: 0x31c3c
    ctx->pc = 0x376e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x376e30: 0xa4820000
    ctx->pc = 0x376e30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x376e34: 0x31c3f
    ctx->pc = 0x376e34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x376e38: 0x6143c
    ctx->pc = 0x376e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x376e3c: 0x2143f
    ctx->pc = 0x376e3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x376e40: 0x621023
    ctx->pc = 0x376e40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x376e44: 0x1c400004
    ctx->pc = 0x376E44u;
    {
        const bool branch_taken_0x376e44 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x376e44) {
            ctx->pc = 0x376E58u;
            goto label_376e58;
        }
    }
    ctx->pc = 0x376E4Cu;
    // 0x376e4c: 0xa4850000
    ctx->pc = 0x376e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x376e50: 0x10000002
    ctx->pc = 0x376E50u;
    {
        const bool branch_taken_0x376e50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376E54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x376e50) {
            ctx->pc = 0x376E5Cu;
            goto label_376e5c;
        }
    }
    ctx->pc = 0x376E58u;
label_376e58:
    // 0x376e58: 0x102d
    ctx->pc = 0x376e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376e5c:
    // 0x376e5c: 0x3e00008
    ctx->pc = 0x376E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376D80u: goto label_376d80;
            case 0x376D94u: goto label_376d94;
            case 0x376DA0u: goto label_376da0;
            case 0x376E2Cu: goto label_376e2c;
            case 0x376E58u: goto label_376e58;
            case 0x376E5Cu: goto label_376e5c;
            case 0x376EC4u: goto label_376ec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x376E64u;
    // 0x376e64: 0x0
    ctx->pc = 0x376e64u;
    // NOP
    // 0x376e68: 0x0
    ctx->pc = 0x376e68u;
    // NOP
    // 0x376e6c: 0x0
    ctx->pc = 0x376e6cu;
    // NOP
    // 0x376e70: 0x27bdffe0
    ctx->pc = 0x376e70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376e74: 0xffbf0000
    ctx->pc = 0x376e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376e78: 0x44800800
    ctx->pc = 0x376e78u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x376e7c: 0xc4a20000
    ctx->pc = 0x376e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376e80: 0xc4800000
    ctx->pc = 0x376e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376e84: 0x46001001
    ctx->pc = 0x376e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x376e88: 0xe7a00010
    ctx->pc = 0x376e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x376e8c: 0xc4a30004
    ctx->pc = 0x376e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376e90: 0xc4820004
    ctx->pc = 0x376e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376e94: 0xc7a00010
    ctx->pc = 0x376e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376e98: 0x46021881
    ctx->pc = 0x376e98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x376e9c: 0x46000832
    ctx->pc = 0x376e9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376ea0: 0xe7a20014
    ctx->pc = 0x376ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x376ea4: 0xc4a10008
    ctx->pc = 0x376ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376ea8: 0xc4800008
    ctx->pc = 0x376ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376eac: 0x46000801
    ctx->pc = 0x376eacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376eb0: 0x45000004
    ctx->pc = 0x376EB0u;
    {
        const bool branch_taken_0x376eb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x376EB4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x376eb0) {
            ctx->pc = 0x376EC4u;
            goto label_376ec4;
        }
    }
    ctx->pc = 0x376EB8u;
    // 0x376eb8: 0x3c010039
    ctx->pc = 0x376eb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x376ebc: 0xc420ca98
    ctx->pc = 0x376ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376ec0: 0xe7a00010
    ctx->pc = 0x376ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_376ec4:
    // 0x376ec4: 0xc7ad0018
    ctx->pc = 0x376ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x376ec8: 0xc064860
    ctx->pc = 0x376EC8u;
    SET_GPR_U32(ctx, 31, 0x376ED0u);
    ctx->pc = 0x376ECCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x192180u;
    {
        auto targetFn = runtime->lookupFunction(0x192180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376ED0u; }
        if (ctx->pc != 0x376ED0u) { return; }
    }
    ctx->pc = 0x376ED0u;
    // 0x376ed0: 0xc0647bc
    ctx->pc = 0x376ED0u;
    SET_GPR_U32(ctx, 31, 0x376ED8u);
    ctx->pc = 0x376ED4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191EF0u;
    {
        auto targetFn = runtime->lookupFunction(0x191EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376ED8u; }
        if (ctx->pc != 0x376ED8u) { return; }
    }
    ctx->pc = 0x376ED8u;
    // 0x376ed8: 0xdfbf0000
    ctx->pc = 0x376ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376edc: 0x2143c
    ctx->pc = 0x376edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x376ee0: 0x2143f
    ctx->pc = 0x376ee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x376ee4: 0x3e00008
    ctx->pc = 0x376EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376EE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376D80u: goto label_376d80;
            case 0x376D94u: goto label_376d94;
            case 0x376DA0u: goto label_376da0;
            case 0x376E2Cu: goto label_376e2c;
            case 0x376E58u: goto label_376e58;
            case 0x376E5Cu: goto label_376e5c;
            case 0x376EC4u: goto label_376ec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x376EECu;
    // 0x376eec: 0x0
    ctx->pc = 0x376eecu;
    // NOP
}
