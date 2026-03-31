#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0E10
// Address: 0x1a0e10 - 0x1a13f0
void sub_001A0E10_0x1a0e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0e10u;

label_1a0e10:
    // 0x1a0e10: 0x8068388
    ctx->pc = 0x1A0E10u;
    ctx->pc = 0x1A0E14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->pc = 0x1A0E20u;
    goto label_1a0e20;
    ctx->pc = 0x1A0E18u;
    // 0x1a0e18: 0x0
    ctx->pc = 0x1a0e18u;
    // NOP
    // 0x1a0e1c: 0x0
    ctx->pc = 0x1a0e1cu;
    // NOP
label_1a0e20:
    // 0x1a0e20: 0x27bdffb0
    ctx->pc = 0x1a0e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0e24: 0xffbf0040
    ctx->pc = 0x1a0e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0e28: 0x7fb30030
    ctx->pc = 0x1a0e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a0e2c: 0x7fb20020
    ctx->pc = 0x1a0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0e30: 0x80982d
    ctx->pc = 0x1a0e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e34: 0x7fb10010
    ctx->pc = 0x1a0e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0e38: 0xa0902d
    ctx->pc = 0x1a0e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e3c: 0xc0882d
    ctx->pc = 0x1a0e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e40: 0xc06856c
    ctx->pc = 0x1A0E40u;
    SET_GPR_U32(ctx, 31, 0x1A0E48u);
    ctx->pc = 0x1A0E44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A15B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A15B0_0x1a15b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E48u; }
    }
    if (ctx->pc != 0x1A0E48u) { return; }
    ctx->pc = 0x1A0E48u;
    // 0x1a0e48: 0x2511821
    ctx->pc = 0x1a0e48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1a0e4c: 0x62082b
    ctx->pc = 0x1a0e4cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0e50: 0x14200003
    ctx->pc = 0x1A0E50u;
    {
        const bool branch_taken_0x1a0e50 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0e50) {
            ctx->pc = 0x1A0E60u;
            goto label_1a0e60;
        }
    }
    ctx->pc = 0x1A0E58u;
    // 0x1a0e58: 0x1000003c
    ctx->pc = 0x1A0E58u;
    {
        const bool branch_taken_0x1a0e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0E5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e58) {
            ctx->pc = 0x1A0F4Cu;
            goto label_1a0f4c;
        }
    }
    ctx->pc = 0x1A0E60u;
label_1a0e60:
    // 0x1a0e60: 0x16400003
    ctx->pc = 0x1A0E60u;
    {
        const bool branch_taken_0x1a0e60 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A0E64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e60) {
            ctx->pc = 0x1A0E70u;
            goto label_1a0e70;
        }
    }
    ctx->pc = 0x1A0E68u;
    // 0x1a0e68: 0x10000038
    ctx->pc = 0x1A0E68u;
    {
        const bool branch_taken_0x1a0e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0E6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e68) {
            ctx->pc = 0x1A0F4Cu;
            goto label_1a0f4c;
        }
    }
    ctx->pc = 0x1A0E70u;
label_1a0e70:
    // 0x1a0e70: 0xc068580
    ctx->pc = 0x1A0E70u;
    SET_GPR_U32(ctx, 31, 0x1A0E78u);
    ctx->pc = 0x1A1600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1600_0x1a1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E78u; }
    }
    if (ctx->pc != 0x1A0E78u) { return; }
    ctx->pc = 0x1A0E78u;
    // 0x1a0e78: 0x40802d
    ctx->pc = 0x1a0e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e7c: 0x3402ffff
    ctx->pc = 0x1a0e7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a0e80: 0x16020003
    ctx->pc = 0x1A0E80u;
    {
        const bool branch_taken_0x1a0e80 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a0e80) {
            ctx->pc = 0x1A0E90u;
            goto label_1a0e90;
        }
    }
    ctx->pc = 0x1A0E88u;
    // 0x1a0e88: 0x10000030
    ctx->pc = 0x1A0E88u;
    {
        const bool branch_taken_0x1a0e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0E8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e88) {
            ctx->pc = 0x1A0F4Cu;
            goto label_1a0f4c;
        }
    }
    ctx->pc = 0x1A0E90u;
label_1a0e90:
    // 0x1a0e90: 0x8e630008
    ctx->pc = 0x1a0e90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0e94: 0x101100
    ctx->pc = 0x1a0e94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a0e98: 0x431821
    ctx->pc = 0x1a0e98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0e9c: 0xa460000a
    ctx->pc = 0x1a0e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a0ea0: 0x8e630008
    ctx->pc = 0x1a0ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0ea4: 0x431821
    ctx->pc = 0x1a0ea4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0ea8: 0xac720004
    ctx->pc = 0x1a0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x1a0eac: 0x8e630008
    ctx->pc = 0x1a0eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0eb0: 0x8e640018
    ctx->pc = 0x1a0eb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a0eb4: 0x431821
    ctx->pc = 0x1a0eb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0eb8: 0xa4640008
    ctx->pc = 0x1a0eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a0ebc: 0x8e63000c
    ctx->pc = 0x1a0ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1a0ec0: 0x10600010
    ctx->pc = 0x1A0EC0u;
    {
        const bool branch_taken_0x1a0ec0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0EC4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x1a0ec0) {
            ctx->pc = 0x1A0F04u;
            goto label_1a0f04;
        }
    }
    ctx->pc = 0x1A0EC8u;
    // 0x1a0ec8: 0x8e640008
    ctx->pc = 0x1a0ec8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0ecc: 0x2623ffff
    ctx->pc = 0x1a0eccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a0ed0: 0x8e650010
    ctx->pc = 0x1a0ed0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a0ed4: 0x601827
    ctx->pc = 0x1a0ed4u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a0ed8: 0x822021
    ctx->pc = 0x1a0ed8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0edc: 0xac850000
    ctx->pc = 0x1a0edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a0ee0: 0x8e640008
    ctx->pc = 0x1a0ee0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0ee4: 0x821021
    ctx->pc = 0x1a0ee4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0ee8: 0x8c420000
    ctx->pc = 0x1a0ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0eec: 0x521021
    ctx->pc = 0x1a0eecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a0ef0: 0x2221021
    ctx->pc = 0x1a0ef0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a0ef4: 0x2442ffff
    ctx->pc = 0x1a0ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0ef8: 0x621024
    ctx->pc = 0x1a0ef8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0efc: 0x1000000c
    ctx->pc = 0x1A0EFCu;
    {
        const bool branch_taken_0x1a0efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0F00u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1a0efc) {
            ctx->pc = 0x1A0F30u;
            goto label_1a0f30;
        }
    }
    ctx->pc = 0x1A0F04u;
