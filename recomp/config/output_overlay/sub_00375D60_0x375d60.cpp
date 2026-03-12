#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00375D60
// Address: 0x375d60 - 0x376d50
void sub_00375D60_0x375d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x375d60u;

label_375d60:
    // 0x375d60: 0x27bdffc0
    ctx->pc = 0x375d60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x375d64: 0xffbf0020
    ctx->pc = 0x375d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x375d68: 0x7fb10010
    ctx->pc = 0x375d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x375d6c: 0x7fb00000
    ctx->pc = 0x375d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375d70: 0x80882d
    ctx->pc = 0x375d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d74: 0x90820000
    ctx->pc = 0x375d74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x375d78: 0xa0802d
    ctx->pc = 0x375d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d7c: 0x30420020
    ctx->pc = 0x375d7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x375d80: 0x4410003
    ctx->pc = 0x375D80u;
    {
        const bool branch_taken_0x375d80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x375D84u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        if (branch_taken_0x375d80) {
            ctx->pc = 0x375D90u;
            goto label_375d90;
        }
    }
    ctx->pc = 0x375D88u;
    // 0x375d88: 0x2442001f
    ctx->pc = 0x375d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x375d8c: 0x22143
    ctx->pc = 0x375d8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_375d90:
    // 0x375d90: 0xc06bc8c
    ctx->pc = 0x375D90u;
    SET_GPR_U32(ctx, 31, 0x375D98u);
    ctx->pc = 0x1AF230u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D98u; }
        if (ctx->pc != 0x375D98u) { return; }
    }
    ctx->pc = 0x375D98u;
    // 0x375d98: 0x92220001
    ctx->pc = 0x375d98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x375d9c: 0x10400006
    ctx->pc = 0x375D9Cu;
    {
        const bool branch_taken_0x375d9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x375DA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x375d9c) {
            ctx->pc = 0x375DB8u;
            goto label_375db8;
        }
    }
    ctx->pc = 0x375DA4u;
    // 0x375da4: 0x24040004
    ctx->pc = 0x375da4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x375da8: 0xc06bc78
    ctx->pc = 0x375DA8u;
    SET_GPR_U32(ctx, 31, 0x375DB0u);
    ctx->pc = 0x375DACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF1E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DB0u; }
        if (ctx->pc != 0x375DB0u) { return; }
    }
    ctx->pc = 0x375DB0u;
    // 0x375db0: 0x10000004
    ctx->pc = 0x375DB0u;
    {
        const bool branch_taken_0x375db0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375DB4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x375db0) {
            ctx->pc = 0x375DC4u;
            goto label_375dc4;
        }
    }
    ctx->pc = 0x375DB8u;
label_375db8:
    // 0x375db8: 0xc06bc78
    ctx->pc = 0x375DB8u;
    SET_GPR_U32(ctx, 31, 0x375DC0u);
    ctx->pc = 0x375DBCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DC0u; }
        if (ctx->pc != 0x375DC0u) { return; }
    }
    ctx->pc = 0x375DC0u;
    // 0x375dc0: 0x92240000
    ctx->pc = 0x375dc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_375dc4:
    // 0x375dc4: 0x30830004
    ctx->pc = 0x375dc4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 4));
    // 0x375dc8: 0x10600007
    ctx->pc = 0x375DC8u;
    {
        const bool branch_taken_0x375dc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x375dc8) {
            ctx->pc = 0x375DE8u;
            goto label_375de8;
        }
    }
    ctx->pc = 0x375DD0u;
    // 0x375dd0: 0xc0dc680
    ctx->pc = 0x375DD0u;
    SET_GPR_U32(ctx, 31, 0x375DD8u);
    ctx->pc = 0x375DD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x371A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371A00_0x371a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DD8u; }
    }
    if (ctx->pc != 0x375DD8u) { return; }
    ctx->pc = 0x375DD8u;
    // 0x375dd8: 0xc06564c
    ctx->pc = 0x375DD8u;
    SET_GPR_U32(ctx, 31, 0x375DE0u);
    ctx->pc = 0x375DDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x195930u;
    {
        auto targetFn = runtime->lookupFunction(0x195930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DE0u; }
        if (ctx->pc != 0x375DE0u) { return; }
    }
    ctx->pc = 0x375DE0u;
    // 0x375de0: 0x1000003b
    ctx->pc = 0x375DE0u;
    {
        const bool branch_taken_0x375de0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375DE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x375de0) {
            ctx->pc = 0x375ED0u;
            goto label_375ed0;
        }
    }
    ctx->pc = 0x375DE8u;
label_375de8:
    // 0x375de8: 0x30840003
    ctx->pc = 0x375de8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 3));
    // 0x375dec: 0x24030003
    ctx->pc = 0x375decu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x375df0: 0x10830021
    ctx->pc = 0x375DF0u;
    {
        const bool branch_taken_0x375df0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x375DF4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x375df0) {
            ctx->pc = 0x375E78u;
            goto label_375e78;
        }
    }
    ctx->pc = 0x375DF8u;
    // 0x375df8: 0x10830010
    ctx->pc = 0x375DF8u;
    {
        const bool branch_taken_0x375df8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x375df8) {
            ctx->pc = 0x375E3Cu;
            goto label_375e3c;
        }
    }
    ctx->pc = 0x375E00u;
    // 0x375e00: 0x24030001
    ctx->pc = 0x375e00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x375e04: 0x10830009
    ctx->pc = 0x375E04u;
    {
        const bool branch_taken_0x375e04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x375e04) {
            ctx->pc = 0x375E2Cu;
            goto label_375e2c;
        }
    }
    ctx->pc = 0x375E0Cu;
    // 0x375e0c: 0x10800003
    ctx->pc = 0x375E0Cu;
    {
        const bool branch_taken_0x375e0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x375e0c) {
            ctx->pc = 0x375E1Cu;
            goto label_375e1c;
        }
    }
    ctx->pc = 0x375E14u;
    // 0x375e14: 0x1000002d
    ctx->pc = 0x375E14u;
    {
        const bool branch_taken_0x375e14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x375e14) {
            ctx->pc = 0x375ECCu;
            goto label_375ecc;
        }
    }
    ctx->pc = 0x375E1Cu;
label_375e1c:
    // 0x375e1c: 0xc065294
    ctx->pc = 0x375E1Cu;
    SET_GPR_U32(ctx, 31, 0x375E24u);
    ctx->pc = 0x375E20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x194A50u;
    {
        auto targetFn = runtime->lookupFunction(0x194A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E24u; }
        if (ctx->pc != 0x375E24u) { return; }
    }
    ctx->pc = 0x375E24u;
    // 0x375e24: 0x10000029
    ctx->pc = 0x375E24u;
    {
        const bool branch_taken_0x375e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x375e24) {
            ctx->pc = 0x375ECCu;
            goto label_375ecc;
        }
    }
    ctx->pc = 0x375E2Cu;
label_375e2c:
    // 0x375e2c: 0xc0654cc
    ctx->pc = 0x375E2Cu;
    SET_GPR_U32(ctx, 31, 0x375E34u);
    ctx->pc = 0x375E30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x195330u;
    {
        auto targetFn = runtime->lookupFunction(0x195330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E34u; }
        if (ctx->pc != 0x375E34u) { return; }
    }
    ctx->pc = 0x375E34u;
    // 0x375e34: 0x10000025
    ctx->pc = 0x375E34u;
    {
        const bool branch_taken_0x375e34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x375e34) {
            ctx->pc = 0x375ECCu;
            goto label_375ecc;
        }
    }
    ctx->pc = 0x375E3Cu;
label_375e3c:
    // 0x375e3c: 0xc073494
    ctx->pc = 0x375E3Cu;
    SET_GPR_U32(ctx, 31, 0x375E44u);
    ctx->pc = 0x375E40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD250u;
    {
        auto targetFn = runtime->lookupFunction(0x1CD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E44u; }
        if (ctx->pc != 0x375E44u) { return; }
    }
    ctx->pc = 0x375E44u;
    // 0x375e44: 0xafa2003c
    ctx->pc = 0x375e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x375e48: 0x8fa3003c
    ctx->pc = 0x375e48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x375e4c: 0x1060001f
    ctx->pc = 0x375E4Cu;
    {
        const bool branch_taken_0x375e4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x375E50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x375e4c) {
            ctx->pc = 0x375ECCu;
            goto label_375ecc;
        }
    }
    ctx->pc = 0x375E54u;
    // 0x375e54: 0xc0675c8
    ctx->pc = 0x375E54u;
    SET_GPR_U32(ctx, 31, 0x375E5Cu);
    ctx->pc = 0x375E58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 60));
    ctx->pc = 0x19D720u;
    {
        auto targetFn = runtime->lookupFunction(0x19D720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E5Cu; }
        if (ctx->pc != 0x375E5Cu) { return; }
    }
    ctx->pc = 0x375E5Cu;
    // 0x375e5c: 0x8fa5003c
    ctx->pc = 0x375e5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x375e60: 0xc06bde0
    ctx->pc = 0x375E60u;
    SET_GPR_U32(ctx, 31, 0x375E68u);
    ctx->pc = 0x375E64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E68u; }
        if (ctx->pc != 0x375E68u) { return; }
    }
    ctx->pc = 0x375E68u;
    // 0x375e68: 0xc065320
    ctx->pc = 0x375E68u;
    SET_GPR_U32(ctx, 31, 0x375E70u);
    ctx->pc = 0x375E6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x194C80u;
    {
        auto targetFn = runtime->lookupFunction(0x194C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E70u; }
        if (ctx->pc != 0x375E70u) { return; }
    }
    ctx->pc = 0x375E70u;
    // 0x375e70: 0x10000016
    ctx->pc = 0x375E70u;
    {
        const bool branch_taken_0x375e70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x375e70) {
            ctx->pc = 0x375ECCu;
            goto label_375ecc;
        }
    }
    ctx->pc = 0x375E78u;
label_375e78:
    // 0x375e78: 0xc073494
    ctx->pc = 0x375E78u;
    SET_GPR_U32(ctx, 31, 0x375E80u);
    ctx->pc = 0x375E7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CD250u;
    {
        auto targetFn = runtime->lookupFunction(0x1CD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E80u; }
        if (ctx->pc != 0x375E80u) { return; }
    }
    ctx->pc = 0x375E80u;
    // 0x375e80: 0xafa2003c
    ctx->pc = 0x375e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x375e84: 0x8fa3003c
    ctx->pc = 0x375e84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x375e88: 0x10600010
    ctx->pc = 0x375E88u;
    {
        const bool branch_taken_0x375e88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x375E8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x375e88) {
            ctx->pc = 0x375ECCu;
            goto label_375ecc;
        }
    }
    ctx->pc = 0x375E90u;
    // 0x375e90: 0xc0675c8
    ctx->pc = 0x375E90u;
    SET_GPR_U32(ctx, 31, 0x375E98u);
    ctx->pc = 0x375E94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 60));
    ctx->pc = 0x19D720u;
    {
        auto targetFn = runtime->lookupFunction(0x19D720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E98u; }
        if (ctx->pc != 0x375E98u) { return; }
    }
    ctx->pc = 0x375E98u;
    // 0x375e98: 0x8fa5003c
    ctx->pc = 0x375e98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x375e9c: 0xc06bde0
    ctx->pc = 0x375E9Cu;
    SET_GPR_U32(ctx, 31, 0x375EA4u);
    ctx->pc = 0x375EA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EA4u; }
        if (ctx->pc != 0x375EA4u) { return; }
    }
    ctx->pc = 0x375EA4u;
    // 0x375ea4: 0x92220000
    ctx->pc = 0x375ea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x375ea8: 0x30420010
    ctx->pc = 0x375ea8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x375eac: 0x10400005
    ctx->pc = 0x375EACu;
    {
        const bool branch_taken_0x375eac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x375EB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x375eac) {
            ctx->pc = 0x375EC4u;
            goto label_375ec4;
        }
    }
    ctx->pc = 0x375EB4u;
    // 0x375eb4: 0xc06564c
    ctx->pc = 0x375EB4u;
    SET_GPR_U32(ctx, 31, 0x375EBCu);
    ctx->pc = 0x375EB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x195930u;
    {
        auto targetFn = runtime->lookupFunction(0x195930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EBCu; }
        if (ctx->pc != 0x375EBCu) { return; }
    }
    ctx->pc = 0x375EBCu;
    // 0x375ebc: 0x10000003
    ctx->pc = 0x375EBCu;
    {
        const bool branch_taken_0x375ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x375ebc) {
            ctx->pc = 0x375ECCu;
            goto label_375ecc;
        }
    }
    ctx->pc = 0x375EC4u;
label_375ec4:
    // 0x375ec4: 0xc065580
    ctx->pc = 0x375EC4u;
    SET_GPR_U32(ctx, 31, 0x375ECCu);
    ctx->pc = 0x195600u;
    {
        auto targetFn = runtime->lookupFunction(0x195600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375ECCu; }
        if (ctx->pc != 0x375ECCu) { return; }
    }
    ctx->pc = 0x375ECCu;
label_375ecc:
    // 0x375ecc: 0xdfbf0020
    ctx->pc = 0x375eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_375ed0:
    // 0x375ed0: 0x7bb10010
    ctx->pc = 0x375ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375ed4: 0x7bb00000
    ctx->pc = 0x375ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375ed8: 0x3e00008
    ctx->pc = 0x375ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375EDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375D60u: goto label_375d60;
            case 0x375D90u: goto label_375d90;
            case 0x375DB8u: goto label_375db8;
            case 0x375DC4u: goto label_375dc4;
            case 0x375DE8u: goto label_375de8;
            case 0x375E1Cu: goto label_375e1c;
            case 0x375E2Cu: goto label_375e2c;
            case 0x375E3Cu: goto label_375e3c;
            case 0x375E78u: goto label_375e78;
            case 0x375EC4u: goto label_375ec4;
            case 0x375ECCu: goto label_375ecc;
            case 0x375ED0u: goto label_375ed0;
            case 0x375F30u: goto label_375f30;
            case 0x375F64u: goto label_375f64;
            case 0x375F9Cu: goto label_375f9c;
            case 0x375FB4u: goto label_375fb4;
            case 0x375FE0u: goto label_375fe0;
            case 0x376004u: goto label_376004;
            case 0x376020u: goto label_376020;
            case 0x376024u: goto label_376024;
            case 0x3760BCu: goto label_3760bc;
            case 0x3760C0u: goto label_3760c0;
            case 0x3760E0u: goto label_3760e0;
            case 0x3760E8u: goto label_3760e8;
            case 0x376100u: goto label_376100;
            case 0x37610Cu: goto label_37610c;
            case 0x376144u: goto label_376144;
            case 0x376148u: goto label_376148;
            case 0x376170u: goto label_376170;
            case 0x376194u: goto label_376194;
            case 0x3761C4u: goto label_3761c4;
            case 0x3761F0u: goto label_3761f0;
            case 0x37620Cu: goto label_37620c;
            case 0x376210u: goto label_376210;
            case 0x376244u: goto label_376244;
            case 0x376248u: goto label_376248;
            case 0x376284u: goto label_376284;
            case 0x3762B0u: goto label_3762b0;
            case 0x3762F8u: goto label_3762f8;
            case 0x37632Cu: goto label_37632c;
            case 0x37635Cu: goto label_37635c;
            case 0x376360u: goto label_376360;
            case 0x376388u: goto label_376388;
            case 0x37639Cu: goto label_37639c;
            case 0x3763B0u: goto label_3763b0;
            case 0x3763B4u: goto label_3763b4;
            case 0x3763E8u: goto label_3763e8;
            case 0x376404u: goto label_376404;
            case 0x37643Cu: goto label_37643c;
            case 0x376458u: goto label_376458;
            case 0x37648Cu: goto label_37648c;
            case 0x3764A8u: goto label_3764a8;
            case 0x3764E0u: goto label_3764e0;
            case 0x3764FCu: goto label_3764fc;
            case 0x376534u: goto label_376534;
            case 0x376590u: goto label_376590;
            case 0x3765D0u: goto label_3765d0;
            case 0x376644u: goto label_376644;
            case 0x37664Cu: goto label_37664c;
            case 0x376664u: goto label_376664;
            case 0x37666Cu: goto label_37666c;
            case 0x376680u: goto label_376680;
            case 0x376698u: goto label_376698;
            case 0x3766A0u: goto label_3766a0;
            case 0x3766B8u: goto label_3766b8;
            case 0x3766C0u: goto label_3766c0;
            case 0x3766E4u: goto label_3766e4;
            case 0x376714u: goto label_376714;
            case 0x37672Cu: goto label_37672c;
            case 0x376904u: goto label_376904;
            case 0x376950u: goto label_376950;
            case 0x376954u: goto label_376954;
            case 0x376970u: goto label_376970;
            case 0x37698Cu: goto label_37698c;
            case 0x376990u: goto label_376990;
            case 0x376A08u: goto label_376a08;
            case 0x376A8Cu: goto label_376a8c;
            case 0x376A98u: goto label_376a98;
            case 0x376AB4u: goto label_376ab4;
            case 0x376AF8u: goto label_376af8;
            case 0x376B58u: goto label_376b58;
            case 0x376B5Cu: goto label_376b5c;
            case 0x376B9Cu: goto label_376b9c;
            case 0x376C2Cu: goto label_376c2c;
            case 0x376C54u: goto label_376c54;
            case 0x376C64u: goto label_376c64;
            case 0x376C78u: goto label_376c78;
            case 0x376CB0u: goto label_376cb0;
            case 0x376CB8u: goto label_376cb8;
            case 0x376CCCu: goto label_376ccc;
            case 0x376D34u: goto label_376d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x375EE0u;
    // 0x375ee0: 0x27bdffc0
    ctx->pc = 0x375ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x375ee4: 0xffbf0010
    ctx->pc = 0x375ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375ee8: 0x7fb00000
    ctx->pc = 0x375ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375eec: 0x8c850200
    ctx->pc = 0x375eecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x375ef0: 0x30a38000
    ctx->pc = 0x375ef0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 32768));
    // 0x375ef4: 0x1460004a
    ctx->pc = 0x375EF4u;
    {
        const bool branch_taken_0x375ef4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x375EF8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x375ef4) {
            ctx->pc = 0x376020u;
            goto label_376020;
        }
    }
    ctx->pc = 0x375EFCu;
    // 0x375efc: 0x30a40003
    ctx->pc = 0x375efcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 3));
    // 0x375f00: 0x24030003
    ctx->pc = 0x375f00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x375f04: 0x10830017
    ctx->pc = 0x375F04u;
    {
        const bool branch_taken_0x375f04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x375F08u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x375f04) {
            ctx->pc = 0x375F64u;
            goto label_375f64;
        }
    }
    ctx->pc = 0x375F0Cu;
    // 0x375f0c: 0x10830015
    ctx->pc = 0x375F0Cu;
    {
        const bool branch_taken_0x375f0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x375f0c) {
            ctx->pc = 0x375F64u;
            goto label_375f64;
        }
    }
    ctx->pc = 0x375F14u;
    // 0x375f14: 0x24030002
    ctx->pc = 0x375f14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x375f18: 0x10830005
    ctx->pc = 0x375F18u;
    {
        const bool branch_taken_0x375f18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x375f18) {
            ctx->pc = 0x375F30u;
            goto label_375f30;
        }
    }
    ctx->pc = 0x375F20u;
    // 0x375f20: 0x10800003
    ctx->pc = 0x375F20u;
    {
        const bool branch_taken_0x375f20 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x375f20) {
            ctx->pc = 0x375F30u;
            goto label_375f30;
        }
    }
    ctx->pc = 0x375F28u;
    // 0x375f28: 0x1000003e
    ctx->pc = 0x375F28u;
    {
        const bool branch_taken_0x375f28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375F2Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x375f28) {
            ctx->pc = 0x376024u;
            goto label_376024;
        }
    }
    ctx->pc = 0x375F30u;
