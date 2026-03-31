#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C2000
// Address: 0x1c2000 - 0x1c2120
void sub_001C2000_0x1c2000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c2000u;

    // 0x1c2000: 0x27bdff10
    ctx->pc = 0x1c2000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1c2004: 0xffbf0050
    ctx->pc = 0x1c2004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c2008: 0x7fb40040
    ctx->pc = 0x1c2008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c200c: 0x7fb30030
    ctx->pc = 0x1c200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c2010: 0xc0a02d
    ctx->pc = 0x1c2010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2014: 0x7fb20020
    ctx->pc = 0x1c2014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c2018: 0xe0982d
    ctx->pc = 0x1c2018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c201c: 0x7fb10010
    ctx->pc = 0x1c201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2020: 0x902d
    ctx->pc = 0x1c2020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2024: 0xc06d57c
    ctx->pc = 0x1C2024u;
    SET_GPR_U32(ctx, 31, 0x1C202Cu);
    ctx->pc = 0x1C2028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1B55F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55F0_0x1b55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C202Cu; }
    }
    if (ctx->pc != 0x1C202Cu) { return; }
    ctx->pc = 0x1C202Cu;
    // 0x1c202c: 0x10000030
    ctx->pc = 0x1C202Cu;
    {
        const bool branch_taken_0x1c202c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2030u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x1c202c) {
            ctx->pc = 0x1C20F0u;
            goto label_1c20f0;
        }
    }
    ctx->pc = 0x1C2034u;
label_1c2034:
    // 0x1c2034: 0xc070898
    ctx->pc = 0x1C2034u;
    SET_GPR_U32(ctx, 31, 0x1C203Cu);
    ctx->pc = 0x1C2038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1C2260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2260_0x1c2260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C203Cu; }
    }
    if (ctx->pc != 0x1C203Cu) { return; }
    ctx->pc = 0x1C203Cu;
    // 0x1c203c: 0x14400028
    ctx->pc = 0x1C203Cu;
    {
        const bool branch_taken_0x1c203c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C2040u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c203c) {
            ctx->pc = 0x1C20E0u;
            goto label_1c20e0;
        }
    }
    ctx->pc = 0x1C2044u;
    // 0x1c2044: 0x280202d
    ctx->pc = 0x1c2044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2048: 0xc0708b0
    ctx->pc = 0x1C2048u;
    SET_GPR_U32(ctx, 31, 0x1C2050u);
    ctx->pc = 0x1C204Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1C22C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22C0_0x1c22c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2050u; }
    }
    if (ctx->pc != 0x1C2050u) { return; }
    ctx->pc = 0x1C2050u;
    // 0x1c2050: 0x16600005
    ctx->pc = 0x1C2050u;
    {
        const bool branch_taken_0x1c2050 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C2054u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2050) {
            ctx->pc = 0x1C2068u;
            goto label_1c2068;
        }
    }
    ctx->pc = 0x1C2058u;
    // 0x1c2058: 0xc06d5a8
    ctx->pc = 0x1C2058u;
    SET_GPR_U32(ctx, 31, 0x1C2060u);
    ctx->pc = 0x1C205Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1B56A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B56A0_0x1b56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2060u; }
    }
    if (ctx->pc != 0x1C2060u) { return; }
    ctx->pc = 0x1C2060u;
    // 0x1c2060: 0x10000022
    ctx->pc = 0x1C2060u;
    {
        const bool branch_taken_0x1c2060 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2060) {
            ctx->pc = 0x1C20ECu;
            goto label_1c20ec;
        }
    }
    ctx->pc = 0x1C2068u;
label_1c2068:
    // 0x1c2068: 0x27b00060
    ctx->pc = 0x1c2068u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c206c: 0x10000017
    ctx->pc = 0x1C206Cu;
    {
        const bool branch_taken_0x1c206c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2070u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 236));
        if (branch_taken_0x1c206c) {
            ctx->pc = 0x1C20CCu;
            goto label_1c20cc;
        }
    }
    ctx->pc = 0x1C2074u;
label_1c2074:
    // 0x1c2074: 0xc06db50
    ctx->pc = 0x1C2074u;
    SET_GPR_U32(ctx, 31, 0x1C207Cu);
    ctx->pc = 0x1C2078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B6D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D40_0x1b6d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C207Cu; }
    }
    if (ctx->pc != 0x1C207Cu) { return; }
    ctx->pc = 0x1C207Cu;
    // 0x1c207c: 0x30430003
    ctx->pc = 0x1c207cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
    // 0x1c2080: 0x10000006
    ctx->pc = 0x1C2080u;
    {
        const bool branch_taken_0x1c2080 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2084u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2080) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C2088u;