label_1a0f04:
    // 0x1a0f04: 0x8e640010
    ctx->pc = 0x1a0f04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a0f08: 0x602827
    ctx->pc = 0x1a0f08u;
    SET_GPR_U32(ctx, 5, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a0f0c: 0x8e630008
    ctx->pc = 0x1a0f0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0f10: 0x922023
    ctx->pc = 0x1a0f10u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1a0f14: 0xa42024
    ctx->pc = 0x1a0f14u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a0f18: 0x621821
    ctx->pc = 0x1a0f18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0f1c: 0xac640000
    ctx->pc = 0x1a0f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a0f20: 0x8e630008
    ctx->pc = 0x1a0f20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0f24: 0x621021
    ctx->pc = 0x1a0f24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0f28: 0x8c420000
    ctx->pc = 0x1a0f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0f2c: 0xae620010
    ctx->pc = 0x1a0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_1a0f30:
    // 0x1a0f30: 0x8e62001c
    ctx->pc = 0x1a0f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1a0f34: 0x260202d
    ctx->pc = 0x1a0f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f38: 0x200282d
    ctx->pc = 0x1a0f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f3c: 0x521021
    ctx->pc = 0x1a0f3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a0f40: 0xc06859c
    ctx->pc = 0x1A0F40u;
    SET_GPR_U32(ctx, 31, 0x1A0F48u);
    ctx->pc = 0x1A0F44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1670_0x1a1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F48u; }
    }
    if (ctx->pc != 0x1A0F48u) { return; }
    ctx->pc = 0x1A0F48u;
    // 0x1a0f48: 0x26020001
    ctx->pc = 0x1a0f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
label_1a0f4c:
    // 0x1a0f4c: 0xdfbf0040
    ctx->pc = 0x1a0f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f50: 0x7bb30030
    ctx->pc = 0x1a0f50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0f54: 0x7bb20020
    ctx->pc = 0x1a0f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0f58: 0x7bb10010
    ctx->pc = 0x1a0f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0f5c: 0x7bb00000
    ctx->pc = 0x1a0f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f60: 0x3e00008
    ctx->pc = 0x1A0F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E10u: goto label_1a0e10;
            case 0x1A0E20u: goto label_1a0e20;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0F04u: goto label_1a0f04;
            case 0x1A0F30u: goto label_1a0f30;
            case 0x1A0F4Cu: goto label_1a0f4c;
            case 0x1A0FC4u: goto label_1a0fc4;
            case 0x1A0FDCu: goto label_1a0fdc;
            case 0x1A0FE4u: goto label_1a0fe4;
            case 0x1A0FFCu: goto label_1a0ffc;
            case 0x1A1090u: goto label_1a1090;
            case 0x1A1098u: goto label_1a1098;
            case 0x1A112Cu: goto label_1a112c;
            case 0x1A11C4u: goto label_1a11c4;
            case 0x1A11C8u: goto label_1a11c8;
            case 0x1A1248u: goto label_1a1248;
            case 0x1A124Cu: goto label_1a124c;
            case 0x1A1254u: goto label_1a1254;
            case 0x1A1258u: goto label_1a1258;
            case 0x1A12E8u: goto label_1a12e8;
            case 0x1A1308u: goto label_1a1308;
            case 0x1A1314u: goto label_1a1314;
            case 0x1A134Cu: goto label_1a134c;
            case 0x1A1354u: goto label_1a1354;
            case 0x1A1364u: goto label_1a1364;
            case 0x1A1394u: goto label_1a1394;
            case 0x1A13B4u: goto label_1a13b4;
            case 0x1A13E0u: goto label_1a13e0;
            case 0x1A13E4u: goto label_1a13e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0F68u;
    // 0x1a0f68: 0x0
    ctx->pc = 0x1a0f68u;
    // NOP
    // 0x1a0f6c: 0x0
    ctx->pc = 0x1a0f6cu;
    // NOP
    // 0x1a0f70: 0x27bdffb0
    ctx->pc = 0x1a0f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0f74: 0xffbf0040
    ctx->pc = 0x1a0f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0f78: 0x7fb30030
    ctx->pc = 0x1a0f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a0f7c: 0x7fb20020
    ctx->pc = 0x1a0f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0f80: 0x80982d
    ctx->pc = 0x1a0f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f84: 0x7fb10010
    ctx->pc = 0x1a0f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0f88: 0xa0902d
    ctx->pc = 0x1a0f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f8c: 0x7fb00000
    ctx->pc = 0x1a0f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0f90: 0x8c830018
    ctx->pc = 0x1a0f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a0f94: 0xa31021
    ctx->pc = 0x1a0f94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a0f98: 0x2463ffff
    ctx->pc = 0x1a0f98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a0f9c: 0x2442ffff
    ctx->pc = 0x1a0f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a0fa0: 0x601827
    ctx->pc = 0x1a0fa0u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a0fa4: 0xc068580
    ctx->pc = 0x1A0FA4u;
    SET_GPR_U32(ctx, 31, 0x1A0FACu);
    ctx->pc = 0x1A0FA8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A1600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1600_0x1a1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FACu; }
    }
    if (ctx->pc != 0x1A0FACu) { return; }
    ctx->pc = 0x1A0FACu;
    // 0x1a0fac: 0x40882d
    ctx->pc = 0x1a0facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fb0: 0x3407ffff
    ctx->pc = 0x1a0fb0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a0fb4: 0x16270003
    ctx->pc = 0x1A0FB4u;
    {
        const bool branch_taken_0x1a0fb4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 7));
        if (branch_taken_0x1a0fb4) {
            ctx->pc = 0x1A0FC4u;
            goto label_1a0fc4;
        }
    }
    ctx->pc = 0x1A0FBCu;
    // 0x1a0fbc: 0x100000a5
    ctx->pc = 0x1A0FBCu;
    {
        const bool branch_taken_0x1a0fbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0FC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0fbc) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A0FC4u;