label_375f30:
    // 0x375f30: 0xc6000038
    ctx->pc = 0x375f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375f34: 0x3c040037
    ctx->pc = 0x375f34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x375f38: 0x24846030
    ctx->pc = 0x375f38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24624));
    // 0x375f3c: 0xe60001e4
    ctx->pc = 0x375f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
    // 0x375f40: 0xc600003c
    ctx->pc = 0x375f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375f44: 0xe60001e8
    ctx->pc = 0x375f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 488), bits); }
    // 0x375f48: 0xc6000040
    ctx->pc = 0x375f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375f4c: 0xe60001ec
    ctx->pc = 0x375f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 492), bits); }
    // 0x375f50: 0xc60c0040
    ctx->pc = 0x375f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375f54: 0xc06c988
    ctx->pc = 0x375F54u;
    SET_GPR_U32(ctx, 31, 0x375F5Cu);
    ctx->pc = 0x375F58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B2620u;
    {
        auto targetFn = runtime->lookupFunction(0x1B2620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375F5Cu; }
        if (ctx->pc != 0x375F5Cu) { return; }
    }
    ctx->pc = 0x375F5Cu;
    // 0x375f5c: 0x10000030
    ctx->pc = 0x375F5Cu;
    {
        const bool branch_taken_0x375f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x375f5c) {
            ctx->pc = 0x376020u;
            goto label_376020;
        }
    }
    ctx->pc = 0x375F64u;
label_375f64:
    // 0x375f64: 0x30a20800
    ctx->pc = 0x375f64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 2048));
    // 0x375f68: 0x1040001d
    ctx->pc = 0x375F68u;
    {
        const bool branch_taken_0x375f68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x375f68) {
            ctx->pc = 0x375FE0u;
            goto label_375fe0;
        }
    }
    ctx->pc = 0x375F70u;
    // 0x375f70: 0x3c050032
    ctx->pc = 0x375f70u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x375f74: 0x27a40030
    ctx->pc = 0x375f74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x375f78: 0x24a54138
    ctx->pc = 0x375f78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x375f7c: 0xc0dc108
    ctx->pc = 0x375F7Cu;
    SET_GPR_U32(ctx, 31, 0x375F84u);
    ctx->pc = 0x375F80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 56));
    ctx->pc = 0x370420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370420_0x370420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375F84u; }
    }
    if (ctx->pc != 0x375F84u) { return; }
    ctx->pc = 0x375F84u;
    // 0x375f84: 0x8e020234
    ctx->pc = 0x375f84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x375f88: 0x4400004
    ctx->pc = 0x375F88u;
    {
        const bool branch_taken_0x375f88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x375F8Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x375f88) {
            ctx->pc = 0x375F9Cu;
            goto label_375f9c;
        }
    }
    ctx->pc = 0x375F90u;
    // 0x375f90: 0x44820000
    ctx->pc = 0x375f90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x375f94: 0x10000007
    ctx->pc = 0x375F94u;
    {
        const bool branch_taken_0x375f94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375F98u;
        ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x375f94) {
            ctx->pc = 0x375FB4u;
            goto label_375fb4;
        }
    }
    ctx->pc = 0x375F9Cu;
label_375f9c:
    // 0x375f9c: 0x30420001
    ctx->pc = 0x375f9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x375fa0: 0x621825
    ctx->pc = 0x375fa0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x375fa4: 0x44830000
    ctx->pc = 0x375fa4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x375fa8: 0x0
    ctx->pc = 0x375fa8u;
    // NOP
    // 0x375fac: 0x46800320
    ctx->pc = 0x375facu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x375fb0: 0x460c6300
    ctx->pc = 0x375fb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_375fb4:
    // 0x375fb4: 0x27a40030
    ctx->pc = 0x375fb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x375fb8: 0x26050038
    ctx->pc = 0x375fb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 56));
    // 0x375fbc: 0xc0dc3f8
    ctx->pc = 0x375FBCu;
    SET_GPR_U32(ctx, 31, 0x375FC4u);
    ctx->pc = 0x375FC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 484));
    ctx->pc = 0x370FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FE0_0x370fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375FC4u; }
    }
    if (ctx->pc != 0x375FC4u) { return; }
    ctx->pc = 0x375FC4u;
    // 0x375fc4: 0xc60001e4
    ctx->pc = 0x375fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375fc8: 0xe7a00020
    ctx->pc = 0x375fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x375fcc: 0xc60001e8
    ctx->pc = 0x375fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375fd0: 0xe7a00024
    ctx->pc = 0x375fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x375fd4: 0xc60001ec
    ctx->pc = 0x375fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375fd8: 0x1000000a
    ctx->pc = 0x375FD8u;
    {
        const bool branch_taken_0x375fd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375FDCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        if (branch_taken_0x375fd8) {
            ctx->pc = 0x376004u;
            goto label_376004;
        }
    }
    ctx->pc = 0x375FE0u;
label_375fe0:
    // 0x375fe0: 0xc6000038
    ctx->pc = 0x375fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375fe4: 0xe60001e4
    ctx->pc = 0x375fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
    // 0x375fe8: 0xe7a00020
    ctx->pc = 0x375fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x375fec: 0xc600003c
    ctx->pc = 0x375fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375ff0: 0xe60001e8
    ctx->pc = 0x375ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 488), bits); }
    // 0x375ff4: 0xe7a00024
    ctx->pc = 0x375ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x375ff8: 0xc6000040
    ctx->pc = 0x375ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375ffc: 0xe60001ec
    ctx->pc = 0x375ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 492), bits); }
    // 0x376000: 0xe7a00028
    ctx->pc = 0x376000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_376004:
    // 0x376004: 0x3c023f80
    ctx->pc = 0x376004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x376008: 0x3c040037
    ctx->pc = 0x376008u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x37600c: 0x200282d
    ctx->pc = 0x37600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376010: 0xafa2002c
    ctx->pc = 0x376010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x376014: 0x24846030
    ctx->pc = 0x376014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24624));
    // 0x376018: 0xc06c8f8
    ctx->pc = 0x376018u;
    SET_GPR_U32(ctx, 31, 0x376020u);
    ctx->pc = 0x37601Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1B23E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376020u; }
        if (ctx->pc != 0x376020u) { return; }
    }
    ctx->pc = 0x376020u;
label_376020:
    // 0x376020: 0xdfbf0010
    ctx->pc = 0x376020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_376024:
    // 0x376024: 0x7bb00000
    ctx->pc = 0x376024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376028: 0x3e00008
    ctx->pc = 0x376028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37602Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375D60u: goto label_375d60;
            case 0x375D90u: goto label_375d90;
            case 0x375DB8u: goto label_375db8;
            case 0x375DC4u: goto label_375dc4;
            case 0x375DE8u: goto label_375de8;
            case 0x375E1Cu: goto label_375e1c;
            case 0x375E2Cu: goto label_375e2c;
            case 0x375E3Cu: goto label_375e3c;
            case 0x375E78u: goto label_375e78;
            case 0x375EC4u: goto label_375ec4;
            case 0x375ECCu: goto label_375ecc;
            case 0x375ED0u: goto label_375ed0;
            case 0x375F30u: goto label_375f30;
            case 0x375F64u: goto label_375f64;
            case 0x375F9Cu: goto label_375f9c;
            case 0x375FB4u: goto label_375fb4;
            case 0x375FE0u: goto label_375fe0;
            case 0x376004u: goto label_376004;
            case 0x376020u: goto label_376020;
            case 0x376024u: goto label_376024;
            case 0x3760BCu: goto label_3760bc;
            case 0x3760C0u: goto label_3760c0;
            case 0x3760E0u: goto label_3760e0;
            case 0x3760E8u: goto label_3760e8;
            case 0x376100u: goto label_376100;
            case 0x37610Cu: goto label_37610c;
            case 0x376144u: goto label_376144;
            case 0x376148u: goto label_376148;
            case 0x376170u: goto label_376170;
            case 0x376194u: goto label_376194;
            case 0x3761C4u: goto label_3761c4;
            case 0x3761F0u: goto label_3761f0;
            case 0x37620Cu: goto label_37620c;
            case 0x376210u: goto label_376210;
            case 0x376244u: goto label_376244;
            case 0x376248u: goto label_376248;
            case 0x376284u: goto label_376284;
            case 0x3762B0u: goto label_3762b0;
            case 0x3762F8u: goto label_3762f8;
            case 0x37632Cu: goto label_37632c;
            case 0x37635Cu: goto label_37635c;
            case 0x376360u: goto label_376360;
            case 0x376388u: goto label_376388;
            case 0x37639Cu: goto label_37639c;
            case 0x3763B0u: goto label_3763b0;
            case 0x3763B4u: goto label_3763b4;
            case 0x3763E8u: goto label_3763e8;
            case 0x376404u: goto label_376404;
            case 0x37643Cu: goto label_37643c;
            case 0x376458u: goto label_376458;
            case 0x37648Cu: goto label_37648c;
            case 0x3764A8u: goto label_3764a8;
            case 0x3764E0u: goto label_3764e0;
            case 0x3764FCu: goto label_3764fc;
            case 0x376534u: goto label_376534;
            case 0x376590u: goto label_376590;
            case 0x3765D0u: goto label_3765d0;
            case 0x376644u: goto label_376644;
            case 0x37664Cu: goto label_37664c;
            case 0x376664u: goto label_376664;
            case 0x37666Cu: goto label_37666c;
            case 0x376680u: goto label_376680;
            case 0x376698u: goto label_376698;
            case 0x3766A0u: goto label_3766a0;
            case 0x3766B8u: goto label_3766b8;
            case 0x3766C0u: goto label_3766c0;
            case 0x3766E4u: goto label_3766e4;
            case 0x376714u: goto label_376714;
            case 0x37672Cu: goto label_37672c;
            case 0x376904u: goto label_376904;
            case 0x376950u: goto label_376950;
            case 0x376954u: goto label_376954;
            case 0x376970u: goto label_376970;
            case 0x37698Cu: goto label_37698c;
            case 0x376990u: goto label_376990;
            case 0x376A08u: goto label_376a08;
            case 0x376A8Cu: goto label_376a8c;
            case 0x376A98u: goto label_376a98;
            case 0x376AB4u: goto label_376ab4;
            case 0x376AF8u: goto label_376af8;
            case 0x376B58u: goto label_376b58;
            case 0x376B5Cu: goto label_376b5c;
            case 0x376B9Cu: goto label_376b9c;
            case 0x376C2Cu: goto label_376c2c;
            case 0x376C54u: goto label_376c54;
            case 0x376C64u: goto label_376c64;
            case 0x376C78u: goto label_376c78;
            case 0x376CB0u: goto label_376cb0;
            case 0x376CB8u: goto label_376cb8;
            case 0x376CCCu: goto label_376ccc;
            case 0x376D34u: goto label_376d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x376030u;
    // 0x376030: 0x27bdfe20
    ctx->pc = 0x376030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x376034: 0xffbf0080
    ctx->pc = 0x376034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x376038: 0x7fb60070
    ctx->pc = 0x376038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x37603c: 0x7fb50060
    ctx->pc = 0x37603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x376040: 0x7fb40050
    ctx->pc = 0x376040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x376044: 0x27b500c0
    ctx->pc = 0x376044u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 192));
    // 0x376048: 0x7fb30040
    ctx->pc = 0x376048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37604c: 0x7fb20030
    ctx->pc = 0x37604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x376050: 0x7fb10020
    ctx->pc = 0x376050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x376054: 0x7fb00010
    ctx->pc = 0x376054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376058: 0xe7b7000c
    ctx->pc = 0x376058u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x37605c: 0xe7b60008
    ctx->pc = 0x37605cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x376060: 0xe7b50004
    ctx->pc = 0x376060u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x376064: 0xe7b40000
    ctx->pc = 0x376064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x376068: 0x8c890018
    ctx->pc = 0x376068u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x37606c: 0x91220030
    ctx->pc = 0x37606cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x376070: 0x8d3401f8
    ctx->pc = 0x376070u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 9), 504)));
    // 0x376074: 0x21140
    ctx->pc = 0x376074u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x376078: 0x282a021
    ctx->pc = 0x376078u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37607c: 0x8e820000
    ctx->pc = 0x37607cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x376080: 0xa7a200c2
    ctx->pc = 0x376080u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x376084: 0xc5200040
    ctx->pc = 0x376084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376088: 0xe7a000c4
    ctx->pc = 0x376088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x37608c: 0x8d220200
    ctx->pc = 0x37608cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x376090: 0x3042001f
    ctx->pc = 0x376090u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x376094: 0xa3a200c0
    ctx->pc = 0x376094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x376098: 0x93a200c0
    ctx->pc = 0x376098u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37609c: 0x34420020
    ctx->pc = 0x37609cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32));
    // 0x3760a0: 0xa3a200c0
    ctx->pc = 0x3760a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x3760a4: 0x8d220200
    ctx->pc = 0x3760a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x3760a8: 0x30420400
    ctx->pc = 0x3760a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x3760ac: 0x10400003
    ctx->pc = 0x3760ACu;
    {
        const bool branch_taken_0x3760ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3760B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x3760ac) {
            ctx->pc = 0x3760BCu;
            goto label_3760bc;
        }
    }
    ctx->pc = 0x3760B4u;
    // 0x3760b4: 0x10000002
    ctx->pc = 0x3760B4u;
    {
        const bool branch_taken_0x3760b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3760B8u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x3760b4) {
            ctx->pc = 0x3760C0u;
            goto label_3760c0;
        }
    }
    ctx->pc = 0x3760BCu;
label_3760bc:
    // 0x3760bc: 0xa2a00001
    ctx->pc = 0x3760bcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 0));