label_1c2088:
    // 0x1c2088: 0x82020000
    ctx->pc = 0x1c2088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c208c: 0x24840001
    ctx->pc = 0x1c208cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c2090: 0xa2220000
    ctx->pc = 0x1c2090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c2094: 0x26100001
    ctx->pc = 0x1c2094u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c2098: 0x26310001
    ctx->pc = 0x1c2098u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1c209c:
    // 0x1c209c: 0x83102a
    ctx->pc = 0x1c209cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1c20a0: 0x1440fff9
    ctx->pc = 0x1C20A0u;
    {
        const bool branch_taken_0x1c20a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c20a0) {
            ctx->pc = 0x1C2088u;
            goto label_1c2088;
        }
    }
    ctx->pc = 0x1C20A8u;
    // 0x1c20a8: 0x27a400ec
    ctx->pc = 0x1c20a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 236));
    // 0x1c20ac: 0xc06d5a8
    ctx->pc = 0x1C20ACu;
    SET_GPR_U32(ctx, 31, 0x1C20B4u);
    ctx->pc = 0x1C20B0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1B56A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B56A0_0x1b56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20B4u; }
    }
    if (ctx->pc != 0x1C20B4u) { return; }
    ctx->pc = 0x1C20B4u;
    // 0x1c20b4: 0x26520001
    ctx->pc = 0x1c20b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c20b8: 0x253102a
    ctx->pc = 0x1c20b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x1c20bc: 0x14400003
    ctx->pc = 0x1C20BCu;
    {
        const bool branch_taken_0x1c20bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C20C0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 236));
        if (branch_taken_0x1c20bc) {
            ctx->pc = 0x1C20CCu;
            goto label_1c20cc;
        }
    }
    ctx->pc = 0x1C20C4u;
    // 0x1c20c4: 0x1000000d
    ctx->pc = 0x1C20C4u;
    {
        const bool branch_taken_0x1c20c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C20C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c20c4) {
            ctx->pc = 0x1C20FCu;
            goto label_1c20fc;
        }
    }
    ctx->pc = 0x1C20CCu;
label_1c20cc:
    // 0x1c20cc: 0x92020000
    ctx->pc = 0x1c20ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c20d0: 0x1440ffe8
    ctx->pc = 0x1C20D0u;
    {
        const bool branch_taken_0x1c20d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c20d0) {
            ctx->pc = 0x1C2074u;
            goto label_1c2074;
        }
    }
    ctx->pc = 0x1C20D8u;
    // 0x1c20d8: 0x10000004
    ctx->pc = 0x1C20D8u;
    {
        const bool branch_taken_0x1c20d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c20d8) {
            ctx->pc = 0x1C20ECu;
            goto label_1c20ec;
        }
    }
    ctx->pc = 0x1C20E0u;
label_1c20e0:
    // 0x1c20e0: 0xc0708d8
    ctx->pc = 0x1C20E0u;
    SET_GPR_U32(ctx, 31, 0x1C20E8u);
    ctx->pc = 0x1C20E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1C2360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2360_0x1c2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20E8u; }
    }
    if (ctx->pc != 0x1C20E8u) { return; }
    ctx->pc = 0x1C20E8u;
    // 0x1c20e8: 0x200a02d
    ctx->pc = 0x1c20e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c20ec:
    // 0x1c20ec: 0x82820000
    ctx->pc = 0x1c20ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1c20f0:
    // 0x1c20f0: 0x1440ffd0
    ctx->pc = 0x1C20F0u;
    {
        const bool branch_taken_0x1c20f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C20F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c20f0) {
            ctx->pc = 0x1C2034u;
            goto label_1c2034;
        }
    }
    ctx->pc = 0x1C20F8u;
    // 0x1c20f8: 0x102d
    ctx->pc = 0x1c20f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c20fc:
    // 0x1c20fc: 0xdfbf0050
    ctx->pc = 0x1c20fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2100: 0x7bb40040
    ctx->pc = 0x1c2100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2104: 0x7bb30030
    ctx->pc = 0x1c2104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2108: 0x7bb20020
    ctx->pc = 0x1c2108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c210c: 0x7bb10010
    ctx->pc = 0x1c210cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2110: 0x7bb00000
    ctx->pc = 0x1c2110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2114: 0x3e00008
    ctx->pc = 0x1C2114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2118u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2034u: goto label_1c2034;
            case 0x1C2068u: goto label_1c2068;
            case 0x1C2074u: goto label_1c2074;
            case 0x1C2088u: goto label_1c2088;
            case 0x1C209Cu: goto label_1c209c;
            case 0x1C20CCu: goto label_1c20cc;
            case 0x1C20E0u: goto label_1c20e0;
            case 0x1C20ECu: goto label_1c20ec;
            case 0x1C20F0u: goto label_1c20f0;
            case 0x1C20FCu: goto label_1c20fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C211Cu;
    // 0x1c211c: 0x0
    ctx->pc = 0x1c211cu;
    // NOP
}