label_1a0fc4:
    // 0x1a0fc4: 0x8e620024
    ctx->pc = 0x1a0fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1a0fc8: 0x14470006
    ctx->pc = 0x1A0FC8u;
    {
        const bool branch_taken_0x1a0fc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x1A0FCCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x1a0fc8) {
            ctx->pc = 0x1A0FE4u;
            goto label_1a0fe4;
        }
    }
    ctx->pc = 0x1A0FD0u;
    // 0x1a0fd0: 0x260202d
    ctx->pc = 0x1a0fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fd4: 0xc068384
    ctx->pc = 0x1A0FD4u;
    SET_GPR_U32(ctx, 31, 0x1A0FDCu);
    ctx->pc = 0x1A0FD8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0E10u;
    goto label_1a0e10;
    ctx->pc = 0x1A0FDCu;
label_1a0fdc:
    // 0x1a0fdc: 0x1000009e
    ctx->pc = 0x1A0FDCu;
    {
        const bool branch_taken_0x1a0fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0FE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1a0fdc) {
            ctx->pc = 0x1A1258u;
            goto label_1a1258;
        }
    }
    ctx->pc = 0x1A0FE4u;
label_1a0fe4:
    // 0x1a0fe4: 0x8e64000c
    ctx->pc = 0x1a0fe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1a0fe8: 0x8e620008
    ctx->pc = 0x1a0fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a0fec: 0x10800076
    ctx->pc = 0x1A0FECu;
    {
        const bool branch_taken_0x1a0fec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0FF0u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a0fec) {
            ctx->pc = 0x1A11C8u;
            goto label_1a11c8;
        }
    }
    ctx->pc = 0x1A0FF4u;
    // 0x1a0ff4: 0x10000028
    ctx->pc = 0x1A0FF4u;
    {
        const bool branch_taken_0x1a0ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0FF8u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
        if (branch_taken_0x1a0ff4) {
            ctx->pc = 0x1A1098u;
            goto label_1a1098;
        }
    }
    ctx->pc = 0x1A0FFCu;
label_1a0ffc:
    // 0x1a0ffc: 0x8c660000
    ctx->pc = 0x1a0ffcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1000: 0x3084ffff
    ctx->pc = 0x1a1000u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1a1004: 0x8c650004
    ctx->pc = 0x1a1004u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1008: 0x42100
    ctx->pc = 0x1a1008u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a100c: 0x444821
    ctx->pc = 0x1a100cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1010: 0x8e680018
    ctx->pc = 0x1a1010u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1014: 0x8d230000
    ctx->pc = 0x1a1014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a1018: 0xc52821
    ctx->pc = 0x1a1018u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a101c: 0x2504ffff
    ctx->pc = 0x1a101cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1a1020: 0x1052821
    ctx->pc = 0x1a1020u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1a1024: 0x802027
    ctx->pc = 0x1a1024u;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1a1028: 0x24a5ffff
    ctx->pc = 0x1a1028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a102c: 0x854024
    ctx->pc = 0x1a102cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a1030: 0x681823
    ctx->pc = 0x1a1030u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a1034: 0x70082b
    ctx->pc = 0x1a1034u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1038: 0x14200015
    ctx->pc = 0x1A1038u;
    {
        const bool branch_taken_0x1a1038 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A103Cu;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1a1038) {
            ctx->pc = 0x1A1090u;
            goto label_1a1090;
        }
    }
    ctx->pc = 0x1A1040u;
    // 0x1a1040: 0x260202d
    ctx->pc = 0x1a1040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1044: 0xc21021
    ctx->pc = 0x1a1044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a1048: 0x220282d
    ctx->pc = 0x1a1048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a104c: 0xa440000a
    ctx->pc = 0x1a104cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a1050: 0x8e620008
    ctx->pc = 0x1a1050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1054: 0xc21021
    ctx->pc = 0x1a1054u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a1058: 0xac520004
    ctx->pc = 0x1a1058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1a105c: 0x8e620008
    ctx->pc = 0x1a105cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1060: 0x8e630018
    ctx->pc = 0x1a1060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1064: 0xc21021
    ctx->pc = 0x1a1064u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a1068: 0xa4430008
    ctx->pc = 0x1a1068u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a106c: 0x8e620008
    ctx->pc = 0x1a106cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1070: 0x461021
    ctx->pc = 0x1a1070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a1074: 0xac480000
    ctx->pc = 0x1a1074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1a1078: 0x8e62001c
    ctx->pc = 0x1a1078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1a107c: 0x521021
    ctx->pc = 0x1a107cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1080: 0xc06859c
    ctx->pc = 0x1A1080u;
    SET_GPR_U32(ctx, 31, 0x1A1088u);
    ctx->pc = 0x1A1084u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1670_0x1a1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1088u; }
    }
    if (ctx->pc != 0x1A1088u) { return; }
    ctx->pc = 0x1A1088u;
    // 0x1a1088: 0x10000072
    ctx->pc = 0x1A1088u;
    {
        const bool branch_taken_0x1a1088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A108Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1a1088) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A1090u;