label_3760c0:
    // 0x3760c0: 0x92a30000
    ctx->pc = 0x3760c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3760c4: 0x30620001
    ctx->pc = 0x3760c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x3760c8: 0x14400005
    ctx->pc = 0x3760C8u;
    {
        const bool branch_taken_0x3760c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3760CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
        if (branch_taken_0x3760c8) {
            ctx->pc = 0x3760E0u;
            goto label_3760e0;
        }
    }
    ctx->pc = 0x3760D0u;
    // 0x3760d0: 0x3c023f80
    ctx->pc = 0x3760d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x3760d4: 0x44820800
    ctx->pc = 0x3760d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x3760d8: 0x10000003
    ctx->pc = 0x3760D8u;
    {
        const bool branch_taken_0x3760d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3760DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 512)));
        if (branch_taken_0x3760d8) {
            ctx->pc = 0x3760E8u;
            goto label_3760e8;
        }
    }
    ctx->pc = 0x3760E0u;
label_3760e0:
    // 0x3760e0: 0x44820800
    ctx->pc = 0x3760e0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x3760e4: 0x8d240200
    ctx->pc = 0x3760e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 512)));
label_3760e8:
    // 0x3760e8: 0x30820100
    ctx->pc = 0x3760e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 256));
    // 0x3760ec: 0x10400004
    ctx->pc = 0x3760ECu;
    {
        const bool branch_taken_0x3760ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3760F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x3760ec) {
            ctx->pc = 0x376100u;
            goto label_376100;
        }
    }
    ctx->pc = 0x3760F4u;
    // 0x3760f4: 0xc52000b8
    ctx->pc = 0x3760f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3760f8: 0x10000004
    ctx->pc = 0x3760F8u;
    {
        const bool branch_taken_0x3760f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3760FCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        if (branch_taken_0x3760f8) {
            ctx->pc = 0x37610Cu;
            goto label_37610c;
        }
    }
    ctx->pc = 0x376100u;
label_376100:
    // 0x376100: 0x44822800
    ctx->pc = 0x376100u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 2);
    // 0x376104: 0x0
    ctx->pc = 0x376104u;
    // NOP
    // 0x376108: 0x46002806
    ctx->pc = 0x376108u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
label_37610c:
    // 0x37610c: 0x8e85001c
    ctx->pc = 0x37610cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x376110: 0x24020003
    ctx->pc = 0x376110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x376114: 0x30a60003
    ctx->pc = 0x376114u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 5), 3));
    // 0x376118: 0x10c2002a
    ctx->pc = 0x376118u;
    {
        const bool branch_taken_0x376118 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x37611Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x376118) {
            ctx->pc = 0x3761C4u;
            goto label_3761c4;
        }
    }
    ctx->pc = 0x376120u;
    // 0x376120: 0x24020002
    ctx->pc = 0x376120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x376124: 0x10c2001b
    ctx->pc = 0x376124u;
    {
        const bool branch_taken_0x376124 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x376128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x376124) {
            ctx->pc = 0x376194u;
            goto label_376194;
        }
    }
    ctx->pc = 0x37612Cu;
    // 0x37612c: 0x10c20005
    ctx->pc = 0x37612Cu;
    {
        const bool branch_taken_0x37612c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x37612c) {
            ctx->pc = 0x376144u;
            goto label_376144;
        }
    }
    ctx->pc = 0x376134u;
    // 0x376134: 0x10c00004
    ctx->pc = 0x376134u;
    {
        const bool branch_taken_0x376134 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x376138u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x376134) {
            ctx->pc = 0x376148u;
            goto label_376148;
        }
    }
    ctx->pc = 0x37613Cu;
    // 0x37613c: 0x10000034
    ctx->pc = 0x37613Cu;
    {
        const bool branch_taken_0x37613c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376140u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 5), 12));
        if (branch_taken_0x37613c) {
            ctx->pc = 0x376210u;
            goto label_376210;
        }
    }
    ctx->pc = 0x376144u;
label_376144:
    // 0x376144: 0x30a20010
    ctx->pc = 0x376144u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 16));
label_376148:
    // 0x376148: 0x10400009
    ctx->pc = 0x376148u;
    {
        const bool branch_taken_0x376148 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x376148) {
            ctx->pc = 0x376170u;
            goto label_376170;
        }
    }
    ctx->pc = 0x376150u;
    // 0x376150: 0xc6820004
    ctx->pc = 0x376150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376154: 0xc52301e4
    ctx->pc = 0x376154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376158: 0x468010a0
    ctx->pc = 0x376158u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x37615c: 0x46051082
    ctx->pc = 0x37615cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x376160: 0x46021881
    ctx->pc = 0x376160u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x376164: 0xe7a301c0
    ctx->pc = 0x376164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x376168: 0x10000028
    ctx->pc = 0x376168u;
    {
        const bool branch_taken_0x376168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37616Cu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        if (branch_taken_0x376168) {
            ctx->pc = 0x37620Cu;
            goto label_37620c;
        }
    }
    ctx->pc = 0x376170u;
label_376170:
    // 0x376170: 0xc52201e4
    ctx->pc = 0x376170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376174: 0xe7a201d0
    ctx->pc = 0x376174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x376178: 0xc6830004
    ctx->pc = 0x376178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37617c: 0xc7a201d0
    ctx->pc = 0x37617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376180: 0x468018e0
    ctx->pc = 0x376180u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x376184: 0x460518c2
    ctx->pc = 0x376184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x376188: 0x46031080
    ctx->pc = 0x376188u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x37618c: 0x1000001f
    ctx->pc = 0x37618Cu;
    {
        const bool branch_taken_0x37618c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376190u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        if (branch_taken_0x37618c) {
            ctx->pc = 0x37620Cu;
            goto label_37620c;
        }
    }
    ctx->pc = 0x376194u;
label_376194:
    // 0x376194: 0xc6840004
    ctx->pc = 0x376194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x376198: 0x3c024000
    ctx->pc = 0x376198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x37619c: 0x44821000
    ctx->pc = 0x37619cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x3761a0: 0xc52301e4
    ctx->pc = 0x3761a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3761a4: 0x46802120
    ctx->pc = 0x3761a4u;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
    // 0x3761a8: 0x46052102
    ctx->pc = 0x3761a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3761ac: 0x46022083
    ctx->pc = 0x3761acu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[2];
    // 0x3761b0: 0x460218c1
    ctx->pc = 0x3761b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3761b4: 0x46041880
    ctx->pc = 0x3761b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x3761b8: 0xe7a301d0
    ctx->pc = 0x3761b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x3761bc: 0x10000013
    ctx->pc = 0x3761BCu;
    {
        const bool branch_taken_0x3761bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3761C0u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        if (branch_taken_0x3761bc) {
            ctx->pc = 0x37620Cu;
            goto label_37620c;
        }
    }
    ctx->pc = 0x3761C4u;
label_3761c4:
    // 0x3761c4: 0x1040000a
    ctx->pc = 0x3761C4u;
    {
        const bool branch_taken_0x3761c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3761c4) {
            ctx->pc = 0x3761F0u;
            goto label_3761f0;
        }
    }
    ctx->pc = 0x3761CCu;
    // 0x3761cc: 0xc52201e4
    ctx->pc = 0x3761ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3761d0: 0xe7a201d0
    ctx->pc = 0x3761d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x3761d4: 0xc6830004
    ctx->pc = 0x3761d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3761d8: 0xc7a201d0
    ctx->pc = 0x3761d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3761dc: 0x468018e0
    ctx->pc = 0x3761dcu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x3761e0: 0x460518c2
    ctx->pc = 0x3761e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x3761e4: 0x46031080
    ctx->pc = 0x3761e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3761e8: 0x10000008
    ctx->pc = 0x3761E8u;
    {
        const bool branch_taken_0x3761e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3761ECu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        if (branch_taken_0x3761e8) {
            ctx->pc = 0x37620Cu;
            goto label_37620c;
        }
    }
    ctx->pc = 0x3761F0u;
label_3761f0:
    // 0x3761f0: 0xc6820004
    ctx->pc = 0x3761f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3761f4: 0xc52301e4
    ctx->pc = 0x3761f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3761f8: 0x468010a0
    ctx->pc = 0x3761f8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x3761fc: 0x46051082
    ctx->pc = 0x3761fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x376200: 0x46021881
    ctx->pc = 0x376200u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x376204: 0xe7a301c0
    ctx->pc = 0x376204u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x376208: 0xe7a201d0
    ctx->pc = 0x376208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_37620c:
    // 0x37620c: 0x30a6000c
    ctx->pc = 0x37620cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 5), 12));
label_376210:
    // 0x376210: 0x24020003
    ctx->pc = 0x376210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x376214: 0x63083
    ctx->pc = 0x376214u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x376218: 0x10c20037
    ctx->pc = 0x376218u;
    {
        const bool branch_taken_0x376218 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x37621Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x376218) {
            ctx->pc = 0x3762F8u;
            goto label_3762f8;
        }
    }
    ctx->pc = 0x376220u;
    // 0x376220: 0x24020002
    ctx->pc = 0x376220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x376224: 0x10c20022
    ctx->pc = 0x376224u;
    {
        const bool branch_taken_0x376224 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x376228u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x376224) {
            ctx->pc = 0x3762B0u;
            goto label_3762b0;
        }
    }
    ctx->pc = 0x37622Cu;
    // 0x37622c: 0x10c20005
    ctx->pc = 0x37622Cu;
    {
        const bool branch_taken_0x37622c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x37622c) {
            ctx->pc = 0x376244u;
            goto label_376244;
        }
    }
    ctx->pc = 0x376234u;
    // 0x376234: 0x10c00004
    ctx->pc = 0x376234u;
    {
        const bool branch_taken_0x376234 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x376238u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x376234) {
            ctx->pc = 0x376248u;
            goto label_376248;
        }
    }
    ctx->pc = 0x37623Cu;
    // 0x37623c: 0x10000048
    ctx->pc = 0x37623Cu;
    {
        const bool branch_taken_0x37623c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376240u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x37623c) {
            ctx->pc = 0x376360u;
            goto label_376360;
        }
    }
    ctx->pc = 0x376244u;
label_376244:
    // 0x376244: 0x30a20020
    ctx->pc = 0x376244u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 32));
label_376248:
    // 0x376248: 0x1040000e
    ctx->pc = 0x376248u;
    {
        const bool branch_taken_0x376248 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x376248) {
            ctx->pc = 0x376284u;
            goto label_376284;
        }
    }
    ctx->pc = 0x376250u;
    // 0x376250: 0xc6830008
    ctx->pc = 0x376250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376254: 0x3c02bf80
    ctx->pc = 0x376254u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x376258: 0xc52401e8
    ctx->pc = 0x376258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x37625c: 0x44821000
    ctx->pc = 0x37625cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x376260: 0x0
    ctx->pc = 0x376260u;
    // NOP
    // 0x376264: 0x468018e0
    ctx->pc = 0x376264u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x376268: 0x46001802
    ctx->pc = 0x376268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x37626c: 0x46001002
    ctx->pc = 0x37626cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x376270: 0x46000802
    ctx->pc = 0x376270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x376274: 0x46002000
    ctx->pc = 0x376274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x376278: 0xe7a401c4
    ctx->pc = 0x376278u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x37627c: 0x10000037
    ctx->pc = 0x37627Cu;
    {
        const bool branch_taken_0x37627c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376280u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
        if (branch_taken_0x37627c) {
            ctx->pc = 0x37635Cu;
            goto label_37635c;
        }
    }
    ctx->pc = 0x376284u;
label_376284:
    // 0x376284: 0xc52201e8
    ctx->pc = 0x376284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376288: 0x27a201d4
    ctx->pc = 0x376288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 468));
    // 0x37628c: 0xe4420000
    ctx->pc = 0x37628cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x376290: 0xc6830008
    ctx->pc = 0x376290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376294: 0x46001086
    ctx->pc = 0x376294u;
    ctx->f[2] = FPU_MOV_S(ctx->f[2]);
    // 0x376298: 0x468018e0
    ctx->pc = 0x376298u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x37629c: 0x46001802
    ctx->pc = 0x37629cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3762a0: 0x46000802
    ctx->pc = 0x3762a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3762a4: 0x46001000
    ctx->pc = 0x3762a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3762a8: 0x1000002c
    ctx->pc = 0x3762A8u;
    {
        const bool branch_taken_0x3762a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3762ACu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
        if (branch_taken_0x3762a8) {
            ctx->pc = 0x37635Cu;
            goto label_37635c;
        }
    }
    ctx->pc = 0x3762B0u;
label_3762b0:
    // 0x3762b0: 0xc6850008
    ctx->pc = 0x3762b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3762b4: 0x3c024000
    ctx->pc = 0x3762b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x3762b8: 0x44821800
    ctx->pc = 0x3762b8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x3762bc: 0x27a601d4
    ctx->pc = 0x3762bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 468));
    // 0x3762c0: 0xc52401e8
    ctx->pc = 0x3762c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3762c4: 0x3c02bf80
    ctx->pc = 0x3762c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x3762c8: 0x44821000
    ctx->pc = 0x3762c8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x3762cc: 0x46802960
    ctx->pc = 0x3762ccu;
    ctx->f[5] = FPU_CVT_S_W(*(int32_t*)&ctx->f[5]);
    // 0x3762d0: 0x46002942
    ctx->pc = 0x3762d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3762d4: 0x46032803
    ctx->pc = 0x3762d4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[0] = ctx->f[5] / ctx->f[3];
    // 0x3762d8: 0x46001002
    ctx->pc = 0x3762d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3762dc: 0x46000802
    ctx->pc = 0x3762dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3762e0: 0x46002080
    ctx->pc = 0x3762e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3762e4: 0x46050802
    ctx->pc = 0x3762e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x3762e8: 0x46001000
    ctx->pc = 0x3762e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3762ec: 0xe4c20000
    ctx->pc = 0x3762ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3762f0: 0x1000001a
    ctx->pc = 0x3762F0u;
    {
        const bool branch_taken_0x3762f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3762F4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
        if (branch_taken_0x3762f0) {
            ctx->pc = 0x37635Cu;
            goto label_37635c;
        }
    }
    ctx->pc = 0x3762F8u;
label_3762f8:
    // 0x3762f8: 0x1040000c
    ctx->pc = 0x3762F8u;
    {
        const bool branch_taken_0x3762f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3762f8) {
            ctx->pc = 0x37632Cu;
            goto label_37632c;
        }
    }
    ctx->pc = 0x376300u;
    // 0x376300: 0xc52201e8
    ctx->pc = 0x376300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376304: 0x27a201d4
    ctx->pc = 0x376304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 468));
    // 0x376308: 0xe4420000
    ctx->pc = 0x376308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x37630c: 0xc6830008
    ctx->pc = 0x37630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376310: 0x46001086
    ctx->pc = 0x376310u;
    ctx->f[2] = FPU_MOV_S(ctx->f[2]);
    // 0x376314: 0x468018e0
    ctx->pc = 0x376314u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x376318: 0x46001802
    ctx->pc = 0x376318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x37631c: 0x46000802
    ctx->pc = 0x37631cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x376320: 0x46001000
    ctx->pc = 0x376320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x376324: 0x1000000d
    ctx->pc = 0x376324u;
    {
        const bool branch_taken_0x376324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376328u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
        if (branch_taken_0x376324) {
            ctx->pc = 0x37635Cu;
            goto label_37635c;
        }
    }
    ctx->pc = 0x37632Cu;
label_37632c:
    // 0x37632c: 0xc6830008
    ctx->pc = 0x37632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376330: 0x3c02bf80
    ctx->pc = 0x376330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x376334: 0xc52401e8
    ctx->pc = 0x376334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x376338: 0x44821000
    ctx->pc = 0x376338u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x37633c: 0x0
    ctx->pc = 0x37633cu;
    // NOP
    // 0x376340: 0x468018e0
    ctx->pc = 0x376340u;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x376344: 0x46001802
    ctx->pc = 0x376344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x376348: 0x46001002
    ctx->pc = 0x376348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x37634c: 0x46000802
    ctx->pc = 0x37634cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x376350: 0x46002000
    ctx->pc = 0x376350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x376354: 0xe7a401c4
    ctx->pc = 0x376354u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x376358: 0xe7a001d4
    ctx->pc = 0x376358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_37635c:
    // 0x37635c: 0xc52001ec
    ctx->pc = 0x37635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376360:
    // 0x376360: 0x27b601c8
    ctx->pc = 0x376360u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 456));
    // 0x376364: 0x27b001d8
    ctx->pc = 0x376364u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 472));
    // 0x376368: 0x30820040
    ctx->pc = 0x376368u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x37636c: 0xe6c00000
    ctx->pc = 0x37636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x376370: 0x10400005
    ctx->pc = 0x376370u;
    {
        const bool branch_taken_0x376370 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x376374u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        if (branch_taken_0x376370) {
            ctx->pc = 0x376388u;
            goto label_376388;
        }
    }
    ctx->pc = 0x376378u;
    // 0x376378: 0xc524020c
    ctx->pc = 0x376378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x37637c: 0xc5230210
    ctx->pc = 0x37637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376380: 0x10000006
    ctx->pc = 0x376380u;
    {
        const bool branch_taken_0x376380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376384u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        if (branch_taken_0x376380) {
            ctx->pc = 0x37639Cu;
            goto label_37639c;
        }
    }
    ctx->pc = 0x376388u;
