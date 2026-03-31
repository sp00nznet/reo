#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001874A8
// Address: 0x1874a8 - 0x187520
void sub_001874A8_0x1874a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1874a8u;

    // 0x1874a8: 0x41040
    ctx->pc = 0x1874a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1874ac: 0x382d
    ctx->pc = 0x1874acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874b0: 0x441021
    ctx->pc = 0x1874b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1874b4: 0x21140
    ctx->pc = 0x1874b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x1874b8: 0x441021
    ctx->pc = 0x1874b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1874bc: 0x21080
    ctx->pc = 0x1874bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1874c0: 0x3c010023
    ctx->pc = 0x1874c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1874c4: 0x2421fa18
    ctx->pc = 0x1874c4u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 4294965784));
    // 0x1874c8: 0x221021
    ctx->pc = 0x1874c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1874cc: 0x9444002a
    ctx->pc = 0x1874ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x1874d0: 0x244600d0
    ctx->pc = 0x1874d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 208));
    // 0x1874d4: 0x9443002c
    ctx->pc = 0x1874d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1874d8: 0xa42818
    ctx->pc = 0x1874d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1874dc: 0x50600001
    ctx->pc = 0x1874DCu;
    {
        const bool branch_taken_0x1874dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1874dc) {
            ctx->pc = 0x1874E0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1874E4u;
            goto label_1874e4;
        }
    }
    ctx->pc = 0x1874E4u;
label_1874e4:
    // 0x1874e4: 0xa3001a
    ctx->pc = 0x1874e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1874e8: 0x2812
    ctx->pc = 0x1874e8u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x1874ec: 0x8cc30000
    ctx->pc = 0x1874ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1874f0:
    // 0x1874f0: 0x24c60004
    ctx->pc = 0x1874f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1874f4: 0x10650008
    ctx->pc = 0x1874F4u;
    {
        const bool branch_taken_0x1874f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x1874F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1874f4) {
            ctx->pc = 0x187518u;
            goto label_187518;
        }
    }
    ctx->pc = 0x1874FCu;
    // 0x1874fc: 0x24e70001
    ctx->pc = 0x1874fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x187500: 0x28e20020
    ctx->pc = 0x187500u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 32));
    // 0x187504: 0x0
    ctx->pc = 0x187504u;
    // NOP
    // 0x187508: 0x0
    ctx->pc = 0x187508u;
    // NOP
    // 0x18750c: 0x5440fff8
    ctx->pc = 0x18750Cu;
    {
        const bool branch_taken_0x18750c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18750c) {
            ctx->pc = 0x187510u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x1874F0u;
            goto label_1874f0;
        }
    }
    ctx->pc = 0x187514u;
    // 0x187514: 0x102d
    ctx->pc = 0x187514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187518:
    // 0x187518: 0x3e00008
    ctx->pc = 0x187518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1874E4u: goto label_1874e4;
            case 0x1874F0u: goto label_1874f0;
            case 0x187518u: goto label_187518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187520u;
}