label_1a1090:
    // 0x1a1090: 0x120182d
    ctx->pc = 0x1a1090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1094: 0x9464000e
    ctx->pc = 0x1a1094u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1a1098:
    // 0x1a1098: 0x1487ffd8
    ctx->pc = 0x1A1098u;
    {
        const bool branch_taken_0x1a1098 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 7));
        if (branch_taken_0x1a1098) {
            ctx->pc = 0x1A0FFCu;
            goto label_1a0ffc;
        }
    }
    ctx->pc = 0x1A10A0u;
    // 0x1a10a0: 0x8c660000
    ctx->pc = 0x1a10a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a10a4: 0x8c650004
    ctx->pc = 0x1a10a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a10a8: 0x8e670018
    ctx->pc = 0x1a10a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a10ac: 0x8e630010
    ctx->pc = 0x1a10acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a10b0: 0xc52821
    ctx->pc = 0x1a10b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a10b4: 0x24e4ffff
    ctx->pc = 0x1a10b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a10b8: 0xe52821
    ctx->pc = 0x1a10b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1a10bc: 0x802027
    ctx->pc = 0x1a10bcu;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x1a10c0: 0x24a5ffff
    ctx->pc = 0x1a10c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a10c4: 0x853024
    ctx->pc = 0x1a10c4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a10c8: 0x661823
    ctx->pc = 0x1a10c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a10cc: 0x70082b
    ctx->pc = 0x1a10ccu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a10d0: 0x1420005e
    ctx->pc = 0x1A10D0u;
    {
        const bool branch_taken_0x1a10d0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A10D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a10d0) {
            ctx->pc = 0x1A124Cu;
            goto label_1a124c;
        }
    }
    ctx->pc = 0x1A10D8u;
    // 0x1a10d8: 0x113900
    ctx->pc = 0x1a10d8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 4));
    // 0x1a10dc: 0x260202d
    ctx->pc = 0x1a10dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10e0: 0xe21021
    ctx->pc = 0x1a10e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a10e4: 0x220282d
    ctx->pc = 0x1a10e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10e8: 0xa440000a
    ctx->pc = 0x1a10e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a10ec: 0x8e620008
    ctx->pc = 0x1a10ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a10f0: 0xe21021
    ctx->pc = 0x1a10f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a10f4: 0xac520004
    ctx->pc = 0x1a10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1a10f8: 0x8e620008
    ctx->pc = 0x1a10f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a10fc: 0x8e630018
    ctx->pc = 0x1a10fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1100: 0xe21021
    ctx->pc = 0x1a1100u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1104: 0xa4430008
    ctx->pc = 0x1a1104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1108: 0x8e620008
    ctx->pc = 0x1a1108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a110c: 0x471021
    ctx->pc = 0x1a110cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a1110: 0xac460000
    ctx->pc = 0x1a1110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a1114: 0x8e62001c
    ctx->pc = 0x1a1114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1a1118: 0x521021
    ctx->pc = 0x1a1118u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a111c: 0xc06859c
    ctx->pc = 0x1A111Cu;
    SET_GPR_U32(ctx, 31, 0x1A1124u);
    ctx->pc = 0x1A1120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1670_0x1a1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1124u; }
    }
    if (ctx->pc != 0x1A1124u) { return; }
    ctx->pc = 0x1A1124u;
    // 0x1a1124: 0x1000004b
    ctx->pc = 0x1A1124u;
    {
        const bool branch_taken_0x1a1124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1a1124) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A112Cu;