label_376388:
    // 0x376388: 0x3c023f80
    ctx->pc = 0x376388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x37638c: 0x44822800
    ctx->pc = 0x37638cu;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 2);
    // 0x376390: 0x0
    ctx->pc = 0x376390u;
    // NOP
    // 0x376394: 0x46002906
    ctx->pc = 0x376394u;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x376398: 0x460028c6
    ctx->pc = 0x376398u;
    ctx->f[3] = FPU_MOV_S(ctx->f[5]);
label_37639c:
    // 0x37639c: 0x30820080
    ctx->pc = 0x37639cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 128));
    // 0x3763a0: 0x10400003
    ctx->pc = 0x3763A0u;
    {
        const bool branch_taken_0x3763a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3763A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x3763a0) {
            ctx->pc = 0x3763B0u;
            goto label_3763b0;
        }
    }
    ctx->pc = 0x3763A8u;
    // 0x3763a8: 0x10000002
    ctx->pc = 0x3763A8u;
    {
        const bool branch_taken_0x3763a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3763ACu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x3763a8) {
            ctx->pc = 0x3763B4u;
            goto label_3763b4;
        }
    }
    ctx->pc = 0x3763B0u;
label_3763b0:
    // 0x3763b0: 0x44821000
    ctx->pc = 0x3763b0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_3763b4:
    // 0x3763b4: 0x3c06437f
    ctx->pc = 0x3763b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17279 << 16));
    // 0x3763b8: 0x3c024f00
    ctx->pc = 0x3763b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x3763bc: 0x44860800
    ctx->pc = 0x3763bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 6);
    // 0x3763c0: 0x44820000
    ctx->pc = 0x3763c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3763c4: 0x0
    ctx->pc = 0x3763c4u;
    // NOP
    // 0x3763c8: 0x46020842
    ctx->pc = 0x3763c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3763cc: 0x46010036
    ctx->pc = 0x3763ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3763d0: 0x45010005
    ctx->pc = 0x3763D0u;
    {
        const bool branch_taken_0x3763d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3763d0) {
            ctx->pc = 0x3763E8u;
            goto label_3763e8;
        }
    }
    ctx->pc = 0x3763D8u;
    // 0x3763d8: 0x46000864
    ctx->pc = 0x3763d8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x3763dc: 0x44060800
    ctx->pc = 0x3763dcu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x3763e0: 0x10000008
    ctx->pc = 0x3763E0u;
    {
        const bool branch_taken_0x3763e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3763E4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 24));
        if (branch_taken_0x3763e0) {
            ctx->pc = 0x376404u;
            goto label_376404;
        }
    }
    ctx->pc = 0x3763E8u;
label_3763e8:
    // 0x3763e8: 0x46000841
    ctx->pc = 0x3763e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3763ec: 0x3c028000
    ctx->pc = 0x3763ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x3763f0: 0x46000864
    ctx->pc = 0x3763f0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x3763f4: 0x44060800
    ctx->pc = 0x3763f4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x3763f8: 0x0
    ctx->pc = 0x3763f8u;
    // NOP
    // 0x3763fc: 0xc23025
    ctx->pc = 0x3763fcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x376400: 0x61600
    ctx->pc = 0x376400u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 24));
label_376404:
    // 0x376404: 0x3c06437f
    ctx->pc = 0x376404u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17279 << 16));
    // 0x376408: 0x44860800
    ctx->pc = 0x376408u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 6);
    // 0x37640c: 0x0
    ctx->pc = 0x37640cu;
    // NOP
    // 0x376410: 0x46050842
    ctx->pc = 0x376410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x376414: 0x3c064f00
    ctx->pc = 0x376414u;
    SET_GPR_U32(ctx, 6, ((uint32_t)20224 << 16));
    // 0x376418: 0x44860000
    ctx->pc = 0x376418u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x37641c: 0x0
    ctx->pc = 0x37641cu;
    // NOP
    // 0x376420: 0x46010036
    ctx->pc = 0x376420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376424: 0x45010005
    ctx->pc = 0x376424u;
    {
        const bool branch_taken_0x376424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x376424) {
            ctx->pc = 0x37643Cu;
            goto label_37643c;
        }
    }
    ctx->pc = 0x37642Cu;
    // 0x37642c: 0x46000864
    ctx->pc = 0x37642cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x376430: 0x44070800
    ctx->pc = 0x376430u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[1]);
    // 0x376434: 0x10000008
    ctx->pc = 0x376434u;
    {
        const bool branch_taken_0x376434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376438u;
        SET_GPR_U32(ctx, 6, ((uint32_t)17279 << 16));
        if (branch_taken_0x376434) {
            ctx->pc = 0x376458u;
            goto label_376458;
        }
    }
    ctx->pc = 0x37643Cu;
label_37643c:
    // 0x37643c: 0x46000841
    ctx->pc = 0x37643cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376440: 0x3c068000
    ctx->pc = 0x376440u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32768 << 16));
    // 0x376444: 0x46000864
    ctx->pc = 0x376444u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x376448: 0x44070800
    ctx->pc = 0x376448u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[1]);
    // 0x37644c: 0x0
    ctx->pc = 0x37644cu;
    // NOP
    // 0x376450: 0xe63825
    ctx->pc = 0x376450u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x376454: 0x3c06437f
    ctx->pc = 0x376454u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17279 << 16));
label_376458:
    // 0x376458: 0x44860800
    ctx->pc = 0x376458u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 6);
    // 0x37645c: 0x0
    ctx->pc = 0x37645cu;
    // NOP
    // 0x376460: 0x46040842
    ctx->pc = 0x376460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x376464: 0x3c064f00
    ctx->pc = 0x376464u;
    SET_GPR_U32(ctx, 6, ((uint32_t)20224 << 16));
    // 0x376468: 0x44860000
    ctx->pc = 0x376468u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x37646c: 0x0
    ctx->pc = 0x37646cu;
    // NOP
    // 0x376470: 0x46010036
    ctx->pc = 0x376470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376474: 0x45010005
    ctx->pc = 0x376474u;
    {
        const bool branch_taken_0x376474 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x376478u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x376474) {
            ctx->pc = 0x37648Cu;
            goto label_37648c;
        }
    }
    ctx->pc = 0x37647Cu;
    // 0x37647c: 0x46000864
    ctx->pc = 0x37647cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x376480: 0x44070800
    ctx->pc = 0x376480u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[1]);
    // 0x376484: 0x10000008
    ctx->pc = 0x376484u;
    {
        const bool branch_taken_0x376484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376488u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 8));
        if (branch_taken_0x376484) {
            ctx->pc = 0x3764A8u;
            goto label_3764a8;
        }
    }
    ctx->pc = 0x37648Cu;
label_37648c:
    // 0x37648c: 0x46000841
    ctx->pc = 0x37648cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376490: 0x3c068000
    ctx->pc = 0x376490u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32768 << 16));
    // 0x376494: 0x46000864
    ctx->pc = 0x376494u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x376498: 0x44070800
    ctx->pc = 0x376498u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[1]);
    // 0x37649c: 0x0
    ctx->pc = 0x37649cu;
    // NOP
    // 0x3764a0: 0xe63825
    ctx->pc = 0x3764a0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3764a4: 0x73200
    ctx->pc = 0x3764a4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 8));
label_3764a8:
    // 0x3764a8: 0x3c07437f
    ctx->pc = 0x3764a8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)17279 << 16));
    // 0x3764ac: 0x1064025
    ctx->pc = 0x3764acu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3764b0: 0x44870800
    ctx->pc = 0x3764b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 7);
    // 0x3764b4: 0x3c064f00
    ctx->pc = 0x3764b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)20224 << 16));
    // 0x3764b8: 0x44860000
    ctx->pc = 0x3764b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x3764bc: 0x0
    ctx->pc = 0x3764bcu;
    // NOP
    // 0x3764c0: 0x46030842
    ctx->pc = 0x3764c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3764c4: 0x46010036
    ctx->pc = 0x3764c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3764c8: 0x45010005
    ctx->pc = 0x3764C8u;
    {
        const bool branch_taken_0x3764c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3764c8) {
            ctx->pc = 0x3764E0u;
            goto label_3764e0;
        }
    }
    ctx->pc = 0x3764D0u;
    // 0x3764d0: 0x46000864
    ctx->pc = 0x3764d0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x3764d4: 0x44070800
    ctx->pc = 0x3764d4u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[1]);
    // 0x3764d8: 0x10000008
    ctx->pc = 0x3764D8u;
    {
        const bool branch_taken_0x3764d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3764DCu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        if (branch_taken_0x3764d8) {
            ctx->pc = 0x3764FCu;
            goto label_3764fc;
        }
    }
    ctx->pc = 0x3764E0u;
label_3764e0:
    // 0x3764e0: 0x46000841
    ctx->pc = 0x3764e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3764e4: 0x3c068000
    ctx->pc = 0x3764e4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32768 << 16));
    // 0x3764e8: 0x46000864
    ctx->pc = 0x3764e8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x3764ec: 0x44070800
    ctx->pc = 0x3764ecu;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[1]);
    // 0x3764f0: 0x0
    ctx->pc = 0x3764f0u;
    // NOP
    // 0x3764f4: 0xe63825
    ctx->pc = 0x3764f4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3764f8: 0xe83025
    ctx->pc = 0x3764f8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_3764fc:
    // 0x3764fc: 0x30630003
    ctx->pc = 0x3764fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 3));
    // 0x376500: 0x469825
    ctx->pc = 0x376500u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x376504: 0x24020003
    ctx->pc = 0x376504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x376508: 0x1062005d
    ctx->pc = 0x376508u;
    {
        const bool branch_taken_0x376508 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x376508) {
            ctx->pc = 0x376680u;
            goto label_376680;
        }
    }
    ctx->pc = 0x376510u;
    // 0x376510: 0x24020002
    ctx->pc = 0x376510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x376514: 0x1062002e
    ctx->pc = 0x376514u;
    {
        const bool branch_taken_0x376514 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x376518u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x376514) {
            ctx->pc = 0x3765D0u;
            goto label_3765d0;
        }
    }
    ctx->pc = 0x37651Cu;
    // 0x37651c: 0x1062001c
    ctx->pc = 0x37651Cu;
    {
        const bool branch_taken_0x37651c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x37651c) {
            ctx->pc = 0x376590u;
            goto label_376590;
        }
    }
    ctx->pc = 0x376524u;
    // 0x376524: 0x10600003
    ctx->pc = 0x376524u;
    {
        const bool branch_taken_0x376524 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x376524) {
            ctx->pc = 0x376534u;
            goto label_376534;
        }
    }
    ctx->pc = 0x37652Cu;
    // 0x37652c: 0x10000109
    ctx->pc = 0x37652Cu;
    {
        const bool branch_taken_0x37652c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376530u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 352));
        if (branch_taken_0x37652c) {
            ctx->pc = 0x376954u;
            goto label_376954;
        }
    }
    ctx->pc = 0x376534u;
label_376534:
    // 0x376534: 0xc7ac01d0
    ctx->pc = 0x376534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376538: 0xc0dc61c
    ctx->pc = 0x376538u;
    SET_GPR_U32(ctx, 31, 0x376540u);
    ctx->pc = 0x37653Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 21), 8));
    ctx->pc = 0x371870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371870_0x371870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376540u; }
    }
    if (ctx->pc != 0x376540u) { return; }
    ctx->pc = 0x376540u;
    // 0x376540: 0xe6200000
    ctx->pc = 0x376540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x376544: 0xc0dc61c
    ctx->pc = 0x376544u;
    SET_GPR_U32(ctx, 31, 0x37654Cu);
    ctx->pc = 0x376548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x371870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371870_0x371870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37654Cu; }
    }
    if (ctx->pc != 0x37654Cu) { return; }
    ctx->pc = 0x37654Cu;
    // 0x37654c: 0xe6200004
    ctx->pc = 0x37654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x376550: 0x3c023f80
    ctx->pc = 0x376550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x376554: 0xc6000000
    ctx->pc = 0x376554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376558: 0xe6200008
    ctx->pc = 0x376558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x37655c: 0xae22000c
    ctx->pc = 0x37655cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x376560: 0xc0dc61c
    ctx->pc = 0x376560u;
    SET_GPR_U32(ctx, 31, 0x376568u);
    ctx->pc = 0x376564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x371870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371870_0x371870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376568u; }
    }
    if (ctx->pc != 0x376568u) { return; }
    ctx->pc = 0x376568u;
    // 0x376568: 0xe6200010
    ctx->pc = 0x376568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x37656c: 0xc0dc61c
    ctx->pc = 0x37656Cu;
    SET_GPR_U32(ctx, 31, 0x376574u);
    ctx->pc = 0x376570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x371870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371870_0x371870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376574u; }
    }
    if (ctx->pc != 0x376574u) { return; }
    ctx->pc = 0x376574u;
    // 0x376574: 0xe6200014
    ctx->pc = 0x376574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x376578: 0x3c023f80
    ctx->pc = 0x376578u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x37657c: 0xc6c00000
    ctx->pc = 0x37657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376580: 0xe6200018
    ctx->pc = 0x376580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x376584: 0xae22001c
    ctx->pc = 0x376584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x376588: 0x100000f1
    ctx->pc = 0x376588u;
    {
        const bool branch_taken_0x376588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37658Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
        if (branch_taken_0x376588) {
            ctx->pc = 0x376950u;
            goto label_376950;
        }
    }
    ctx->pc = 0x376590u;
label_376590:
    // 0x376590: 0x27a301d0
    ctx->pc = 0x376590u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 464));
    // 0x376594: 0x27a201c0
    ctx->pc = 0x376594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 448));
    // 0x376598: 0xc4620000
    ctx->pc = 0x376598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37659c: 0xc4610004
    ctx->pc = 0x37659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3765a0: 0xc4600008
    ctx->pc = 0x3765a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3765a4: 0xe6a20008
    ctx->pc = 0x3765a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x3765a8: 0xe6a1000c
    ctx->pc = 0x3765a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x3765ac: 0xe6a00010
    ctx->pc = 0x3765acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x3765b0: 0xc4420000
    ctx->pc = 0x3765b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3765b4: 0xc4410004
    ctx->pc = 0x3765b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3765b8: 0xc4400008
    ctx->pc = 0x3765b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3765bc: 0xe6a20014
    ctx->pc = 0x3765bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x3765c0: 0xe6a10018
    ctx->pc = 0x3765c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x3765c4: 0xe6a0001c
    ctx->pc = 0x3765c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x3765c8: 0x100000e1
    ctx->pc = 0x3765C8u;
    {
        const bool branch_taken_0x3765c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3765CCu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 19));
        if (branch_taken_0x3765c8) {
            ctx->pc = 0x376950u;
            goto label_376950;
        }
    }
    ctx->pc = 0x3765D0u;
label_3765d0:
    // 0x3765d0: 0xc7ac01d0
    ctx->pc = 0x3765d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3765d4: 0xc0dc61c
    ctx->pc = 0x3765D4u;
    SET_GPR_U32(ctx, 31, 0x3765DCu);
    ctx->pc = 0x3765D8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 21), 8));
    ctx->pc = 0x371870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371870_0x371870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3765DCu; }
    }
    if (ctx->pc != 0x3765DCu) { return; }
    ctx->pc = 0x3765DCu;
    // 0x3765dc: 0xe6200000
    ctx->pc = 0x3765dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3765e0: 0xc0dc61c
    ctx->pc = 0x3765E0u;
    SET_GPR_U32(ctx, 31, 0x3765E8u);
    ctx->pc = 0x3765E4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x371870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371870_0x371870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3765E8u; }
    }
    if (ctx->pc != 0x3765E8u) { return; }
    ctx->pc = 0x3765E8u;
    // 0x3765e8: 0xe6200004
    ctx->pc = 0x3765e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3765ec: 0x3c023f80
    ctx->pc = 0x3765ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x3765f0: 0xc6000000
    ctx->pc = 0x3765f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3765f4: 0xe6200008
    ctx->pc = 0x3765f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x3765f8: 0xae22000c
    ctx->pc = 0x3765f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3765fc: 0xc0dc61c
    ctx->pc = 0x3765FCu;
    SET_GPR_U32(ctx, 31, 0x376604u);
    ctx->pc = 0x376600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x371870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371870_0x371870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376604u; }
    }
    if (ctx->pc != 0x376604u) { return; }
    ctx->pc = 0x376604u;
    // 0x376604: 0xe6200010
    ctx->pc = 0x376604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x376608: 0xc0dc61c
    ctx->pc = 0x376608u;
    SET_GPR_U32(ctx, 31, 0x376610u);
    ctx->pc = 0x37660Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x371870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371870_0x371870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376610u; }
    }
    if (ctx->pc != 0x376610u) { return; }
    ctx->pc = 0x376610u;
    // 0x376610: 0xe6200014
    ctx->pc = 0x376610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x376614: 0x3c023f80
    ctx->pc = 0x376614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x376618: 0xc6c00000
    ctx->pc = 0x376618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37661c: 0xe6200018
    ctx->pc = 0x37661cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x376620: 0xae22001c
    ctx->pc = 0x376620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x376624: 0xae330020
    ctx->pc = 0x376624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
    // 0x376628: 0x8e83001c
    ctx->pc = 0x376628u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x37662c: 0x30620010
    ctx->pc = 0x37662cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
    // 0x376630: 0x10400004
    ctx->pc = 0x376630u;
    {
        const bool branch_taken_0x376630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x376630) {
            ctx->pc = 0x376644u;
            goto label_376644;
        }
    }
    ctx->pc = 0x376638u;
    // 0x376638: 0xc682000c
    ctx->pc = 0x376638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37663c: 0x10000003
    ctx->pc = 0x37663Cu;
    {
        const bool branch_taken_0x37663c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376640u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        if (branch_taken_0x37663c) {
            ctx->pc = 0x37664Cu;
            goto label_37664c;
        }
    }
    ctx->pc = 0x376644u;
