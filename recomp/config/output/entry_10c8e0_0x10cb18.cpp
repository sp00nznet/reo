#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_10c8e0
// Address: 0x10c8e0 - 0x10cb18
void entry_10c8e0_0x10cb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10c8e0u;

    // 0x10c8e0: 0x27bdffa0
    ctx->pc = 0x10c8e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10c8e4: 0xffb50038
    ctx->pc = 0x10c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10c8e8: 0xa0a82d
    ctx->pc = 0x10c8e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c8ec: 0xffb00010
    ctx->pc = 0x10c8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10c8f0: 0xffb10018
    ctx->pc = 0x10c8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10c8f4: 0xffb40030
    ctx->pc = 0x10c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10c8f8: 0xffb60040
    ctx->pc = 0x10c8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x10c8fc: 0xffbf0058
    ctx->pc = 0x10c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x10c900: 0xafa40000
    ctx->pc = 0x10c900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10c904: 0xffb20020
    ctx->pc = 0x10c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10c908: 0x2a0902d
    ctx->pc = 0x10c908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c90c: 0xffb30028
    ctx->pc = 0x10c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10c910: 0xe0982d
    ctx->pc = 0x10c910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c914: 0xffb70048
    ctx->pc = 0x10c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x10c918: 0xb82d
    ctx->pc = 0x10c918u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c91c: 0xffbe0050
    ctx->pc = 0x10c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x10c920: 0xc0f02d
    ctx->pc = 0x10c920u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c924: 0x0
    ctx->pc = 0x10c924u;
    // NOP
label_10c928:
    // 0x10c928: 0x82510000
    ctx->pc = 0x10c928u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10c92c: 0x3c020023
    ctx->pc = 0x10c92cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x10c930: 0x511021
    ctx->pc = 0x10c930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10c934: 0x90427769
    ctx->pc = 0x10c934u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30569)));
    // 0x10c938: 0x30420008
    ctx->pc = 0x10c938u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x10c93c: 0x0
    ctx->pc = 0x10c93cu;
    // NOP
    // 0x10c940: 0x0
    ctx->pc = 0x10c940u;
    // NOP
    // 0x10c944: 0x1440fff8
    ctx->pc = 0x10C944u;
    {
        const bool branch_taken_0x10c944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10C948u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x10c944) {
            ctx->pc = 0x10C928u;
            goto label_10c928;
        }
    }
    ctx->pc = 0x10C94Cu;
    // 0x10c94c: 0x2402002d
    ctx->pc = 0x10c94cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
    // 0x10c950: 0x16220005
    ctx->pc = 0x10C950u;
    {
        const bool branch_taken_0x10c950 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x10C954u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
        if (branch_taken_0x10c950) {
            ctx->pc = 0x10C968u;
            goto label_10c968;
        }
    }
    ctx->pc = 0x10C958u;
    // 0x10c958: 0x82510000
    ctx->pc = 0x10c958u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10c95c: 0x26520001
    ctx->pc = 0x10c95cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x10c960: 0x10000005
    ctx->pc = 0x10C960u;
    {
        const bool branch_taken_0x10c960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C964u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10c960) {
            ctx->pc = 0x10C978u;
            goto label_10c978;
        }
    }
    ctx->pc = 0x10C968u;
label_10c968:
    // 0x10c968: 0x16220003
    ctx->pc = 0x10C968u;
    {
        const bool branch_taken_0x10c968 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x10c968) {
            ctx->pc = 0x10C978u;
            goto label_10c978;
        }
    }
    ctx->pc = 0x10C970u;
    // 0x10c970: 0x82510000
    ctx->pc = 0x10c970u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10c974: 0x26520001
    ctx->pc = 0x10c974u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_10c978:
    // 0x10c978: 0x12600003
    ctx->pc = 0x10C978u;
    {
        const bool branch_taken_0x10c978 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x10C97Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x10c978) {
            ctx->pc = 0x10C988u;
            goto label_10c988;
        }
    }
    ctx->pc = 0x10C980u;
    // 0x10c980: 0x1662000c
    ctx->pc = 0x10C980u;
    {
        const bool branch_taken_0x10c980 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x10c980) {
            ctx->pc = 0x10C9B4u;
            goto label_10c9b4;
        }
    }
    ctx->pc = 0x10C988u;