label_1a112c:
    // 0x1a112c: 0x8e690018
    ctx->pc = 0x1a112cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1130: 0x42900
    ctx->pc = 0x1a1130u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a1134: 0x454021
    ctx->pc = 0x1a1134u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a1138: 0x8c640000
    ctx->pc = 0x1a1138u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a113c: 0x8d070000
    ctx->pc = 0x1a113cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a1140: 0x8d060004
    ctx->pc = 0x1a1140u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a1144: 0x2525ffff
    ctx->pc = 0x1a1144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1a1148: 0xa02827
    ctx->pc = 0x1a1148u;
    SET_GPR_U32(ctx, 5, NOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
    // 0x1a114c: 0xe63021
    ctx->pc = 0x1a114cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a1150: 0x1263021
    ctx->pc = 0x1a1150u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1a1154: 0x24c6ffff
    ctx->pc = 0x1a1154u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a1158: 0xa62824
    ctx->pc = 0x1a1158u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a115c: 0x852023
    ctx->pc = 0x1a115cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a1160: 0x90082b
    ctx->pc = 0x1a1160u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a1164: 0x14200017
    ctx->pc = 0x1A1164u;
    {
        const bool branch_taken_0x1a1164 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1168u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1a1164) {
            ctx->pc = 0x1A11C4u;
            goto label_1a11c4;
        }
    }
    ctx->pc = 0x1A116Cu;
    // 0x1a116c: 0x260202d
    ctx->pc = 0x1a116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1170: 0xe21021
    ctx->pc = 0x1a1170u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1174: 0x220282d
    ctx->pc = 0x1a1174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1178: 0xa440000a
    ctx->pc = 0x1a1178u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a117c: 0x8e620008
    ctx->pc = 0x1a117cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1180: 0xe21021
    ctx->pc = 0x1a1180u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1184: 0xac520004
    ctx->pc = 0x1a1184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1a1188: 0x8e620008
    ctx->pc = 0x1a1188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a118c: 0x8e660018
    ctx->pc = 0x1a118cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1190: 0xe21021
    ctx->pc = 0x1a1190u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1194: 0xa4460008
    ctx->pc = 0x1a1194u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a1198: 0x8c630000
    ctx->pc = 0x1a1198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a119c: 0x8e620008
    ctx->pc = 0x1a119cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a11a0: 0x701823
    ctx->pc = 0x1a11a0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a11a4: 0x471021
    ctx->pc = 0x1a11a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a11a8: 0xac430000
    ctx->pc = 0x1a11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a11ac: 0x8e62001c
    ctx->pc = 0x1a11acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1a11b0: 0x521021
    ctx->pc = 0x1a11b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a11b4: 0xc06859c
    ctx->pc = 0x1A11B4u;
    SET_GPR_U32(ctx, 31, 0x1A11BCu);
    ctx->pc = 0x1A11B8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1670_0x1a1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11BCu; }
    }
    if (ctx->pc != 0x1A11BCu) { return; }
    ctx->pc = 0x1A11BCu;
    // 0x1a11bc: 0x10000025
    ctx->pc = 0x1A11BCu;
    {
        const bool branch_taken_0x1a11bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A11C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1a11bc) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A11C4u;
label_1a11c4:
    // 0x1a11c4: 0x100182d
    ctx->pc = 0x1a11c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a11c8:
    // 0x1a11c8: 0x9465000e
    ctx->pc = 0x1a11c8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1a11cc: 0x3404ffff
    ctx->pc = 0x1a11ccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a11d0: 0x14a4ffd6
    ctx->pc = 0x1A11D0u;
    {
        const bool branch_taken_0x1a11d0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x1A11D4u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1a11d0) {
            ctx->pc = 0x1A112Cu;
            goto label_1a112c;
        }
    }
    ctx->pc = 0x1A11D8u;
    // 0x1a11d8: 0x8c650000
    ctx->pc = 0x1a11d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a11dc: 0x8e640010
    ctx->pc = 0x1a11dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a11e0: 0xa42023
    ctx->pc = 0x1a11e0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a11e4: 0x90082b
    ctx->pc = 0x1a11e4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a11e8: 0x14200017
    ctx->pc = 0x1A11E8u;
    {
        const bool branch_taken_0x1a11e8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A11ECu;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1a11e8) {
            ctx->pc = 0x1A1248u;
            goto label_1a1248;
        }
    }
    ctx->pc = 0x1A11F0u;
    // 0x1a11f0: 0x260202d
    ctx->pc = 0x1a11f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11f4: 0xe21021
    ctx->pc = 0x1a11f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a11f8: 0x220282d
    ctx->pc = 0x1a11f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11fc: 0xa440000a
    ctx->pc = 0x1a11fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a1200: 0x8e620008
    ctx->pc = 0x1a1200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1204: 0xe21021
    ctx->pc = 0x1a1204u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1208: 0xac520004
    ctx->pc = 0x1a1208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x1a120c: 0x8e620008
    ctx->pc = 0x1a120cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1210: 0x8e660018
    ctx->pc = 0x1a1210u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a1214: 0xe21021
    ctx->pc = 0x1a1214u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a1218: 0xa4460008
    ctx->pc = 0x1a1218u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a121c: 0x8c630000
    ctx->pc = 0x1a121cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1220: 0x8e620008
    ctx->pc = 0x1a1220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1224: 0x701823
    ctx->pc = 0x1a1224u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1228: 0x471021
    ctx->pc = 0x1a1228u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a122c: 0xac430000
    ctx->pc = 0x1a122cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1230: 0x8e62001c
    ctx->pc = 0x1a1230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1a1234: 0x521021
    ctx->pc = 0x1a1234u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a1238: 0xc06859c
    ctx->pc = 0x1A1238u;
    SET_GPR_U32(ctx, 31, 0x1A1240u);
    ctx->pc = 0x1A123Cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1670_0x1a1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1240u; }
    }
    if (ctx->pc != 0x1A1240u) { return; }
    ctx->pc = 0x1A1240u;
    // 0x1a1240: 0x10000004
    ctx->pc = 0x1A1240u;
    {
        const bool branch_taken_0x1a1240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1a1240) {
            ctx->pc = 0x1A1254u;
            goto label_1a1254;
        }
    }
    ctx->pc = 0x1A1248u;
label_1a1248:
    // 0x1a1248: 0x260202d
    ctx->pc = 0x1a1248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a124c:
    // 0x1a124c: 0xc068384
    ctx->pc = 0x1A124Cu;
    SET_GPR_U32(ctx, 31, 0x1A1254u);
    ctx->pc = 0x1A1250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0E10u;
    goto label_1a0e10;
    ctx->pc = 0x1A1254u;