label_376644:
    // 0x376644: 0xc683000c
    ctx->pc = 0x376644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376648: 0xc6820014
    ctx->pc = 0x376648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37664c:
    // 0x37664c: 0x30620020
    ctx->pc = 0x37664cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
    // 0x376650: 0x10400004
    ctx->pc = 0x376650u;
    {
        const bool branch_taken_0x376650 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x376650) {
            ctx->pc = 0x376664u;
            goto label_376664;
        }
    }
    ctx->pc = 0x376658u;
    // 0x376658: 0xc6800010
    ctx->pc = 0x376658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37665c: 0x10000003
    ctx->pc = 0x37665Cu;
    {
        const bool branch_taken_0x37665c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376660u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x37665c) {
            ctx->pc = 0x37666Cu;
            goto label_37666c;
        }
    }
    ctx->pc = 0x376664u;
label_376664:
    // 0x376664: 0xc6810010
    ctx->pc = 0x376664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376668: 0xc6800018
    ctx->pc = 0x376668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37666c:
    // 0x37666c: 0xe6230024
    ctx->pc = 0x37666cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x376670: 0xe6210028
    ctx->pc = 0x376670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x376674: 0xe622002c
    ctx->pc = 0x376674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x376678: 0x100000b5
    ctx->pc = 0x376678u;
    {
        const bool branch_taken_0x376678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37667Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
        if (branch_taken_0x376678) {
            ctx->pc = 0x376950u;
            goto label_376950;
        }
    }
    ctx->pc = 0x376680u;
label_376680:
    // 0x376680: 0x30a20010
    ctx->pc = 0x376680u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 16));
    // 0x376684: 0x10400004
    ctx->pc = 0x376684u;
    {
        const bool branch_taken_0x376684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x376684) {
            ctx->pc = 0x376698u;
            goto label_376698;
        }
    }
    ctx->pc = 0x37668Cu;
    // 0x37668c: 0xc696000c
    ctx->pc = 0x37668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x376690: 0x10000003
    ctx->pc = 0x376690u;
    {
        const bool branch_taken_0x376690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376694u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        if (branch_taken_0x376690) {
            ctx->pc = 0x3766A0u;
            goto label_3766a0;
        }
    }
    ctx->pc = 0x376698u;
label_376698:
    // 0x376698: 0xc697000c
    ctx->pc = 0x376698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37669c: 0xc6960014
    ctx->pc = 0x37669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3766a0:
    // 0x3766a0: 0x30a20020
    ctx->pc = 0x3766a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 32));
    // 0x3766a4: 0x10400004
    ctx->pc = 0x3766A4u;
    {
        const bool branch_taken_0x3766a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3766a4) {
            ctx->pc = 0x3766B8u;
            goto label_3766b8;
        }
    }
    ctx->pc = 0x3766ACu;
    // 0x3766ac: 0xc6940010
    ctx->pc = 0x3766acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3766b0: 0x10000003
    ctx->pc = 0x3766B0u;
    {
        const bool branch_taken_0x3766b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3766B4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        if (branch_taken_0x3766b0) {
            ctx->pc = 0x3766C0u;
            goto label_3766c0;
        }
    }
    ctx->pc = 0x3766B8u;
label_3766b8:
    // 0x3766b8: 0xc6950010
    ctx->pc = 0x3766b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3766bc: 0xc6940018
    ctx->pc = 0x3766bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3766c0:
    // 0x3766c0: 0x30820200
    ctx->pc = 0x3766c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 512));
    // 0x3766c4: 0x10400007
    ctx->pc = 0x3766C4u;
    {
        const bool branch_taken_0x3766c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3766C8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2048));
        if (branch_taken_0x3766c4) {
            ctx->pc = 0x3766E4u;
            goto label_3766e4;
        }
    }
    ctx->pc = 0x3766CCu;
    // 0x3766cc: 0xc5210218
    ctx->pc = 0x3766ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3766d0: 0xc520021c
    ctx->pc = 0x3766d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3766d4: 0x4601bdc0
    ctx->pc = 0x3766d4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x3766d8: 0x4601b580
    ctx->pc = 0x3766d8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x3766dc: 0x4600ad40
    ctx->pc = 0x3766dcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3766e0: 0x4600a500
    ctx->pc = 0x3766e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3766e4:
    // 0x3766e4: 0x1040000b
    ctx->pc = 0x3766E4u;
    {
        const bool branch_taken_0x3766e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3766E8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3766e4) {
            ctx->pc = 0x376714u;
            goto label_376714;
        }
    }
    ctx->pc = 0x3766ECu;
    // 0x3766ec: 0x30820010
    ctx->pc = 0x3766ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 16));
    // 0x3766f0: 0x14400008
    ctx->pc = 0x3766F0u;
    {
        const bool branch_taken_0x3766f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3766f0) {
            ctx->pc = 0x376714u;
            goto label_376714;
        }
    }
    ctx->pc = 0x3766F8u;
    // 0x3766f8: 0x8d220200
    ctx->pc = 0x3766f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x3766fc: 0x24030001
    ctx->pc = 0x3766fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x376700: 0x34420010
    ctx->pc = 0x376700u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
    // 0x376704: 0xad220200
    ctx->pc = 0x376704u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 512), GPR_U32(ctx, 2));
    // 0x376708: 0xa5200094
    ctx->pc = 0x376708u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x37670c: 0xa5200092
    ctx->pc = 0x37670cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x376710: 0xa5200090
    ctx->pc = 0x376710u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 144), (uint16_t)GPR_U32(ctx, 0));
label_376714:
    // 0x376714: 0x8d220200
    ctx->pc = 0x376714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x376718: 0x30420010
    ctx->pc = 0x376718u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x37671c: 0x14400003
    ctx->pc = 0x37671Cu;
    {
        const bool branch_taken_0x37671c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x37671c) {
            ctx->pc = 0x37672Cu;
            goto label_37672c;
        }
    }
    ctx->pc = 0x376724u;
    // 0x376724: 0x10600077
    ctx->pc = 0x376724u;
    {
        const bool branch_taken_0x376724 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x376724) {
            ctx->pc = 0x376904u;
            goto label_376904;
        }
    }
    ctx->pc = 0x37672Cu;
label_37672c:
    // 0x37672c: 0xc52001e4
    ctx->pc = 0x37672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376730: 0x27a801d0
    ctx->pc = 0x376730u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 464));
    // 0x376734: 0x27a40090
    ctx->pc = 0x376734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x376738: 0x27a201c0
    ctx->pc = 0x376738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 448));
    // 0x37673c: 0x27b1009c
    ctx->pc = 0x37673cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 156));
    // 0x376740: 0x27b000a8
    ctx->pc = 0x376740u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 168));
    // 0x376744: 0x27b600b4
    ctx->pc = 0x376744u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 180));
    // 0x376748: 0x27a501b0
    ctx->pc = 0x376748u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 432));
    // 0x37674c: 0x24060004
    ctx->pc = 0x37674cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x376750: 0x27a701a0
    ctx->pc = 0x376750u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 416));
    // 0x376754: 0x26b40008
    ctx->pc = 0x376754u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 21), 8));
    // 0x376758: 0xe7a001b0
    ctx->pc = 0x376758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x37675c: 0xc52001e8
    ctx->pc = 0x37675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376760: 0xe7a001b4
    ctx->pc = 0x376760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x376764: 0xc52001ec
    ctx->pc = 0x376764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376768: 0xe7a001b8
    ctx->pc = 0x376768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x37676c: 0xdd030000
    ctx->pc = 0x37676cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x376770: 0xc5000008
    ctx->pc = 0x376770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376774: 0xfc830000
    ctx->pc = 0x376774u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x376778: 0xe4800008
    ctx->pc = 0x376778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x37677c: 0xc4420000
    ctx->pc = 0x37677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376780: 0xc4410004
    ctx->pc = 0x376780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376784: 0xc4400008
    ctx->pc = 0x376784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376788: 0xe6220000
    ctx->pc = 0x376788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37678c: 0xe6210004
    ctx->pc = 0x37678cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x376790: 0xe6200008
    ctx->pc = 0x376790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x376794: 0xc7a001d4
    ctx->pc = 0x376794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376798: 0xe7a000a0
    ctx->pc = 0x376798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x37679c: 0xc5020000
    ctx->pc = 0x37679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3767a0: 0xc5010004
    ctx->pc = 0x3767a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3767a4: 0xc5000008
    ctx->pc = 0x3767a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767a8: 0xe6020000
    ctx->pc = 0x3767a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3767ac: 0xe6010004
    ctx->pc = 0x3767acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3767b0: 0xe6000008
    ctx->pc = 0x3767b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3767b4: 0xc7a001c4
    ctx->pc = 0x3767b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767b8: 0xe7a000ac
    ctx->pc = 0x3767b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x3767bc: 0xc4420000
    ctx->pc = 0x3767bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3767c0: 0xc4410004
    ctx->pc = 0x3767c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3767c4: 0xc4400008
    ctx->pc = 0x3767c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767c8: 0xe6c20000
    ctx->pc = 0x3767c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x3767cc: 0xe6c10004
    ctx->pc = 0x3767ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x3767d0: 0xe6c00008
    ctx->pc = 0x3767d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x3767d4: 0x85220090
    ctx->pc = 0x3767d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 144)));
    // 0x3767d8: 0x8d230200
    ctx->pc = 0x3767d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x3767dc: 0x44820000
    ctx->pc = 0x3767dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3767e0: 0x30680800
    ctx->pc = 0x3767e0u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 3), 2048));
    // 0x3767e4: 0x46800020
    ctx->pc = 0x3767e4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3767e8: 0xe7a001a0
    ctx->pc = 0x3767e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x3767ec: 0x85220092
    ctx->pc = 0x3767ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 146)));
    // 0x3767f0: 0x44820000
    ctx->pc = 0x3767f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3767f4: 0x0
    ctx->pc = 0x3767f4u;
    // NOP
    // 0x3767f8: 0x46800020
    ctx->pc = 0x3767f8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3767fc: 0xe7a001a4
    ctx->pc = 0x3767fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x376800: 0x85220094
    ctx->pc = 0x376800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 148)));
    // 0x376804: 0x44820000
    ctx->pc = 0x376804u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x376808: 0x0
    ctx->pc = 0x376808u;
    // NOP
    // 0x37680c: 0x46800020
    ctx->pc = 0x37680cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x376810: 0xc0dd6d0
    ctx->pc = 0x376810u;
    SET_GPR_U32(ctx, 31, 0x376818u);
    ctx->pc = 0x376814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    ctx->pc = 0x375B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375B40_0x375b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376818u; }
    }
    if (ctx->pc != 0x376818u) { return; }
    ctx->pc = 0x376818u;
    // 0x376818: 0x27a20090
    ctx->pc = 0x376818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 144));
    // 0x37681c: 0x26a40050
    ctx->pc = 0x37681cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 80));
    // 0x376820: 0xc4420000
    ctx->pc = 0x376820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376824: 0x2a0282d
    ctx->pc = 0x376824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376828: 0xc4410004
    ctx->pc = 0x376828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37682c: 0x24060050
    ctx->pc = 0x37682cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 80));
    // 0x376830: 0xc4400008
    ctx->pc = 0x376830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376834: 0xe6820000
    ctx->pc = 0x376834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x376838: 0xe6810004
    ctx->pc = 0x376838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x37683c: 0xe6800008
    ctx->pc = 0x37683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x376840: 0xc6220000
    ctx->pc = 0x376840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376844: 0xc6210004
    ctx->pc = 0x376844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376848: 0xc6200008
    ctx->pc = 0x376848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37684c: 0xe682000c
    ctx->pc = 0x37684cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x376850: 0xe6810010
    ctx->pc = 0x376850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x376854: 0xe6800014
    ctx->pc = 0x376854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x376858: 0xc6020000
    ctx->pc = 0x376858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37685c: 0xc6010004
    ctx->pc = 0x37685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376860: 0xc6000008
    ctx->pc = 0x376860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376864: 0xe6820018
    ctx->pc = 0x376864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x376868: 0xe681001c
    ctx->pc = 0x376868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x37686c: 0xe6800020
    ctx->pc = 0x37686cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x376870: 0xae93002c
    ctx->pc = 0x376870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 19));
    // 0x376874: 0xae930028
    ctx->pc = 0x376874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 19));
    // 0x376878: 0xae930024
    ctx->pc = 0x376878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 19));
    // 0x37687c: 0xe6970030
    ctx->pc = 0x37687cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x376880: 0xe6950034
    ctx->pc = 0x376880u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
    // 0x376884: 0xe6960038
    ctx->pc = 0x376884u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
    // 0x376888: 0xe695003c
    ctx->pc = 0x376888u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
    // 0x37688c: 0xe6970040
    ctx->pc = 0x37688cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
    // 0x376890: 0xc041eac
    ctx->pc = 0x376890u;
    SET_GPR_U32(ctx, 31, 0x376898u);
    ctx->pc = 0x376894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
    ctx->pc = 0x107AB0u;
    {
        auto targetFn = runtime->lookupFunction(0x107AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376898u; }
        if (ctx->pc != 0x376898u) { return; }
    }
    ctx->pc = 0x376898u;
    // 0x376898: 0xc6220000
    ctx->pc = 0x376898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37689c: 0x26b50050
    ctx->pc = 0x37689cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 80));
    // 0x3768a0: 0xc6210004
    ctx->pc = 0x3768a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3768a4: 0x26520001
    ctx->pc = 0x3768a4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x3768a8: 0xc6200008
    ctx->pc = 0x3768a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3768ac: 0xe6a20008
    ctx->pc = 0x3768acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x3768b0: 0xe6a1000c
    ctx->pc = 0x3768b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x3768b4: 0xe6a00010
    ctx->pc = 0x3768b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x3768b8: 0xc6020000
    ctx->pc = 0x3768b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3768bc: 0xc6010004
    ctx->pc = 0x3768bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3768c0: 0xc6000008
    ctx->pc = 0x3768c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3768c4: 0xe6a20014
    ctx->pc = 0x3768c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x3768c8: 0xe6a10018
    ctx->pc = 0x3768c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x3768cc: 0xe6a0001c
    ctx->pc = 0x3768ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x3768d0: 0xc6c20000
    ctx->pc = 0x3768d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3768d4: 0xc6c10004
    ctx->pc = 0x3768d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3768d8: 0xc6c00008
    ctx->pc = 0x3768d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3768dc: 0xe6a20020
    ctx->pc = 0x3768dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x3768e0: 0xe6a10024
    ctx->pc = 0x3768e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x3768e4: 0xe6a00028
    ctx->pc = 0x3768e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x3768e8: 0xe6b60038
    ctx->pc = 0x3768e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x3768ec: 0xe6b5003c
    ctx->pc = 0x3768ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x3768f0: 0xe6b70040
    ctx->pc = 0x3768f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x3768f4: 0xe6b40044
    ctx->pc = 0x3768f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x3768f8: 0xe6b60048
    ctx->pc = 0x3768f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x3768fc: 0x10000014
    ctx->pc = 0x3768FCu;
    {
        const bool branch_taken_0x3768fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376900u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
        if (branch_taken_0x3768fc) {
            ctx->pc = 0x376950u;
            goto label_376950;
        }
    }
    ctx->pc = 0x376904u;
