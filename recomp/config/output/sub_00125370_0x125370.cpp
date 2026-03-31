#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00125370
// Address: 0x125370 - 0x125458
void sub_00125370_0x125370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125370u;

    // 0x125370: 0x27bdfff0
    ctx->pc = 0x125370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125374: 0x24850048
    ctx->pc = 0x125374u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 72));
    // 0x125378: 0xffbf0000
    ctx->pc = 0x125378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12537c: 0x8cae0008
    ctx->pc = 0x12537cu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x125380: 0x8ca60004
    ctx->pc = 0x125380u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x125384: 0x51c00001
    ctx->pc = 0x125384u;
    {
        const bool branch_taken_0x125384 = (GPR_U32(ctx, 14) == GPR_U32(ctx, 0));
        if (branch_taken_0x125384) {
            ctx->pc = 0x125388u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x12538Cu;
            goto label_12538c;
        }
    }
    ctx->pc = 0x12538Cu;
label_12538c:
    // 0x12538c: 0x8caf0018
    ctx->pc = 0x12538cu;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x125390: 0xce001a
    ctx->pc = 0x125390u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x125394: 0x8ca80020
    ctx->pc = 0x125394u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x125398: 0x8ca90010
    ctx->pc = 0x125398u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12539c: 0x1e81023
    ctx->pc = 0x12539cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1253a0: 0x8ca70028
    ctx->pc = 0x1253a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1253a4: 0x491021
    ctx->pc = 0x1253a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1253a8: 0x2442ffff
    ctx->pc = 0x1253a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1253ac: 0xe91821
    ctx->pc = 0x1253acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1253b0: 0x2463ffff
    ctx->pc = 0x1253b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1253b4: 0x8cac0024
    ctx->pc = 0x1253b4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1253b8: 0xec382a
    ctx->pc = 0x1253b8u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 12)));
    // 0x1253bc: 0x3012
    ctx->pc = 0x1253bcu;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x1253c0: 0x49001a
    ctx->pc = 0x1253c0u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1253c4: 0xc0502d
    ctx->pc = 0x1253c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253c8: 0x1012
    ctx->pc = 0x1253c8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1253cc: 0x69001a
    ctx->pc = 0x1253ccu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1253d0: 0x40582d
    ctx->pc = 0x1253d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253d4: 0x6812
    ctx->pc = 0x1253d4u;
    SET_GPR_U32(ctx, 13, ctx->lo);
    // 0x1253d8: 0x2810
    ctx->pc = 0x1253d8u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x1253dc: 0x1691818
    ctx->pc = 0x1253dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1253e0: 0x1252823
    ctx->pc = 0x1253e0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1253e4: 0x1ab102a
    ctx->pc = 0x1253e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 11)));
    // 0x1253e8: 0x24a5ffff
    ctx->pc = 0x1253e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1253ec: 0x10400004
    ctx->pc = 0x1253ECu;
    {
        const bool branch_taken_0x1253ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1253F0u;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        if (branch_taken_0x1253ec) {
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x1253F4u;
    // 0x1253f4: 0x1051023
    ctx->pc = 0x1253f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1253f8: 0x4f102a
    ctx->pc = 0x1253f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 15)));
    // 0x1253fc: 0x1625821
    ctx->pc = 0x1253fcu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_125400:
    // 0x125400: 0xe51018
    ctx->pc = 0x125400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x125404: 0x24060002
    ctx->pc = 0x125404u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x125408: 0x51200001
    ctx->pc = 0x125408u;
    {
        const bool branch_taken_0x125408 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x125408) {
            ctx->pc = 0x12540Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x125410u;
            goto label_125410;
        }
    }
    ctx->pc = 0x125410u;
label_125410:
    // 0x125410: 0x4c6021
    ctx->pc = 0x125410u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x125414: 0x189001a
    ctx->pc = 0x125414u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x125418: 0x2812
    ctx->pc = 0x125418u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x12541c: 0xaa102a
    ctx->pc = 0x12541cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 10)));
    // 0x125420: 0xa2500b
    ctx->pc = 0x125420u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 5));
    // 0x125424: 0x1aa182a
    ctx->pc = 0x125424u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 13), GPR_S32(ctx, 10)));
    // 0x125428: 0x1a3500b
    ctx->pc = 0x125428u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 13));
    // 0x12542c: 0x16a102a
    ctx->pc = 0x12542cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 10)));
    // 0x125430: 0x15c60005
    ctx->pc = 0x125430u;
    {
        const bool branch_taken_0x125430 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 6));
        ctx->pc = 0x125434u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 11));
        if (branch_taken_0x125430) {
            ctx->pc = 0x125448u;
            goto label_125448;
        }
    }
    ctx->pc = 0x125438u;
    // 0x125438: 0xdfbf0000
    ctx->pc = 0x125438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12543c: 0x140282d
    ctx->pc = 0x12543cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125440: 0x80494c6
    ctx->pc = 0x125440u;
    ctx->pc = 0x125444u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x125318u;
    entry_125318_0x125370(rdram, ctx, runtime); return;
    ctx->pc = 0x125448u;
label_125448:
    // 0x125448: 0xdfbf0000
    ctx->pc = 0x125448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12544c: 0x140282d
    ctx->pc = 0x12544cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125450: 0x80494b4
    ctx->pc = 0x125450u;
    ctx->pc = 0x125454u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1252D0u;
    entry_1252d0_0x125318(rdram, ctx, runtime); return;
    ctx->pc = 0x125458u;
}