label_1a1254:
    // 0x1a1254: 0xdfbf0040
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a1258:
    // 0x1a1258: 0x7bb30030
    ctx->pc = 0x1a1258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a125c: 0x7bb20020
    ctx->pc = 0x1a125cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1260: 0x7bb10010
    ctx->pc = 0x1a1260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1264: 0x7bb00000
    ctx->pc = 0x1a1264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1268: 0x3e00008
    ctx->pc = 0x1A1268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A126Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E10u: goto label_1a0e10;
            case 0x1A0E20u: goto label_1a0e20;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0F04u: goto label_1a0f04;
            case 0x1A0F30u: goto label_1a0f30;
            case 0x1A0F4Cu: goto label_1a0f4c;
            case 0x1A0FC4u: goto label_1a0fc4;
            case 0x1A0FDCu: goto label_1a0fdc;
            case 0x1A0FE4u: goto label_1a0fe4;
            case 0x1A0FFCu: goto label_1a0ffc;
            case 0x1A1090u: goto label_1a1090;
            case 0x1A1098u: goto label_1a1098;
            case 0x1A112Cu: goto label_1a112c;
            case 0x1A11C4u: goto label_1a11c4;
            case 0x1A11C8u: goto label_1a11c8;
            case 0x1A1248u: goto label_1a1248;
            case 0x1A124Cu: goto label_1a124c;
            case 0x1A1254u: goto label_1a1254;
            case 0x1A1258u: goto label_1a1258;
            case 0x1A12E8u: goto label_1a12e8;
            case 0x1A1308u: goto label_1a1308;
            case 0x1A1314u: goto label_1a1314;
            case 0x1A134Cu: goto label_1a134c;
            case 0x1A1354u: goto label_1a1354;
            case 0x1A1364u: goto label_1a1364;
            case 0x1A1394u: goto label_1a1394;
            case 0x1A13B4u: goto label_1a13b4;
            case 0x1A13E0u: goto label_1a13e0;
            case 0x1A13E4u: goto label_1a13e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1270u;
    // 0x1a1270: 0x27bdffd0
    ctx->pc = 0x1a1270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1274: 0xffbf0020
    ctx->pc = 0x1a1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1278: 0x7fb10010
    ctx->pc = 0x1a1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a127c: 0x7fb00000
    ctx->pc = 0x1a127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1280: 0x80882d
    ctx->pc = 0x1a1280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1284: 0x8c830018
    ctx->pc = 0x1a1284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a1288: 0xa31021
    ctx->pc = 0x1a1288u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a128c: 0x2463ffff
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1290: 0x2442ffff
    ctx->pc = 0x1a1290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1294: 0x601827
    ctx->pc = 0x1a1294u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a1298: 0xc06856c
    ctx->pc = 0x1A1298u;
    SET_GPR_U32(ctx, 31, 0x1A12A0u);
    ctx->pc = 0x1A129Cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A15B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A15B0_0x1a15b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12A0u; }
    }
    if (ctx->pc != 0x1A12A0u) { return; }
    ctx->pc = 0x1A12A0u;
    // 0x1a12a0: 0x50082b
    ctx->pc = 0x1a12a0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a12a4: 0x10200010
    ctx->pc = 0x1A12A4u;
    {
        const bool branch_taken_0x1a12a4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A12A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a12a4) {
            ctx->pc = 0x1A12E8u;
            goto label_1a12e8;
        }
    }
    ctx->pc = 0x1A12ACu;
    // 0x1a12ac: 0xc0684fc
    ctx->pc = 0x1A12ACu;
    SET_GPR_U32(ctx, 31, 0x1A12B4u);
    ctx->pc = 0x1A13F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A13F0_0x1a13f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12B4u; }
    }
    if (ctx->pc != 0x1A12B4u) { return; }
    ctx->pc = 0x1A12B4u;
    // 0x1a12b4: 0x8e220018
    ctx->pc = 0x1a12b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a12b8: 0x220202d
    ctx->pc = 0x1a12b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12bc: 0x2443ffff
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a12c0: 0x2021021
    ctx->pc = 0x1a12c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a12c4: 0x601827
    ctx->pc = 0x1a12c4u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a12c8: 0x2442ffff
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a12cc: 0xc06856c
    ctx->pc = 0x1A12CCu;
    SET_GPR_U32(ctx, 31, 0x1A12D4u);
    ctx->pc = 0x1A12D0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1A15B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A15B0_0x1a15b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12D4u; }
    }
    if (ctx->pc != 0x1A12D4u) { return; }
    ctx->pc = 0x1A12D4u;
    // 0x1a12d4: 0x50082b
    ctx->pc = 0x1a12d4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a12d8: 0x10200003
    ctx->pc = 0x1A12D8u;
    {
        const bool branch_taken_0x1a12d8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a12d8) {
            ctx->pc = 0x1A12E8u;
            goto label_1a12e8;
        }
    }
    ctx->pc = 0x1A12E0u;
    // 0x1a12e0: 0x1000000c
    ctx->pc = 0x1A12E0u;
    {
        const bool branch_taken_0x1a12e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A12E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a12e0) {
            ctx->pc = 0x1A1314u;
            goto label_1a1314;
        }
    }
    ctx->pc = 0x1A12E8u;
