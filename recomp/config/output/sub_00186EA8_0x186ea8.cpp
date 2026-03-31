#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00186EA8
// Address: 0x186ea8 - 0x186ef0
void sub_00186EA8_0x186ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186ea8u;

    // 0x186ea8: 0x80102d
    ctx->pc = 0x186ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186eac: 0x27bdfff0
    ctx->pc = 0x186eacu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186eb0: 0x21840
    ctx->pc = 0x186eb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x186eb4: 0xffbf0000
    ctx->pc = 0x186eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186eb8: 0x621821
    ctx->pc = 0x186eb8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186ebc: 0x31940
    ctx->pc = 0x186ebcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x186ec0: 0xdfbf0000
    ctx->pc = 0x186ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186ec4: 0x621821
    ctx->pc = 0x186ec4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186ec8: 0x31880
    ctx->pc = 0x186ec8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x186ecc: 0x3c020023
    ctx->pc = 0x186eccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x186ed0: 0x431021
    ctx->pc = 0x186ed0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186ed4: 0x9442fa42
    ctx->pc = 0x186ed4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965826)));
    // 0x186ed8: 0x470018
    ctx->pc = 0x186ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x186edc: 0x3812
    ctx->pc = 0x186edcu;
    SET_GPR_U32(ctx, 7, ctx->lo);
    // 0x186ee0: 0xc20018
    ctx->pc = 0x186ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x186ee4: 0x3012
    ctx->pc = 0x186ee4u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x186ee8: 0x80620d2
    ctx->pc = 0x186EE8u;
    ctx->pc = 0x186EECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x188348u;
    sub_00188348_0x188348(rdram, ctx, runtime); return;
    ctx->pc = 0x186EF0u;
}
