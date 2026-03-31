#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CB7B0
// Address: 0x1cb7b0 - 0x1cb800
void sub_001CB7B0_0x1cb7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cb7b0u;

    // 0x1cb7b0: 0x24c2ffff
    ctx->pc = 0x1cb7b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1cb7b4: 0x382d
    ctx->pc = 0x1cb7b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7b8: 0x822021
    ctx->pc = 0x1cb7b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cb7bc: 0x1000000a
    ctx->pc = 0x1CB7BCu;
    {
        const bool branch_taken_0x1cb7bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB7C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1cb7bc) {
            ctx->pc = 0x1CB7E8u;
            goto label_1cb7e8;
        }
    }
    ctx->pc = 0x1CB7C4u;
label_1cb7c4:
    // 0x1cb7c4: 0xa3001a
    ctx->pc = 0x1cb7c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1cb7c8: 0x24e70001
    ctx->pc = 0x1cb7c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cb7cc: 0x0
    ctx->pc = 0x1cb7ccu;
    // NOP
    // 0x1cb7d0: 0x1010
    ctx->pc = 0x1cb7d0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x1cb7d4: 0xa3001a
    ctx->pc = 0x1cb7d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1cb7d8: 0x24420030
    ctx->pc = 0x1cb7d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
    // 0x1cb7dc: 0xa0820000
    ctx->pc = 0x1cb7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb7e0: 0x2484ffff
    ctx->pc = 0x1cb7e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cb7e4: 0x2812
    ctx->pc = 0x1cb7e4u;
    SET_GPR_U32(ctx, 5, ctx->lo);
label_1cb7e8:
    // 0x1cb7e8: 0xe6102a
    ctx->pc = 0x1cb7e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x1cb7ec: 0x1440fff5
    ctx->pc = 0x1CB7ECu;
    {
        const bool branch_taken_0x1cb7ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB7F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7ec) {
            ctx->pc = 0x1CB7C4u;
            goto label_1cb7c4;
        }
    }
    ctx->pc = 0x1CB7F4u;
    // 0x1cb7f4: 0x3e00008
    ctx->pc = 0x1CB7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB7C4u: goto label_1cb7c4;
            case 0x1CB7E8u: goto label_1cb7e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB7FCu;
    // 0x1cb7fc: 0x0
    ctx->pc = 0x1cb7fcu;
    // NOP
}