label_1a12e8:
    // 0x1a12e8: 0x8e22000c
    ctx->pc = 0x1a12e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a12ec: 0x10400006
    ctx->pc = 0x1A12ECu;
    {
        const bool branch_taken_0x1a12ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a12ec) {
            ctx->pc = 0x1A1308u;
            goto label_1a1308;
        }
    }
    ctx->pc = 0x1A12F4u;
    // 0x1a12f4: 0x8e230014
    ctx->pc = 0x1a12f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a12f8: 0x8e220004
    ctx->pc = 0x1a12f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a12fc: 0x621021
    ctx->pc = 0x1a12fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1300: 0x10000004
    ctx->pc = 0x1A1300u;
    {
        const bool branch_taken_0x1a1300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1304u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x1a1300) {
            ctx->pc = 0x1A1314u;
            goto label_1a1314;
        }
    }
    ctx->pc = 0x1A1308u;
label_1a1308:
    // 0x1a1308: 0x8e230014
    ctx->pc = 0x1a1308u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a130c: 0x8e220004
    ctx->pc = 0x1a130cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1310: 0x621023
    ctx->pc = 0x1a1310u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a1314:
    // 0x1a1314: 0xdfbf0020
    ctx->pc = 0x1a1314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1318: 0x7bb10010
    ctx->pc = 0x1a1318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a131c: 0x7bb00000
    ctx->pc = 0x1a131cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1320: 0x3e00008
    ctx->pc = 0x1A1320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E10u: goto label_1a0e10;
            case 0x1A0E20u: goto label_1a0e20;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0F04u: goto label_1a0f04;
            case 0x1A0F30u: goto label_1a0f30;
            case 0x1A0F4Cu: goto label_1a0f4c;
            case 0x1A0FC4u: goto label_1a0fc4;
            case 0x1A0FDCu: goto label_1a0fdc;
            case 0x1A0FE4u: goto label_1a0fe4;
            case 0x1A0FFCu: goto label_1a0ffc;
            case 0x1A1090u: goto label_1a1090;
            case 0x1A1098u: goto label_1a1098;
            case 0x1A112Cu: goto label_1a112c;
            case 0x1A11C4u: goto label_1a11c4;
            case 0x1A11C8u: goto label_1a11c8;
            case 0x1A1248u: goto label_1a1248;
            case 0x1A124Cu: goto label_1a124c;
            case 0x1A1254u: goto label_1a1254;
            case 0x1A1258u: goto label_1a1258;
            case 0x1A12E8u: goto label_1a12e8;
            case 0x1A1308u: goto label_1a1308;
            case 0x1A1314u: goto label_1a1314;
            case 0x1A134Cu: goto label_1a134c;
            case 0x1A1354u: goto label_1a1354;
            case 0x1A1364u: goto label_1a1364;
            case 0x1A1394u: goto label_1a1394;
            case 0x1A13B4u: goto label_1a13b4;
            case 0x1A13E0u: goto label_1a13e0;
            case 0x1A13E4u: goto label_1a13e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1328u;
    // 0x1a1328: 0x0
    ctx->pc = 0x1a1328u;
    // NOP
    // 0x1a132c: 0x0
    ctx->pc = 0x1a132cu;
    // NOP
    // 0x1a1330: 0x8c820000
    ctx->pc = 0x1a1330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1334: 0x24a3ffff
    ctx->pc = 0x1a1334u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a1338: 0x62082a
    ctx->pc = 0x1a1338u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1a133c: 0x10200003
    ctx->pc = 0x1A133Cu;
    {
        const bool branch_taken_0x1a133c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1340u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a133c) {
            ctx->pc = 0x1A134Cu;
            goto label_1a134c;
        }
    }
    ctx->pc = 0x1A1344u;
    // 0x1a1344: 0x14a00003
    ctx->pc = 0x1A1344u;
    {
        const bool branch_taken_0x1a1344 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1344) {
            ctx->pc = 0x1A1354u;
            goto label_1a1354;
        }
    }
    ctx->pc = 0x1A134Cu;
label_1a134c:
    // 0x1a134c: 0x10000005
    ctx->pc = 0x1A134Cu;
    {
        const bool branch_taken_0x1a134c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a134c) {
            ctx->pc = 0x1A1364u;
            goto label_1a1364;
        }
    }
    ctx->pc = 0x1A1354u;