label_10c988:
    // 0x10c988: 0x24020030
    ctx->pc = 0x10c988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x10c98c: 0x16220009
    ctx->pc = 0x10C98Cu;
    {
        const bool branch_taken_0x10c98c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x10C990u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
        if (branch_taken_0x10c98c) {
            ctx->pc = 0x10C9B4u;
            goto label_10c9b4;
        }
    }
    ctx->pc = 0x10C994u;
    // 0x10c994: 0x82430000
    ctx->pc = 0x10c994u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10c998: 0x10620003
    ctx->pc = 0x10C998u;
    {
        const bool branch_taken_0x10c998 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x10C99Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
        if (branch_taken_0x10c998) {
            ctx->pc = 0x10C9A8u;
            goto label_10c9a8;
        }
    }
    ctx->pc = 0x10C9A0u;
    // 0x10c9a0: 0x14620004
    ctx->pc = 0x10C9A0u;
    {
        const bool branch_taken_0x10c9a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x10c9a0) {
            ctx->pc = 0x10C9B4u;
            goto label_10c9b4;
        }
    }
    ctx->pc = 0x10C9A8u;
label_10c9a8:
    // 0x10c9a8: 0x82510001
    ctx->pc = 0x10c9a8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x10c9ac: 0x26520002
    ctx->pc = 0x10c9acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 2));
    // 0x10c9b0: 0x24130010
    ctx->pc = 0x10c9b0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 16));
label_10c9b4:
    // 0x10c9b4: 0x16600004
    ctx->pc = 0x10C9B4u;
    {
        const bool branch_taken_0x10c9b4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x10C9B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x10c9b4) {
            ctx->pc = 0x10C9C8u;
            goto label_10c9c8;
        }
    }
    ctx->pc = 0x10C9BCu;
    // 0x10c9bc: 0x24130008
    ctx->pc = 0x10c9bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 8));
    // 0x10c9c0: 0x3a220030
    ctx->pc = 0x10c9c0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), 48));
    // 0x10c9c4: 0x62980b
    ctx->pc = 0x10c9c4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_10c9c8:
    // 0x10c9c8: 0x2402ffff
    ctx->pc = 0x10c9c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c9cc: 0x2107a
    ctx->pc = 0x10c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x10c9d0: 0x34148000
    ctx->pc = 0x10c9d0u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 0), 32768));
    // 0x10c9d4: 0x14a43c
    ctx->pc = 0x10c9d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
    // 0x10c9d8: 0x57a00a
    ctx->pc = 0x10c9d8u;
    if (GPR_U32(ctx, 23) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 2));
    // 0x10c9dc: 0x260802d
    ctx->pc = 0x10c9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9e0: 0x280202d
    ctx->pc = 0x10c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9e4: 0xc044370
    ctx->pc = 0x10C9E4u;
    SET_GPR_U32(ctx, 31, 0x10C9ECu);
    ctx->pc = 0x10C9E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00110DC0_0x110dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C9ECu; }
    }
    if (ctx->pc != 0x10C9ECu) { return; }
    ctx->pc = 0x10C9ECu;
    // 0x10c9ec: 0x280202d
    ctx->pc = 0x10c9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9f0: 0x2b03c
    ctx->pc = 0x10c9f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10c9f4: 0x16b03f
    ctx->pc = 0x10c9f4u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x10c9f8: 0xc044210
    ctx->pc = 0x10C9F8u;
    SET_GPR_U32(ctx, 31, 0x10CA00u);
    ctx->pc = 0x10C9FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00110840_0x110840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CA00u; }
    }
    if (ctx->pc != 0x10CA00u) { return; }
    ctx->pc = 0x10CA00u;
    // 0x10ca00: 0x302d
    ctx->pc = 0x10ca00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca04: 0x40a02d
    ctx->pc = 0x10ca04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca08: 0x10000015
    ctx->pc = 0x10CA08u;
    {
        const bool branch_taken_0x10ca08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CA0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ca08) {
            ctx->pc = 0x10CA60u;
            goto label_10ca60;
        }
    }
    ctx->pc = 0x10CA10u;