label_376904:
    // 0x376904: 0x27a301d0
    ctx->pc = 0x376904u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 464));
    // 0x376908: 0x27a201c0
    ctx->pc = 0x376908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 448));
    // 0x37690c: 0xc4620000
    ctx->pc = 0x37690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376910: 0xc4610004
    ctx->pc = 0x376910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376914: 0xc4600008
    ctx->pc = 0x376914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376918: 0xe6a20008
    ctx->pc = 0x376918u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x37691c: 0xe6a1000c
    ctx->pc = 0x37691cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x376920: 0xe6a00010
    ctx->pc = 0x376920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x376924: 0xc4420000
    ctx->pc = 0x376924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376928: 0xc4410004
    ctx->pc = 0x376928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37692c: 0xc4400008
    ctx->pc = 0x37692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376930: 0xe6a20014
    ctx->pc = 0x376930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x376934: 0xe6a10018
    ctx->pc = 0x376934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x376938: 0xe6a0001c
    ctx->pc = 0x376938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x37693c: 0xaeb30020
    ctx->pc = 0x37693cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 19));
    // 0x376940: 0xe6b70024
    ctx->pc = 0x376940u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x376944: 0xe6b50028
    ctx->pc = 0x376944u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x376948: 0xe6b6002c
    ctx->pc = 0x376948u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x37694c: 0xe6b40030
    ctx->pc = 0x37694cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
label_376950:
    // 0x376950: 0x27a40160
    ctx->pc = 0x376950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 352));
label_376954:
    // 0x376954: 0xc063f7c
    ctx->pc = 0x376954u;
    SET_GPR_U32(ctx, 31, 0x37695Cu);
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37695Cu; }
        if (ctx->pc != 0x37695Cu) { return; }
    }
    ctx->pc = 0x37695Cu;
    // 0x37695c: 0x27a50160
    ctx->pc = 0x37695cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 352));
    // 0x376960: 0xc06bde0
    ctx->pc = 0x376960u;
    SET_GPR_U32(ctx, 31, 0x376968u);
    ctx->pc = 0x376964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376968u; }
        if (ctx->pc != 0x376968u) { return; }
    }
    ctx->pc = 0x376968u;
    // 0x376968: 0x10000009
    ctx->pc = 0x376968u;
    {
        const bool branch_taken_0x376968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37696Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x376968) {
            ctx->pc = 0x376990u;
            goto label_376990;
        }
    }
    ctx->pc = 0x376970u;
label_376970:
    // 0x376970: 0x96a50002
    ctx->pc = 0x376970u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x376974: 0x101080
    ctx->pc = 0x376974u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x376978: 0x501021
    ctx->pc = 0x376978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x37697c: 0x21100
    ctx->pc = 0x37697cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x376980: 0x5d1021
    ctx->pc = 0x376980u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x376984: 0xc0dd758
    ctx->pc = 0x376984u;
    SET_GPR_U32(ctx, 31, 0x37698Cu);
    ctx->pc = 0x376988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 192));
    ctx->pc = 0x375D60u;
    goto label_375d60;
    ctx->pc = 0x37698Cu;
label_37698c:
    // 0x37698c: 0x26100001
    ctx->pc = 0x37698cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_376990:
    // 0x376990: 0x212102a
    ctx->pc = 0x376990u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x376994: 0x1440fff6
    ctx->pc = 0x376994u;
    {
        const bool branch_taken_0x376994 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x376998u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x376994) {
            ctx->pc = 0x376970u;
            goto label_376970;
        }
    }
    ctx->pc = 0x37699Cu;
    // 0x37699c: 0xc06bc78
    ctx->pc = 0x37699Cu;
    SET_GPR_U32(ctx, 31, 0x3769A4u);
    ctx->pc = 0x3769A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3769A4u; }
        if (ctx->pc != 0x3769A4u) { return; }
    }
    ctx->pc = 0x3769A4u;
    // 0x3769a4: 0xc06bc8c
    ctx->pc = 0x3769A4u;
    SET_GPR_U32(ctx, 31, 0x3769ACu);
    ctx->pc = 0x3769A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AF230u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3769ACu; }
        if (ctx->pc != 0x3769ACu) { return; }
    }
    ctx->pc = 0x3769ACu;
    // 0x3769ac: 0xdfbf0080
    ctx->pc = 0x3769acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3769b0: 0xc7b7000c
    ctx->pc = 0x3769b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3769b4: 0x7bb60070
    ctx->pc = 0x3769b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3769b8: 0xc7b60008
    ctx->pc = 0x3769b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3769bc: 0x7bb50060
    ctx->pc = 0x3769bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3769c0: 0xc7b50004
    ctx->pc = 0x3769c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3769c4: 0x7bb40050
    ctx->pc = 0x3769c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3769c8: 0xc7b40000
    ctx->pc = 0x3769c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3769cc: 0x7bb30040
    ctx->pc = 0x3769ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3769d0: 0x7bb20030
    ctx->pc = 0x3769d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3769d4: 0x7bb10020
    ctx->pc = 0x3769d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3769d8: 0x7bb00010
    ctx->pc = 0x3769d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3769dc: 0x3e00008
    ctx->pc = 0x3769DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3769E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375D60u: goto label_375d60;
            case 0x375D90u: goto label_375d90;
            case 0x375DB8u: goto label_375db8;
            case 0x375DC4u: goto label_375dc4;
            case 0x375DE8u: goto label_375de8;
            case 0x375E1Cu: goto label_375e1c;
            case 0x375E2Cu: goto label_375e2c;
            case 0x375E3Cu: goto label_375e3c;
            case 0x375E78u: goto label_375e78;
            case 0x375EC4u: goto label_375ec4;
            case 0x375ECCu: goto label_375ecc;
            case 0x375ED0u: goto label_375ed0;
            case 0x375F30u: goto label_375f30;
            case 0x375F64u: goto label_375f64;
            case 0x375F9Cu: goto label_375f9c;
            case 0x375FB4u: goto label_375fb4;
            case 0x375FE0u: goto label_375fe0;
            case 0x376004u: goto label_376004;
            case 0x376020u: goto label_376020;
            case 0x376024u: goto label_376024;
            case 0x3760BCu: goto label_3760bc;
            case 0x3760C0u: goto label_3760c0;
            case 0x3760E0u: goto label_3760e0;
            case 0x3760E8u: goto label_3760e8;
            case 0x376100u: goto label_376100;
            case 0x37610Cu: goto label_37610c;
            case 0x376144u: goto label_376144;
            case 0x376148u: goto label_376148;
            case 0x376170u: goto label_376170;
            case 0x376194u: goto label_376194;
            case 0x3761C4u: goto label_3761c4;
            case 0x3761F0u: goto label_3761f0;
            case 0x37620Cu: goto label_37620c;
            case 0x376210u: goto label_376210;
            case 0x376244u: goto label_376244;
            case 0x376248u: goto label_376248;
            case 0x376284u: goto label_376284;
            case 0x3762B0u: goto label_3762b0;
            case 0x3762F8u: goto label_3762f8;
            case 0x37632Cu: goto label_37632c;
            case 0x37635Cu: goto label_37635c;
            case 0x376360u: goto label_376360;
            case 0x376388u: goto label_376388;
            case 0x37639Cu: goto label_37639c;
            case 0x3763B0u: goto label_3763b0;
            case 0x3763B4u: goto label_3763b4;
            case 0x3763E8u: goto label_3763e8;
            case 0x376404u: goto label_376404;
            case 0x37643Cu: goto label_37643c;
            case 0x376458u: goto label_376458;
            case 0x37648Cu: goto label_37648c;
            case 0x3764A8u: goto label_3764a8;
            case 0x3764E0u: goto label_3764e0;
            case 0x3764FCu: goto label_3764fc;
            case 0x376534u: goto label_376534;
            case 0x376590u: goto label_376590;
            case 0x3765D0u: goto label_3765d0;
            case 0x376644u: goto label_376644;
            case 0x37664Cu: goto label_37664c;
            case 0x376664u: goto label_376664;
            case 0x37666Cu: goto label_37666c;
            case 0x376680u: goto label_376680;
            case 0x376698u: goto label_376698;
            case 0x3766A0u: goto label_3766a0;
            case 0x3766B8u: goto label_3766b8;
            case 0x3766C0u: goto label_3766c0;
            case 0x3766E4u: goto label_3766e4;
            case 0x376714u: goto label_376714;
            case 0x37672Cu: goto label_37672c;
            case 0x376904u: goto label_376904;
            case 0x376950u: goto label_376950;
            case 0x376954u: goto label_376954;
            case 0x376970u: goto label_376970;
            case 0x37698Cu: goto label_37698c;
            case 0x376990u: goto label_376990;
            case 0x376A08u: goto label_376a08;
            case 0x376A8Cu: goto label_376a8c;
            case 0x376A98u: goto label_376a98;
            case 0x376AB4u: goto label_376ab4;
            case 0x376AF8u: goto label_376af8;
            case 0x376B58u: goto label_376b58;
            case 0x376B5Cu: goto label_376b5c;
            case 0x376B9Cu: goto label_376b9c;
            case 0x376C2Cu: goto label_376c2c;
            case 0x376C54u: goto label_376c54;
            case 0x376C64u: goto label_376c64;
            case 0x376C78u: goto label_376c78;
            case 0x376CB0u: goto label_376cb0;
            case 0x376CB8u: goto label_376cb8;
            case 0x376CCCu: goto label_376ccc;
            case 0x376D34u: goto label_376d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3769E4u;
    // 0x3769e4: 0x0
    ctx->pc = 0x3769e4u;
    // NOP
    // 0x3769e8: 0x0
    ctx->pc = 0x3769e8u;
    // NOP
    // 0x3769ec: 0x0
    ctx->pc = 0x3769ecu;
    // NOP
    // 0x3769f0: 0x27bdffd0
    ctx->pc = 0x3769f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3769f4: 0xffbf0020
    ctx->pc = 0x3769f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3769f8: 0x7fb10010
    ctx->pc = 0x3769f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3769fc: 0x7fb00000
    ctx->pc = 0x3769fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x376a00: 0x802d
    ctx->pc = 0x376a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a04: 0x102100
    ctx->pc = 0x376a04u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
label_376a08:
    // 0x376a08: 0x3c03004a
    ctx->pc = 0x376a08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x376a0c: 0x902823
    ctx->pc = 0x376a0cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x376a10: 0x24635c30
    ctx->pc = 0x376a10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23600));
    // 0x376a14: 0x520c0
    ctx->pc = 0x376a14u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x376a18: 0xa42021
    ctx->pc = 0x376a18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x376a1c: 0x42140
    ctx->pc = 0x376a1cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x376a20: 0x648821
    ctx->pc = 0x376a20u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x376a24: 0x82230000
    ctx->pc = 0x376a24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x376a28: 0x10600022
    ctx->pc = 0x376A28u;
    {
        const bool branch_taken_0x376a28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x376a28) {
            ctx->pc = 0x376AB4u;
            goto label_376ab4;
        }
    }
    ctx->pc = 0x376A30u;
    // 0x376a30: 0xc6200038
    ctx->pc = 0x376a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a34: 0xe6200080
    ctx->pc = 0x376a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x376a38: 0xc620003c
    ctx->pc = 0x376a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a3c: 0xe6200084
    ctx->pc = 0x376a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x376a40: 0xc6200040
    ctx->pc = 0x376a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a44: 0xe6200088
    ctx->pc = 0x376a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
    // 0x376a48: 0x8e220034
    ctx->pc = 0x376a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x376a4c: 0xc62c00b4
    ctx->pc = 0x376a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376a50: 0xc62d00b8
    ctx->pc = 0x376a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x376a54: 0xc62e00bc
    ctx->pc = 0x376a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x376a58: 0x8c420820
    ctx->pc = 0x376a58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x376a5c: 0xc063f98
    ctx->pc = 0x376A5Cu;
    SET_GPR_U32(ctx, 31, 0x376A64u);
    ctx->pc = 0x376A60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x18FE60u;
    {
        auto targetFn = runtime->lookupFunction(0x18FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A64u; }
        if (ctx->pc != 0x376A64u) { return; }
    }
    ctx->pc = 0x376A64u;
    // 0x376a64: 0xc175bf0
    ctx->pc = 0x376A64u;
    SET_GPR_U32(ctx, 31, 0x376A6Cu);
    ctx->pc = 0x376A68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x5D6FC0u;
    {
        auto targetFn = runtime->lookupFunction(0x5D6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A6Cu; }
        if (ctx->pc != 0x376A6Cu) { return; }
    }
    ctx->pc = 0x376A6Cu;
    // 0x376a6c: 0x9622054a
    ctx->pc = 0x376a6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x376a70: 0x30420012
    ctx->pc = 0x376a70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 18));
    // 0x376a74: 0x14400005
    ctx->pc = 0x376A74u;
    {
        const bool branch_taken_0x376a74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x376A78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x376a74) {
            ctx->pc = 0x376A8Cu;
            goto label_376a8c;
        }
    }
    ctx->pc = 0x376A7Cu;
    // 0x376a7c: 0xc175900
    ctx->pc = 0x376A7Cu;
    SET_GPR_U32(ctx, 31, 0x376A84u);
    ctx->pc = 0x376A80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x5D6400u;
    {
        auto targetFn = runtime->lookupFunction(0x5D6400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A84u; }
        if (ctx->pc != 0x376A84u) { return; }
    }
    ctx->pc = 0x376A84u;
    // 0x376a84: 0x10000004
    ctx->pc = 0x376A84u;
    {
        const bool branch_taken_0x376a84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376A88u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3196)));
        if (branch_taken_0x376a84) {
            ctx->pc = 0x376A98u;
            goto label_376a98;
        }
    }
    ctx->pc = 0x376A8Cu;
label_376a8c:
    // 0x376a8c: 0xc0ddb54
    ctx->pc = 0x376A8Cu;
    SET_GPR_U32(ctx, 31, 0x376A94u);
    ctx->pc = 0x376D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00376D50_0x376d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A94u; }
    }
    if (ctx->pc != 0x376A94u) { return; }
    ctx->pc = 0x376A94u;
    // 0x376a94: 0x92250c7c
    ctx->pc = 0x376a94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3196)));
label_376a98:
    // 0x376a98: 0x220202d
    ctx->pc = 0x376a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a9c: 0xc198b6c
    ctx->pc = 0x376A9Cu;
    SET_GPR_U32(ctx, 31, 0x376AA4u);
    ctx->pc = 0x376AA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x662DB0u;
    {
        auto targetFn = runtime->lookupFunction(0x662DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376AA4u; }
        if (ctx->pc != 0x376AA4u) { return; }
    }
    ctx->pc = 0x376AA4u;
    // 0x376aa4: 0x92250c7d
    ctx->pc = 0x376aa4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3197)));
    // 0x376aa8: 0x220202d
    ctx->pc = 0x376aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376aac: 0xc198b6c
    ctx->pc = 0x376AACu;
    SET_GPR_U32(ctx, 31, 0x376AB4u);
    ctx->pc = 0x376AB0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x662DB0u;
    {
        auto targetFn = runtime->lookupFunction(0x662DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376AB4u; }
        if (ctx->pc != 0x376AB4u) { return; }
    }
    ctx->pc = 0x376AB4u;
