#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00186E60
// Address: 0x186e60 - 0x186ea8
void sub_00186E60_0x186e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186e60u;

    // 0x186e60: 0x80102d
    ctx->pc = 0x186e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e64: 0x27bdfff0
    ctx->pc = 0x186e64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186e68: 0x21840
    ctx->pc = 0x186e68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x186e6c: 0xffbf0000
    ctx->pc = 0x186e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186e70: 0x621821
    ctx->pc = 0x186e70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186e74: 0x31940
    ctx->pc = 0x186e74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x186e78: 0xdfbf0000
    ctx->pc = 0x186e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e7c: 0x621821
    ctx->pc = 0x186e7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186e80: 0x31880
    ctx->pc = 0x186e80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x186e84: 0x3c020023
    ctx->pc = 0x186e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x186e88: 0x431021
    ctx->pc = 0x186e88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186e8c: 0x9442fa42
    ctx->pc = 0x186e8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965826)));
    // 0x186e90: 0x470018
    ctx->pc = 0x186e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x186e94: 0x3812
    ctx->pc = 0x186e94u;
    SET_GPR_U32(ctx, 7, ctx->lo);
    // 0x186e98: 0xc20018
    ctx->pc = 0x186e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x186e9c: 0x3012
    ctx->pc = 0x186e9cu;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x186ea0: 0x80620c6
    ctx->pc = 0x186EA0u;
    ctx->pc = 0x186EA4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x188318u;
    entry_188318_0x188348(rdram, ctx, runtime); return;
    ctx->pc = 0x186EA8u;
}