label_10ca10:
    // 0x10ca10: 0x233102a
    ctx->pc = 0x10ca10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x10ca14: 0x10400022
    ctx->pc = 0x10CA14u;
    {
        const bool branch_taken_0x10ca14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10ca14) {
            ctx->pc = 0x10CAA0u;
            goto label_10caa0;
        }
    }
    ctx->pc = 0x10CA1Cu;
    // 0x10ca1c: 0x4c00008
    ctx->pc = 0x10CA1Cu;
    {
        const bool branch_taken_0x10ca1c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x10CA20u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        if (branch_taken_0x10ca1c) {
            ctx->pc = 0x10CA40u;
            goto label_10ca40;
        }
    }
    ctx->pc = 0x10CA24u;
    // 0x10ca24: 0x5440000c
    ctx->pc = 0x10CA24u;
    {
        const bool branch_taken_0x10ca24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ca24) {
            ctx->pc = 0x10CA28u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x10CA58u;
            goto label_10ca58;
        }
    }
    ctx->pc = 0x10CA2Cu;
    // 0x10ca2c: 0x14b40006
    ctx->pc = 0x10CA2Cu;
    {
        const bool branch_taken_0x10ca2c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 20));
        ctx->pc = 0x10CA30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ca2c) {
            ctx->pc = 0x10CA48u;
            goto label_10ca48;
        }
    }
    ctx->pc = 0x10CA34u;
    // 0x10ca34: 0x2d1102a
    ctx->pc = 0x10ca34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 17)));
    // 0x10ca38: 0x10400003
    ctx->pc = 0x10CA38u;
    {
        const bool branch_taken_0x10ca38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10ca38) {
            ctx->pc = 0x10CA48u;
            goto label_10ca48;
        }
    }
    ctx->pc = 0x10CA40u;
label_10ca40:
    // 0x10ca40: 0x10000005
    ctx->pc = 0x10CA40u;
    {
        const bool branch_taken_0x10ca40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CA44u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10ca40) {
            ctx->pc = 0x10CA58u;
            goto label_10ca58;
        }
    }
    ctx->pc = 0x10CA48u;
label_10ca48:
    // 0x10ca48: 0xc043ea8
    ctx->pc = 0x10CA48u;
    SET_GPR_U32(ctx, 31, 0x10CA50u);
    ctx->pc = 0x10CA4Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA0_0x10faa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CA50u; }
    }
    if (ctx->pc != 0x10CA50u) { return; }
    ctx->pc = 0x10CA50u;
    // 0x10ca50: 0x24060001
    ctx->pc = 0x10ca50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ca54: 0x222282d
    ctx->pc = 0x10ca54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_10ca58:
    // 0x10ca58: 0x82510000
    ctx->pc = 0x10ca58u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10ca5c: 0x26520001
    ctx->pc = 0x10ca5cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_10ca60:
    // 0x10ca60: 0x3c040023
    ctx->pc = 0x10ca60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x10ca64: 0x912021
    ctx->pc = 0x10ca64u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x10ca68: 0x90847769
    ctx->pc = 0x10ca68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30569)));
    // 0x10ca6c: 0x30820004
    ctx->pc = 0x10ca6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 4));
    // 0x10ca70: 0x10400003
    ctx->pc = 0x10CA70u;
    {
        const bool branch_taken_0x10ca70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CA74u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x10ca70) {
            ctx->pc = 0x10CA80u;
            goto label_10ca80;
        }
    }
    ctx->pc = 0x10CA78u;
    // 0x10ca78: 0x1000ffe5
    ctx->pc = 0x10CA78u;
    {
        const bool branch_taken_0x10ca78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CA7Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967248));
        if (branch_taken_0x10ca78) {
            ctx->pc = 0x10CA10u;
            goto label_10ca10;
        }
    }
    ctx->pc = 0x10CA80u;
label_10ca80:
    // 0x10ca80: 0x10400007
    ctx->pc = 0x10CA80u;
    {
        const bool branch_taken_0x10ca80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CA84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967241));
        if (branch_taken_0x10ca80) {
            ctx->pc = 0x10CAA0u;
            goto label_10caa0;
        }
    }
    ctx->pc = 0x10CA88u;
    // 0x10ca88: 0x2623ffa9
    ctx->pc = 0x10ca88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967209));
    // 0x10ca8c: 0x30840001
    ctx->pc = 0x10ca8cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x10ca90: 0x40882d
    ctx->pc = 0x10ca90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca94: 0x1000ffde
    ctx->pc = 0x10CA94u;
    {
        const bool branch_taken_0x10ca94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CA98u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        if (branch_taken_0x10ca94) {
            ctx->pc = 0x10CA10u;
            goto label_10ca10;
        }
    }
    ctx->pc = 0x10CA9Cu;
    // 0x10ca9c: 0x0
    ctx->pc = 0x10ca9cu;
    // NOP