label_376ab4:
    // 0x376ab4: 0x26100001
    ctx->pc = 0x376ab4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x376ab8: 0x2a030008
    ctx->pc = 0x376ab8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 8));
    // 0x376abc: 0x1460ffd2
    ctx->pc = 0x376ABCu;
    {
        const bool branch_taken_0x376abc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x376AC0u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x376abc) {
            ctx->pc = 0x376A08u;
            goto label_376a08;
        }
    }
    ctx->pc = 0x376AC4u;
    // 0x376ac4: 0xdfbf0020
    ctx->pc = 0x376ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376ac8: 0x7bb10010
    ctx->pc = 0x376ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376acc: 0x7bb00000
    ctx->pc = 0x376accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376ad0: 0x3e00008
    ctx->pc = 0x376AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376AD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375D60u: goto label_375d60;
            case 0x375D90u: goto label_375d90;
            case 0x375DB8u: goto label_375db8;
            case 0x375DC4u: goto label_375dc4;
            case 0x375DE8u: goto label_375de8;
            case 0x375E1Cu: goto label_375e1c;
            case 0x375E2Cu: goto label_375e2c;
            case 0x375E3Cu: goto label_375e3c;
            case 0x375E78u: goto label_375e78;
            case 0x375EC4u: goto label_375ec4;
            case 0x375ECCu: goto label_375ecc;
            case 0x375ED0u: goto label_375ed0;
            case 0x375F30u: goto label_375f30;
            case 0x375F64u: goto label_375f64;
            case 0x375F9Cu: goto label_375f9c;
            case 0x375FB4u: goto label_375fb4;
            case 0x375FE0u: goto label_375fe0;
            case 0x376004u: goto label_376004;
            case 0x376020u: goto label_376020;
            case 0x376024u: goto label_376024;
            case 0x3760BCu: goto label_3760bc;
            case 0x3760C0u: goto label_3760c0;
            case 0x3760E0u: goto label_3760e0;
            case 0x3760E8u: goto label_3760e8;
            case 0x376100u: goto label_376100;
            case 0x37610Cu: goto label_37610c;
            case 0x376144u: goto label_376144;
            case 0x376148u: goto label_376148;
            case 0x376170u: goto label_376170;
            case 0x376194u: goto label_376194;
            case 0x3761C4u: goto label_3761c4;
            case 0x3761F0u: goto label_3761f0;
            case 0x37620Cu: goto label_37620c;
            case 0x376210u: goto label_376210;
            case 0x376244u: goto label_376244;
            case 0x376248u: goto label_376248;
            case 0x376284u: goto label_376284;
            case 0x3762B0u: goto label_3762b0;
            case 0x3762F8u: goto label_3762f8;
            case 0x37632Cu: goto label_37632c;
            case 0x37635Cu: goto label_37635c;
            case 0x376360u: goto label_376360;
            case 0x376388u: goto label_376388;
            case 0x37639Cu: goto label_37639c;
            case 0x3763B0u: goto label_3763b0;
            case 0x3763B4u: goto label_3763b4;
            case 0x3763E8u: goto label_3763e8;
            case 0x376404u: goto label_376404;
            case 0x37643Cu: goto label_37643c;
            case 0x376458u: goto label_376458;
            case 0x37648Cu: goto label_37648c;
            case 0x3764A8u: goto label_3764a8;
            case 0x3764E0u: goto label_3764e0;
            case 0x3764FCu: goto label_3764fc;
            case 0x376534u: goto label_376534;
            case 0x376590u: goto label_376590;
            case 0x3765D0u: goto label_3765d0;
            case 0x376644u: goto label_376644;
            case 0x37664Cu: goto label_37664c;
            case 0x376664u: goto label_376664;
            case 0x37666Cu: goto label_37666c;
            case 0x376680u: goto label_376680;
            case 0x376698u: goto label_376698;
            case 0x3766A0u: goto label_3766a0;
            case 0x3766B8u: goto label_3766b8;
            case 0x3766C0u: goto label_3766c0;
            case 0x3766E4u: goto label_3766e4;
            case 0x376714u: goto label_376714;
            case 0x37672Cu: goto label_37672c;
            case 0x376904u: goto label_376904;
            case 0x376950u: goto label_376950;
            case 0x376954u: goto label_376954;
            case 0x376970u: goto label_376970;
            case 0x37698Cu: goto label_37698c;
            case 0x376990u: goto label_376990;
            case 0x376A08u: goto label_376a08;
            case 0x376A8Cu: goto label_376a8c;
            case 0x376A98u: goto label_376a98;
            case 0x376AB4u: goto label_376ab4;
            case 0x376AF8u: goto label_376af8;
            case 0x376B58u: goto label_376b58;
            case 0x376B5Cu: goto label_376b5c;
            case 0x376B9Cu: goto label_376b9c;
            case 0x376C2Cu: goto label_376c2c;
            case 0x376C54u: goto label_376c54;
            case 0x376C64u: goto label_376c64;
            case 0x376C78u: goto label_376c78;
            case 0x376CB0u: goto label_376cb0;
            case 0x376CB8u: goto label_376cb8;
            case 0x376CCCu: goto label_376ccc;
            case 0x376D34u: goto label_376d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x376AD8u;
    // 0x376ad8: 0x0
    ctx->pc = 0x376ad8u;
    // NOP
    // 0x376adc: 0x0
    ctx->pc = 0x376adcu;
    // NOP
    // 0x376ae0: 0x27bdffe0
    ctx->pc = 0x376ae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376ae4: 0x3c01003b
    ctx->pc = 0x376ae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
    // 0x376ae8: 0xffbf0010
    ctx->pc = 0x376ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x376aec: 0x7fb00000
    ctx->pc = 0x376aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x376af0: 0x1000001a
    ctx->pc = 0x376AF0u;
    {
        const bool branch_taken_0x376af0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376AF4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 23024)));
        if (branch_taken_0x376af0) {
            ctx->pc = 0x376B5Cu;
            goto label_376b5c;
        }
    }
    ctx->pc = 0x376AF8u;
label_376af8:
    // 0x376af8: 0x82030000
    ctx->pc = 0x376af8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x376afc: 0x10600016
    ctx->pc = 0x376AFCu;
    {
        const bool branch_taken_0x376afc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x376afc) {
            ctx->pc = 0x376B58u;
            goto label_376b58;
        }
    }
    ctx->pc = 0x376B04u;
    // 0x376b04: 0xc6000038
    ctx->pc = 0x376b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376b08: 0xe6000080
    ctx->pc = 0x376b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x376b0c: 0xc600003c
    ctx->pc = 0x376b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376b10: 0xe6000084
    ctx->pc = 0x376b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x376b14: 0xc6000040
    ctx->pc = 0x376b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376b18: 0xe6000088
    ctx->pc = 0x376b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x376b1c: 0x8e020034
    ctx->pc = 0x376b1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x376b20: 0xc60c00b4
    ctx->pc = 0x376b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376b24: 0xc60d00b8
    ctx->pc = 0x376b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x376b28: 0xc60e00bc
    ctx->pc = 0x376b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x376b2c: 0x8c420820
    ctx->pc = 0x376b2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x376b30: 0xc063f98
    ctx->pc = 0x376B30u;
    SET_GPR_U32(ctx, 31, 0x376B38u);
    ctx->pc = 0x376B34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x18FE60u;
    {
        auto targetFn = runtime->lookupFunction(0x18FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B38u; }
        if (ctx->pc != 0x376B38u) { return; }
    }
    ctx->pc = 0x376B38u;
    // 0x376b38: 0xc175bf0
    ctx->pc = 0x376B38u;
    SET_GPR_U32(ctx, 31, 0x376B40u);
    ctx->pc = 0x376B3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x5D6FC0u;
    {
        auto targetFn = runtime->lookupFunction(0x5D6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B40u; }
        if (ctx->pc != 0x376B40u) { return; }
    }
    ctx->pc = 0x376B40u;
    // 0x376b40: 0xc0ddb54
    ctx->pc = 0x376B40u;
    SET_GPR_U32(ctx, 31, 0x376B48u);
    ctx->pc = 0x376B44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x376D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00376D50_0x376d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B48u; }
    }
    if (ctx->pc != 0x376B48u) { return; }
    ctx->pc = 0x376B48u;
    // 0x376b48: 0x92050c7c
    ctx->pc = 0x376b48u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3196)));
    // 0x376b4c: 0x200202d
    ctx->pc = 0x376b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b50: 0xc198b6c
    ctx->pc = 0x376B50u;
    SET_GPR_U32(ctx, 31, 0x376B58u);
    ctx->pc = 0x376B54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x662DB0u;
    {
        auto targetFn = runtime->lookupFunction(0x662DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B58u; }
        if (ctx->pc != 0x376B58u) { return; }
    }
    ctx->pc = 0x376B58u;
label_376b58:
    // 0x376b58: 0x8e10001c
    ctx->pc = 0x376b58u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_376b5c:
    // 0x376b5c: 0x1600ffe6
    ctx->pc = 0x376B5Cu;
    {
        const bool branch_taken_0x376b5c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x376b5c) {
            ctx->pc = 0x376AF8u;
            goto label_376af8;
        }
    }
    ctx->pc = 0x376B64u;
    // 0x376b64: 0xdfbf0010
    ctx->pc = 0x376b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376b68: 0x7bb00000
    ctx->pc = 0x376b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376b6c: 0x3e00008
    ctx->pc = 0x376B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376B70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375D60u: goto label_375d60;
            case 0x375D90u: goto label_375d90;
            case 0x375DB8u: goto label_375db8;
            case 0x375DC4u: goto label_375dc4;
            case 0x375DE8u: goto label_375de8;
            case 0x375E1Cu: goto label_375e1c;
            case 0x375E2Cu: goto label_375e2c;
            case 0x375E3Cu: goto label_375e3c;
            case 0x375E78u: goto label_375e78;
            case 0x375EC4u: goto label_375ec4;
            case 0x375ECCu: goto label_375ecc;
            case 0x375ED0u: goto label_375ed0;
            case 0x375F30u: goto label_375f30;
            case 0x375F64u: goto label_375f64;
            case 0x375F9Cu: goto label_375f9c;
            case 0x375FB4u: goto label_375fb4;
            case 0x375FE0u: goto label_375fe0;
            case 0x376004u: goto label_376004;
            case 0x376020u: goto label_376020;
            case 0x376024u: goto label_376024;
            case 0x3760BCu: goto label_3760bc;
            case 0x3760C0u: goto label_3760c0;
            case 0x3760E0u: goto label_3760e0;
            case 0x3760E8u: goto label_3760e8;
            case 0x376100u: goto label_376100;
            case 0x37610Cu: goto label_37610c;
            case 0x376144u: goto label_376144;
            case 0x376148u: goto label_376148;
            case 0x376170u: goto label_376170;
            case 0x376194u: goto label_376194;
            case 0x3761C4u: goto label_3761c4;
            case 0x3761F0u: goto label_3761f0;
            case 0x37620Cu: goto label_37620c;
            case 0x376210u: goto label_376210;
            case 0x376244u: goto label_376244;
            case 0x376248u: goto label_376248;
            case 0x376284u: goto label_376284;
            case 0x3762B0u: goto label_3762b0;
            case 0x3762F8u: goto label_3762f8;
            case 0x37632Cu: goto label_37632c;
            case 0x37635Cu: goto label_37635c;
            case 0x376360u: goto label_376360;
            case 0x376388u: goto label_376388;
            case 0x37639Cu: goto label_37639c;
            case 0x3763B0u: goto label_3763b0;
            case 0x3763B4u: goto label_3763b4;
            case 0x3763E8u: goto label_3763e8;
            case 0x376404u: goto label_376404;
            case 0x37643Cu: goto label_37643c;
            case 0x376458u: goto label_376458;
            case 0x37648Cu: goto label_37648c;
            case 0x3764A8u: goto label_3764a8;
            case 0x3764E0u: goto label_3764e0;
            case 0x3764FCu: goto label_3764fc;
            case 0x376534u: goto label_376534;
            case 0x376590u: goto label_376590;
            case 0x3765D0u: goto label_3765d0;
            case 0x376644u: goto label_376644;
            case 0x37664Cu: goto label_37664c;
            case 0x376664u: goto label_376664;
            case 0x37666Cu: goto label_37666c;
            case 0x376680u: goto label_376680;
            case 0x376698u: goto label_376698;
            case 0x3766A0u: goto label_3766a0;
            case 0x3766B8u: goto label_3766b8;
            case 0x3766C0u: goto label_3766c0;
            case 0x3766E4u: goto label_3766e4;
            case 0x376714u: goto label_376714;
            case 0x37672Cu: goto label_37672c;
            case 0x376904u: goto label_376904;
            case 0x376950u: goto label_376950;
            case 0x376954u: goto label_376954;
            case 0x376970u: goto label_376970;
            case 0x37698Cu: goto label_37698c;
            case 0x376990u: goto label_376990;
            case 0x376A08u: goto label_376a08;
            case 0x376A8Cu: goto label_376a8c;
            case 0x376A98u: goto label_376a98;
            case 0x376AB4u: goto label_376ab4;
            case 0x376AF8u: goto label_376af8;
            case 0x376B58u: goto label_376b58;
            case 0x376B5Cu: goto label_376b5c;
            case 0x376B9Cu: goto label_376b9c;
            case 0x376C2Cu: goto label_376c2c;
            case 0x376C54u: goto label_376c54;
            case 0x376C64u: goto label_376c64;
            case 0x376C78u: goto label_376c78;
            case 0x376CB0u: goto label_376cb0;
            case 0x376CB8u: goto label_376cb8;
            case 0x376CCCu: goto label_376ccc;
            case 0x376D34u: goto label_376d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x376B74u;
    // 0x376b74: 0x0
    ctx->pc = 0x376b74u;
    // NOP
    // 0x376b78: 0x0
    ctx->pc = 0x376b78u;
    // NOP
    // 0x376b7c: 0x0
    ctx->pc = 0x376b7cu;
    // NOP
    // 0x376b80: 0x27bdfff0
    ctx->pc = 0x376b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x376b84: 0x3c01003b
    ctx->pc = 0x376b84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
    // 0x376b88: 0xffbf0000
    ctx->pc = 0x376b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376b8c: 0x8c235900
    ctx->pc = 0x376b8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 22784)));
    // 0x376b90: 0x3c010057
    ctx->pc = 0x376b90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376b94: 0x1000004d
    ctx->pc = 0x376B94u;
    {
        const bool branch_taken_0x376b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x376B98u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294946544), GPR_U32(ctx, 3));
        if (branch_taken_0x376b94) {
            ctx->pc = 0x376CCCu;
            goto label_376ccc;
        }
    }
    ctx->pc = 0x376B9Cu;
label_376b9c:
    // 0x376b9c: 0x80630001
    ctx->pc = 0x376b9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x376ba0: 0x10600045
    ctx->pc = 0x376BA0u;
    {
        const bool branch_taken_0x376ba0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x376ba0) {
            ctx->pc = 0x376CB8u;
            goto label_376cb8;
        }
    }
    ctx->pc = 0x376BA8u;
    // 0x376ba8: 0x3c010057
    ctx->pc = 0x376ba8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376bac: 0x8c22aef0
    ctx->pc = 0x376bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946544)));
    // 0x376bb0: 0xc4400038
    ctx->pc = 0x376bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376bb4: 0x3c010057
    ctx->pc = 0x376bb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376bb8: 0xe4400080
    ctx->pc = 0x376bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x376bbc: 0x8c22aef0
    ctx->pc = 0x376bbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946544)));
    // 0x376bc0: 0xc440003c
    ctx->pc = 0x376bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376bc4: 0x3c010057
    ctx->pc = 0x376bc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376bc8: 0xe4400084
    ctx->pc = 0x376bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x376bcc: 0x8c22aef0
    ctx->pc = 0x376bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946544)));
    // 0x376bd0: 0xc4400040
    ctx->pc = 0x376bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376bd4: 0x3c010057
    ctx->pc = 0x376bd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376bd8: 0xe4400088
    ctx->pc = 0x376bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x376bdc: 0x8c23aef0
    ctx->pc = 0x376bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946544)));
    // 0x376be0: 0x8c620034
    ctx->pc = 0x376be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x376be4: 0xc46c00b4
    ctx->pc = 0x376be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376be8: 0xc46d00b8
    ctx->pc = 0x376be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x376bec: 0xc46e00bc
    ctx->pc = 0x376becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x376bf0: 0x8c420820
    ctx->pc = 0x376bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x376bf4: 0xc063f98
    ctx->pc = 0x376BF4u;
    SET_GPR_U32(ctx, 31, 0x376BFCu);
    ctx->pc = 0x376BF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x18FE60u;
    {
        auto targetFn = runtime->lookupFunction(0x18FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376BFCu; }
        if (ctx->pc != 0x376BFCu) { return; }
    }
    ctx->pc = 0x376BFCu;
    // 0x376bfc: 0x3c010057
    ctx->pc = 0x376bfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376c00: 0x24020038
    ctx->pc = 0x376c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x376c04: 0x8c24aef0
    ctx->pc = 0x376c04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946544)));
    // 0x376c08: 0x90830003
    ctx->pc = 0x376c08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x376c0c: 0x10620015
    ctx->pc = 0x376C0Cu;
    {
        const bool branch_taken_0x376c0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x376C10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
        if (branch_taken_0x376c0c) {
            ctx->pc = 0x376C64u;
            goto label_376c64;
        }
    }
    ctx->pc = 0x376C14u;
    // 0x376c14: 0x1062000f
    ctx->pc = 0x376C14u;
    {
        const bool branch_taken_0x376c14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x376C18u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x376c14) {
            ctx->pc = 0x376C54u;
            goto label_376c54;
        }
    }
    ctx->pc = 0x376C1Cu;
    // 0x376c1c: 0x10650003
    ctx->pc = 0x376C1Cu;
    {
        const bool branch_taken_0x376c1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x376C20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x376c1c) {
            ctx->pc = 0x376C2Cu;
            goto label_376c2c;
        }
    }
    ctx->pc = 0x376C24u;
    // 0x376c24: 0x10000014
    ctx->pc = 0x376C24u;
    {
        const bool branch_taken_0x376c24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x376c24) {
            ctx->pc = 0x376C78u;
            goto label_376c78;
        }
    }
    ctx->pc = 0x376C2Cu;
