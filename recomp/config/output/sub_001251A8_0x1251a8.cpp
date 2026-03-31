#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001251A8
// Address: 0x1251a8 - 0x125230
void sub_001251A8_0x1251a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1251a8u;

    // 0x1251a8: 0x80382d
    ctx->pc = 0x1251a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251ac: 0x84e20098
    ctx->pc = 0x1251acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x1251b0: 0x1440000d
    ctx->pc = 0x1251B0u;
    {
        const bool branch_taken_0x1251b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1251B4u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1251b0) {
            ctx->pc = 0x1251E8u;
            goto label_1251e8;
        }
    }
    ctx->pc = 0x1251B8u;
    // 0x1251b8: 0x80e2000f
    ctx->pc = 0x1251b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
    // 0x1251bc: 0xace80048
    ctx->pc = 0x1251bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x1251c0: 0xc2001a
    ctx->pc = 0x1251c0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1251c4: 0x50400001
    ctx->pc = 0x1251C4u;
    {
        const bool branch_taken_0x1251c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1251c4) {
            ctx->pc = 0x1251C8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1251CCu;
            goto label_1251cc;
        }
    }
    ctx->pc = 0x1251CCu;
label_1251cc:
    // 0x1251cc: 0xace00074
    ctx->pc = 0x1251ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x1251d0: 0xace00094
    ctx->pc = 0x1251d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x1251d4: 0xace00090
    ctx->pc = 0x1251d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x1251d8: 0x1812
    ctx->pc = 0x1251d8u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1251dc: 0x3e00008
    ctx->pc = 0x1251DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1251E0u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1251CCu: goto label_1251cc;
            case 0x1251E8u: goto label_1251e8;
            case 0x125214u: goto label_125214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1251E4u;
    // 0x1251e4: 0x0
    ctx->pc = 0x1251e4u;
    // NOP
label_1251e8:
    // 0x1251e8: 0x80e2000d
    ctx->pc = 0x1251e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x1251ec: 0x80e5000e
    ctx->pc = 0x1251ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x1251f0: 0x28430000
    ctx->pc = 0x1251f0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
    // 0x1251f4: 0x24440007
    ctx->pc = 0x1251f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7));
    // 0x1251f8: 0x83100b
    ctx->pc = 0x1251f8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x1251fc: 0xace80048
    ctx->pc = 0x1251fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x125200: 0x210c3
    ctx->pc = 0x125200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x125204: 0x451018
    ctx->pc = 0x125204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x125208: 0x70c2001a
    ctx->pc = 0x125208u;
    { int32_t divisor = GPR_S32(ctx, 2); if (divisor != 0) { ctx->lo1 = (uint32_t)(GPR_S32(ctx, 6) / divisor); ctx->hi1 = (uint32_t)(GPR_S32(ctx, 2) % divisor); } else { ctx->lo1= (GPR_S32(ctx,6) < 0) ? 1 : -1; ctx->hi1=GPR_S32(ctx,2); } }
    // 0x12520c: 0x50400001
    ctx->pc = 0x12520Cu;
    {
        const bool branch_taken_0x12520c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12520c) {
            ctx->pc = 0x125210u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x125214u;
            goto label_125214;
        }
    }
    ctx->pc = 0x125214u;
label_125214:
    // 0x125214: 0xace00094
    ctx->pc = 0x125214u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x125218: 0xace00074
    ctx->pc = 0x125218u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x12521c: 0xace00090
    ctx->pc = 0x12521cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x125220: 0x70001812
    ctx->pc = 0x125220u;
    SET_GPR_U32(ctx, 3, ctx->lo1);
    // 0x125224: 0x3e00008
    ctx->pc = 0x125224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125228u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1251CCu: goto label_1251cc;
            case 0x1251E8u: goto label_1251e8;
            case 0x125214u: goto label_125214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12522Cu;
    // 0x12522c: 0x0
    ctx->pc = 0x12522cu;
    // NOP
}