label_10caa0:
    // 0x10caa0: 0x4c1000b
    ctx->pc = 0x10CAA0u;
    {
        const bool branch_taken_0x10caa0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x10CAA4u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
        if (branch_taken_0x10caa0) {
            ctx->pc = 0x10CAD0u;
            goto label_10cad0;
        }
    }
    ctx->pc = 0x10CAA8u;
    // 0x10caa8: 0x2403ffff
    ctx->pc = 0x10caa8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10caac: 0x3187a
    ctx->pc = 0x10caacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x10cab0: 0x34058000
    ctx->pc = 0x10cab0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x10cab4: 0x52c3c
    ctx->pc = 0x10cab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x10cab8: 0x77280a
    ctx->pc = 0x10cab8u;
    if (GPR_U32(ctx, 23) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x10cabc: 0x8fa30000
    ctx->pc = 0x10cabcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cac0: 0x24020022
    ctx->pc = 0x10cac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x10cac4: 0x10000003
    ctx->pc = 0x10CAC4u;
    {
        const bool branch_taken_0x10cac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CAC8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x10cac4) {
            ctx->pc = 0x10CAD4u;
            goto label_10cad4;
        }
    }
    ctx->pc = 0x10CACCu;
    // 0x10cacc: 0x0
    ctx->pc = 0x10caccu;
    // NOP
label_10cad0:
    // 0x10cad0: 0x57280b
    ctx->pc = 0x10cad0u;
    if (GPR_U32(ctx, 23) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_10cad4:
    // 0x10cad4: 0x13c00003
    ctx->pc = 0x10CAD4u;
    {
        const bool branch_taken_0x10cad4 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x10CAD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
        if (branch_taken_0x10cad4) {
            ctx->pc = 0x10CAE4u;
            goto label_10cae4;
        }
    }
    ctx->pc = 0x10CADCu;
    // 0x10cadc: 0x46a80b
    ctx->pc = 0x10cadcu;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 2));
    // 0x10cae0: 0xafd50000
    ctx->pc = 0x10cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_10cae4:
    // 0x10cae4: 0xdfb00010
    ctx->pc = 0x10cae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cae8: 0xa0102d
    ctx->pc = 0x10cae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10caec: 0xdfb10018
    ctx->pc = 0x10caecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10caf0: 0xdfb20020
    ctx->pc = 0x10caf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10caf4: 0xdfb30028
    ctx->pc = 0x10caf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10caf8: 0xdfb40030
    ctx->pc = 0x10caf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10cafc: 0xdfb50038
    ctx->pc = 0x10cafcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10cb00: 0xdfb60040
    ctx->pc = 0x10cb00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cb04: 0xdfb70048
    ctx->pc = 0x10cb04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10cb08: 0xdfbe0050
    ctx->pc = 0x10cb08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cb0c: 0xdfbf0058
    ctx->pc = 0x10cb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10cb10: 0x3e00008
    ctx->pc = 0x10CB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C928u: goto label_10c928;
            case 0x10C968u: goto label_10c968;
            case 0x10C978u: goto label_10c978;
            case 0x10C988u: goto label_10c988;
            case 0x10C9A8u: goto label_10c9a8;
            case 0x10C9B4u: goto label_10c9b4;
            case 0x10C9C8u: goto label_10c9c8;
            case 0x10CA10u: goto label_10ca10;
            case 0x10CA40u: goto label_10ca40;
            case 0x10CA48u: goto label_10ca48;
            case 0x10CA58u: goto label_10ca58;
            case 0x10CA60u: goto label_10ca60;
            case 0x10CA80u: goto label_10ca80;
            case 0x10CAA0u: goto label_10caa0;
            case 0x10CAD0u: goto label_10cad0;
            case 0x10CAD4u: goto label_10cad4;
            case 0x10CAE4u: goto label_10cae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10CB18u;
}