label_376c2c:
    // 0x376c2c: 0x318c0
    ctx->pc = 0x376c2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x376c30: 0x24427e90
    ctx->pc = 0x376c30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32400));
    // 0x376c34: 0x431021
    ctx->pc = 0x376c34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x376c38: 0x94830bba
    ctx->pc = 0x376c38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3002)));
    // 0x376c3c: 0x8c420000
    ctx->pc = 0x376c3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x376c40: 0x31900
    ctx->pc = 0x376c40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x376c44: 0x431021
    ctx->pc = 0x376c44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x376c48: 0x90420005
    ctx->pc = 0x376c48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x376c4c: 0x1045000a
    ctx->pc = 0x376C4Cu;
    {
        const bool branch_taken_0x376c4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x376c4c) {
            ctx->pc = 0x376C78u;
            goto label_376c78;
        }
    }
    ctx->pc = 0x376C54u;
label_376c54:
    // 0x376c54: 0xc175bf0
    ctx->pc = 0x376C54u;
    SET_GPR_U32(ctx, 31, 0x376C5Cu);
    ctx->pc = 0x5D6FC0u;
    {
        auto targetFn = runtime->lookupFunction(0x5D6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376C5Cu; }
        if (ctx->pc != 0x376C5Cu) { return; }
    }
    ctx->pc = 0x376C5Cu;
    // 0x376c5c: 0x10000006
    ctx->pc = 0x376C5Cu;
    {
        const bool branch_taken_0x376c5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x376c5c) {
            ctx->pc = 0x376C78u;
            goto label_376c78;
        }
    }
    ctx->pc = 0x376C64u;
label_376c64:
    // 0x376c64: 0x90820004
    ctx->pc = 0x376c64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x376c68: 0x14400003
    ctx->pc = 0x376C68u;
    {
        const bool branch_taken_0x376c68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x376c68) {
            ctx->pc = 0x376C78u;
            goto label_376c78;
        }
    }
    ctx->pc = 0x376C70u;
    // 0x376c70: 0xc163de8
    ctx->pc = 0x376C70u;
    SET_GPR_U32(ctx, 31, 0x376C78u);
    ctx->pc = 0x58F7A0u;
    {
        auto targetFn = runtime->lookupFunction(0x58F7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376C78u; }
        if (ctx->pc != 0x376C78u) { return; }
    }
    ctx->pc = 0x376C78u;
label_376c78:
    // 0x376c78: 0x3c010057
    ctx->pc = 0x376c78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376c7c: 0x8c24aef0
    ctx->pc = 0x376c7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294946544)));
    // 0x376c80: 0x9482054a
    ctx->pc = 0x376c80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x376c84: 0x30420012
    ctx->pc = 0x376c84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 18));
    // 0x376c88: 0x14400009
    ctx->pc = 0x376C88u;
    {
        const bool branch_taken_0x376c88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x376c88) {
            ctx->pc = 0x376CB0u;
            goto label_376cb0;
        }
    }
    ctx->pc = 0x376C90u;
    // 0x376c90: 0x9083054d
    ctx->pc = 0x376c90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1357)));
    // 0x376c94: 0x24020002
    ctx->pc = 0x376c94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x376c98: 0x10620005
    ctx->pc = 0x376C98u;
    {
        const bool branch_taken_0x376c98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x376c98) {
            ctx->pc = 0x376CB0u;
            goto label_376cb0;
        }
    }
    ctx->pc = 0x376CA0u;
    // 0x376ca0: 0xc175900
    ctx->pc = 0x376CA0u;
    SET_GPR_U32(ctx, 31, 0x376CA8u);
    ctx->pc = 0x5D6400u;
    {
        auto targetFn = runtime->lookupFunction(0x5D6400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376CA8u; }
        if (ctx->pc != 0x376CA8u) { return; }
    }
    ctx->pc = 0x376CA8u;
    // 0x376ca8: 0x10000003
    ctx->pc = 0x376CA8u;
    {
        const bool branch_taken_0x376ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x376ca8) {
            ctx->pc = 0x376CB8u;
            goto label_376cb8;
        }
    }
    ctx->pc = 0x376CB0u;
label_376cb0:
    // 0x376cb0: 0xc0ddb54
    ctx->pc = 0x376CB0u;
    SET_GPR_U32(ctx, 31, 0x376CB8u);
    ctx->pc = 0x376D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00376D50_0x376d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376CB8u; }
    }
    if (ctx->pc != 0x376CB8u) { return; }
    ctx->pc = 0x376CB8u;
label_376cb8:
    // 0x376cb8: 0x3c010057
    ctx->pc = 0x376cb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376cbc: 0x8c23aef0
    ctx->pc = 0x376cbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946544)));
    // 0x376cc0: 0x8c63001c
    ctx->pc = 0x376cc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x376cc4: 0x3c010057
    ctx->pc = 0x376cc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376cc8: 0xac23aef0
    ctx->pc = 0x376cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946544), GPR_U32(ctx, 3));
label_376ccc:
    // 0x376ccc: 0x3c010057
    ctx->pc = 0x376cccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x376cd0: 0x8c23aef0
    ctx->pc = 0x376cd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294946544)));
    // 0x376cd4: 0x1460ffb1
    ctx->pc = 0x376CD4u;
    {
        const bool branch_taken_0x376cd4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x376cd4) {
            ctx->pc = 0x376B9Cu;
            goto label_376b9c;
        }
    }
    ctx->pc = 0x376CDCu;
    // 0x376cdc: 0xdfbf0000
    ctx->pc = 0x376cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376ce0: 0x3e00008
    ctx->pc = 0x376CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376CE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375D60u: goto label_375d60;
            case 0x375D90u: goto label_375d90;
            case 0x375DB8u: goto label_375db8;
            case 0x375DC4u: goto label_375dc4;
            case 0x375DE8u: goto label_375de8;
            case 0x375E1Cu: goto label_375e1c;
            case 0x375E2Cu: goto label_375e2c;
            case 0x375E3Cu: goto label_375e3c;
            case 0x375E78u: goto label_375e78;
            case 0x375EC4u: goto label_375ec4;
            case 0x375ECCu: goto label_375ecc;
            case 0x375ED0u: goto label_375ed0;
            case 0x375F30u: goto label_375f30;
            case 0x375F64u: goto label_375f64;
            case 0x375F9Cu: goto label_375f9c;
            case 0x375FB4u: goto label_375fb4;
            case 0x375FE0u: goto label_375fe0;
            case 0x376004u: goto label_376004;
            case 0x376020u: goto label_376020;
            case 0x376024u: goto label_376024;
            case 0x3760BCu: goto label_3760bc;
            case 0x3760C0u: goto label_3760c0;
            case 0x3760E0u: goto label_3760e0;
            case 0x3760E8u: goto label_3760e8;
            case 0x376100u: goto label_376100;
            case 0x37610Cu: goto label_37610c;
            case 0x376144u: goto label_376144;
            case 0x376148u: goto label_376148;
            case 0x376170u: goto label_376170;
            case 0x376194u: goto label_376194;
            case 0x3761C4u: goto label_3761c4;
            case 0x3761F0u: goto label_3761f0;
            case 0x37620Cu: goto label_37620c;
            case 0x376210u: goto label_376210;
            case 0x376244u: goto label_376244;
            case 0x376248u: goto label_376248;
            case 0x376284u: goto label_376284;
            case 0x3762B0u: goto label_3762b0;
            case 0x3762F8u: goto label_3762f8;
            case 0x37632Cu: goto label_37632c;
            case 0x37635Cu: goto label_37635c;
            case 0x376360u: goto label_376360;
            case 0x376388u: goto label_376388;
            case 0x37639Cu: goto label_37639c;
            case 0x3763B0u: goto label_3763b0;
            case 0x3763B4u: goto label_3763b4;
            case 0x3763E8u: goto label_3763e8;
            case 0x376404u: goto label_376404;
            case 0x37643Cu: goto label_37643c;
            case 0x376458u: goto label_376458;
            case 0x37648Cu: goto label_37648c;
            case 0x3764A8u: goto label_3764a8;
            case 0x3764E0u: goto label_3764e0;
            case 0x3764FCu: goto label_3764fc;
            case 0x376534u: goto label_376534;
            case 0x376590u: goto label_376590;
            case 0x3765D0u: goto label_3765d0;
            case 0x376644u: goto label_376644;
            case 0x37664Cu: goto label_37664c;
            case 0x376664u: goto label_376664;
            case 0x37666Cu: goto label_37666c;
            case 0x376680u: goto label_376680;
            case 0x376698u: goto label_376698;
            case 0x3766A0u: goto label_3766a0;
            case 0x3766B8u: goto label_3766b8;
            case 0x3766C0u: goto label_3766c0;
            case 0x3766E4u: goto label_3766e4;
            case 0x376714u: goto label_376714;
            case 0x37672Cu: goto label_37672c;
            case 0x376904u: goto label_376904;
            case 0x376950u: goto label_376950;
            case 0x376954u: goto label_376954;
            case 0x376970u: goto label_376970;
            case 0x37698Cu: goto label_37698c;
            case 0x376990u: goto label_376990;
            case 0x376A08u: goto label_376a08;
            case 0x376A8Cu: goto label_376a8c;
            case 0x376A98u: goto label_376a98;
            case 0x376AB4u: goto label_376ab4;
            case 0x376AF8u: goto label_376af8;
            case 0x376B58u: goto label_376b58;
            case 0x376B5Cu: goto label_376b5c;
            case 0x376B9Cu: goto label_376b9c;
            case 0x376C2Cu: goto label_376c2c;
            case 0x376C54u: goto label_376c54;
            case 0x376C64u: goto label_376c64;
            case 0x376C78u: goto label_376c78;
            case 0x376CB0u: goto label_376cb0;
            case 0x376CB8u: goto label_376cb8;
            case 0x376CCCu: goto label_376ccc;
            case 0x376D34u: goto label_376d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x376CE8u;
    // 0x376ce8: 0x0
    ctx->pc = 0x376ce8u;
    // NOP
    // 0x376cec: 0x0
    ctx->pc = 0x376cecu;
    // NOP
    // 0x376cf0: 0x27bdffe0
    ctx->pc = 0x376cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376cf4: 0xffbf0010
    ctx->pc = 0x376cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x376cf8: 0x7fb00000
    ctx->pc = 0x376cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x376cfc: 0x80830000
    ctx->pc = 0x376cfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x376d00: 0x1060000c
    ctx->pc = 0x376D00u;
    {
        const bool branch_taken_0x376d00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x376D04u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x376d00) {
            ctx->pc = 0x376D34u;
            goto label_376d34;
        }
    }
    ctx->pc = 0x376D08u;
    // 0x376d08: 0x8e020034
    ctx->pc = 0x376d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x376d0c: 0xc60c00b4
    ctx->pc = 0x376d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376d10: 0xc60d00b8
    ctx->pc = 0x376d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x376d14: 0xc60e00bc
    ctx->pc = 0x376d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x376d18: 0x8c420820
    ctx->pc = 0x376d18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x376d1c: 0xc063f98
    ctx->pc = 0x376D1Cu;
    SET_GPR_U32(ctx, 31, 0x376D24u);
    ctx->pc = 0x376D20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x18FE60u;
    {
        auto targetFn = runtime->lookupFunction(0x18FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D24u; }
        if (ctx->pc != 0x376D24u) { return; }
    }
    ctx->pc = 0x376D24u;
    // 0x376d24: 0xc175bf0
    ctx->pc = 0x376D24u;
    SET_GPR_U32(ctx, 31, 0x376D2Cu);
    ctx->pc = 0x376D28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x5D6FC0u;
    {
        auto targetFn = runtime->lookupFunction(0x5D6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D2Cu; }
        if (ctx->pc != 0x376D2Cu) { return; }
    }
    ctx->pc = 0x376D2Cu;
    // 0x376d2c: 0xc0ddb54
    ctx->pc = 0x376D2Cu;
    SET_GPR_U32(ctx, 31, 0x376D34u);
    ctx->pc = 0x376D30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x376D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00376D50_0x376d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D34u; }
    }
    if (ctx->pc != 0x376D34u) { return; }
    ctx->pc = 0x376D34u;
label_376d34:
    // 0x376d34: 0xdfbf0010
    ctx->pc = 0x376d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376d38: 0x7bb00000
    ctx->pc = 0x376d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376d3c: 0x3e00008
    ctx->pc = 0x376D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376D40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375D60u: goto label_375d60;
            case 0x375D90u: goto label_375d90;
            case 0x375DB8u: goto label_375db8;
            case 0x375DC4u: goto label_375dc4;
            case 0x375DE8u: goto label_375de8;
            case 0x375E1Cu: goto label_375e1c;
            case 0x375E2Cu: goto label_375e2c;
            case 0x375E3Cu: goto label_375e3c;
            case 0x375E78u: goto label_375e78;
            case 0x375EC4u: goto label_375ec4;
            case 0x375ECCu: goto label_375ecc;
            case 0x375ED0u: goto label_375ed0;
            case 0x375F30u: goto label_375f30;
            case 0x375F64u: goto label_375f64;
            case 0x375F9Cu: goto label_375f9c;
            case 0x375FB4u: goto label_375fb4;
            case 0x375FE0u: goto label_375fe0;
            case 0x376004u: goto label_376004;
            case 0x376020u: goto label_376020;
            case 0x376024u: goto label_376024;
            case 0x3760BCu: goto label_3760bc;
            case 0x3760C0u: goto label_3760c0;
            case 0x3760E0u: goto label_3760e0;
            case 0x3760E8u: goto label_3760e8;
            case 0x376100u: goto label_376100;
            case 0x37610Cu: goto label_37610c;
            case 0x376144u: goto label_376144;
            case 0x376148u: goto label_376148;
            case 0x376170u: goto label_376170;
            case 0x376194u: goto label_376194;
            case 0x3761C4u: goto label_3761c4;
            case 0x3761F0u: goto label_3761f0;
            case 0x37620Cu: goto label_37620c;
            case 0x376210u: goto label_376210;
            case 0x376244u: goto label_376244;
            case 0x376248u: goto label_376248;
            case 0x376284u: goto label_376284;
            case 0x3762B0u: goto label_3762b0;
            case 0x3762F8u: goto label_3762f8;
            case 0x37632Cu: goto label_37632c;
            case 0x37635Cu: goto label_37635c;
            case 0x376360u: goto label_376360;
            case 0x376388u: goto label_376388;
            case 0x37639Cu: goto label_37639c;
            case 0x3763B0u: goto label_3763b0;
            case 0x3763B4u: goto label_3763b4;
            case 0x3763E8u: goto label_3763e8;
            case 0x376404u: goto label_376404;
            case 0x37643Cu: goto label_37643c;
            case 0x376458u: goto label_376458;
            case 0x37648Cu: goto label_37648c;
            case 0x3764A8u: goto label_3764a8;
            case 0x3764E0u: goto label_3764e0;
            case 0x3764FCu: goto label_3764fc;
            case 0x376534u: goto label_376534;
            case 0x376590u: goto label_376590;
            case 0x3765D0u: goto label_3765d0;
            case 0x376644u: goto label_376644;
            case 0x37664Cu: goto label_37664c;
            case 0x376664u: goto label_376664;
            case 0x37666Cu: goto label_37666c;
            case 0x376680u: goto label_376680;
            case 0x376698u: goto label_376698;
            case 0x3766A0u: goto label_3766a0;
            case 0x3766B8u: goto label_3766b8;
            case 0x3766C0u: goto label_3766c0;
            case 0x3766E4u: goto label_3766e4;
            case 0x376714u: goto label_376714;
            case 0x37672Cu: goto label_37672c;
            case 0x376904u: goto label_376904;
            case 0x376950u: goto label_376950;
            case 0x376954u: goto label_376954;
            case 0x376970u: goto label_376970;
            case 0x37698Cu: goto label_37698c;
            case 0x376990u: goto label_376990;
            case 0x376A08u: goto label_376a08;
            case 0x376A8Cu: goto label_376a8c;
            case 0x376A98u: goto label_376a98;
            case 0x376AB4u: goto label_376ab4;
            case 0x376AF8u: goto label_376af8;
            case 0x376B58u: goto label_376b58;
            case 0x376B5Cu: goto label_376b5c;
            case 0x376B9Cu: goto label_376b9c;
            case 0x376C2Cu: goto label_376c2c;
            case 0x376C54u: goto label_376c54;
            case 0x376C64u: goto label_376c64;
            case 0x376C78u: goto label_376c78;
            case 0x376CB0u: goto label_376cb0;
            case 0x376CB8u: goto label_376cb8;
            case 0x376CCCu: goto label_376ccc;
            case 0x376D34u: goto label_376d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x376D44u;
    // 0x376d44: 0x0
    ctx->pc = 0x376d44u;
    // NOP
    // 0x376d48: 0x0
    ctx->pc = 0x376d48u;
    // NOP
    // 0x376d4c: 0x0
    ctx->pc = 0x376d4cu;
    // NOP
}