label_1a1354:
    // 0x1a1354: 0x8c820008
    ctx->pc = 0x1a1354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1358: 0x31900
    ctx->pc = 0x1a1358u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a135c: 0x431021
    ctx->pc = 0x1a135cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1360: 0x8c420000
    ctx->pc = 0x1a1360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1364:
    // 0x1a1364: 0x3e00008
    ctx->pc = 0x1A1364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E10u: goto label_1a0e10;
            case 0x1A0E20u: goto label_1a0e20;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0F04u: goto label_1a0f04;
            case 0x1A0F30u: goto label_1a0f30;
            case 0x1A0F4Cu: goto label_1a0f4c;
            case 0x1A0FC4u: goto label_1a0fc4;
            case 0x1A0FDCu: goto label_1a0fdc;
            case 0x1A0FE4u: goto label_1a0fe4;
            case 0x1A0FFCu: goto label_1a0ffc;
            case 0x1A1090u: goto label_1a1090;
            case 0x1A1098u: goto label_1a1098;
            case 0x1A112Cu: goto label_1a112c;
            case 0x1A11C4u: goto label_1a11c4;
            case 0x1A11C8u: goto label_1a11c8;
            case 0x1A1248u: goto label_1a1248;
            case 0x1A124Cu: goto label_1a124c;
            case 0x1A1254u: goto label_1a1254;
            case 0x1A1258u: goto label_1a1258;
            case 0x1A12E8u: goto label_1a12e8;
            case 0x1A1308u: goto label_1a1308;
            case 0x1A1314u: goto label_1a1314;
            case 0x1A134Cu: goto label_1a134c;
            case 0x1A1354u: goto label_1a1354;
            case 0x1A1364u: goto label_1a1364;
            case 0x1A1394u: goto label_1a1394;
            case 0x1A13B4u: goto label_1a13b4;
            case 0x1A13E0u: goto label_1a13e0;
            case 0x1A13E4u: goto label_1a13e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A136Cu;
    // 0x1a136c: 0x0
    ctx->pc = 0x1a136cu;
    // NOP
    // 0x1a1370: 0x27bdfff0
    ctx->pc = 0x1a1370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1374: 0x24a5ffff
    ctx->pc = 0x1a1374u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a1378: 0xffbf0000
    ctx->pc = 0x1a1378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a137c: 0x8c820000
    ctx->pc = 0x1a137cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1380: 0xa2102a
    ctx->pc = 0x1a1380u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x1a1384: 0x14400003
    ctx->pc = 0x1A1384u;
    {
        const bool branch_taken_0x1a1384 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1388u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a1384) {
            ctx->pc = 0x1A1394u;
            goto label_1a1394;
        }
    }
    ctx->pc = 0x1A138Cu;
    // 0x1a138c: 0x10000015
    ctx->pc = 0x1A138Cu;
    {
        const bool branch_taken_0x1a138c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1390u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a138c) {
            ctx->pc = 0x1A13E4u;
            goto label_1a13e4;
        }
    }
    ctx->pc = 0x1A1394u;
label_1a1394:
    // 0x1a1394: 0x8c820008
    ctx->pc = 0x1a1394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1398: 0x51900
    ctx->pc = 0x1a1398u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a139c: 0x621021
    ctx->pc = 0x1a139cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a13a0: 0x8c460004
    ctx->pc = 0x1a13a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a13a4: 0x14c00003
    ctx->pc = 0x1A13A4u;
    {
        const bool branch_taken_0x1a13a4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A13A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a13a4) {
            ctx->pc = 0x1A13B4u;
            goto label_1a13b4;
        }
    }
    ctx->pc = 0x1A13ACu;
    // 0x1a13ac: 0x1000000c
    ctx->pc = 0x1A13ACu;
    {
        const bool branch_taken_0x1a13ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a13ac) {
            ctx->pc = 0x1A13E0u;
            goto label_1a13e0;
        }
    }
    ctx->pc = 0x1A13B4u;
label_1a13b4:
    // 0x1a13b4: 0x8c82001c
    ctx->pc = 0x1a13b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a13b8: 0x461023
    ctx->pc = 0x1a13b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a13bc: 0xac82001c
    ctx->pc = 0x1a13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1a13c0: 0x8c820008
    ctx->pc = 0x1a13c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a13c4: 0x621021
    ctx->pc = 0x1a13c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a13c8: 0xac400004
    ctx->pc = 0x1a13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a13cc: 0x8c820008
    ctx->pc = 0x1a13ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a13d0: 0x431021
    ctx->pc = 0x1a13d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a13d4: 0xc0685e8
    ctx->pc = 0x1A13D4u;
    SET_GPR_U32(ctx, 31, 0x1A13DCu);
    ctx->pc = 0x1A13D8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1A17A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A17A0_0x1a17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A13DCu; }
    }
    if (ctx->pc != 0x1A13DCu) { return; }
    ctx->pc = 0x1A13DCu;
    // 0x1a13dc: 0x24020001
    ctx->pc = 0x1a13dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a13e0:
    // 0x1a13e0: 0xdfbf0000
    ctx->pc = 0x1a13e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a13e4:
    // 0x1a13e4: 0x3e00008
    ctx->pc = 0x1A13E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A13E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E10u: goto label_1a0e10;
            case 0x1A0E20u: goto label_1a0e20;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0F04u: goto label_1a0f04;
            case 0x1A0F30u: goto label_1a0f30;
            case 0x1A0F4Cu: goto label_1a0f4c;
            case 0x1A0FC4u: goto label_1a0fc4;
            case 0x1A0FDCu: goto label_1a0fdc;
            case 0x1A0FE4u: goto label_1a0fe4;
            case 0x1A0FFCu: goto label_1a0ffc;
            case 0x1A1090u: goto label_1a1090;
            case 0x1A1098u: goto label_1a1098;
            case 0x1A112Cu: goto label_1a112c;
            case 0x1A11C4u: goto label_1a11c4;
            case 0x1A11C8u: goto label_1a11c8;
            case 0x1A1248u: goto label_1a1248;
            case 0x1A124Cu: goto label_1a124c;
            case 0x1A1254u: goto label_1a1254;
            case 0x1A1258u: goto label_1a1258;
            case 0x1A12E8u: goto label_1a12e8;
            case 0x1A1308u: goto label_1a1308;
            case 0x1A1314u: goto label_1a1314;
            case 0x1A134Cu: goto label_1a134c;
            case 0x1A1354u: goto label_1a1354;
            case 0x1A1364u: goto label_1a1364;
            case 0x1A1394u: goto label_1a1394;
            case 0x1A13B4u: goto label_1a13b4;
            case 0x1A13E0u: goto label_1a13e0;
            case 0x1A13E4u: goto label_1a13e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A13ECu;
    // 0x1a13ec: 0x0
    ctx->pc = 0x1a13ecu;
    // NOP
}
