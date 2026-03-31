#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010FAA0
// Address: 0x10faa0 - 0x10fb18
void sub_0010FAA0_0x10faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10faa0u;

    // 0x10faa0: 0x5103c
    ctx->pc = 0x10faa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10faa4: 0x2103f
    ctx->pc = 0x10faa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10faa8: 0x5283f
    ctx->pc = 0x10faa8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x10faac: 0x4183c
    ctx->pc = 0x10faacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10fab0: 0x3183f
    ctx->pc = 0x10fab0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10fab4: 0x620019
    ctx->pc = 0x10fab4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_U32(ctx, 0, (uint32_t)result); }
    // 0x10fab8: 0x3012
    ctx->pc = 0x10fab8u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x10fabc: 0x4010
    ctx->pc = 0x10fabcu;
    SET_GPR_U32(ctx, 8, ctx->hi);
    // 0x10fac0: 0x6303c
    ctx->pc = 0x10fac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10fac4: 0x4203f
    ctx->pc = 0x10fac4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x10fac8: 0x651818
    ctx->pc = 0x10fac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x10facc: 0x2405ffff
    ctx->pc = 0x10faccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10fad0: 0x5283c
    ctx->pc = 0x10fad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10fad4: 0x70822018
    ctx->pc = 0x10fad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x10fad8: 0x6303e
    ctx->pc = 0x10fad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x10fadc: 0x1254824
    ctx->pc = 0x10fadcu;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x10fae0: 0x3c07ffff
    ctx->pc = 0x10fae0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)65535 << 16));
    // 0x10fae4: 0x7383e
    ctx->pc = 0x10fae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x10fae8: 0x1264825
    ctx->pc = 0x10fae8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x10faec: 0x8403c
    ctx->pc = 0x10faecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x10faf0: 0x1274824
    ctx->pc = 0x10faf0u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x10faf4: 0x1284825
    ctx->pc = 0x10faf4u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x10faf8: 0x641821
    ctx->pc = 0x10faf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10fafc: 0x9103f
    ctx->pc = 0x10fafcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x10fb00: 0x1273824
    ctx->pc = 0x10fb00u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x10fb04: 0x431021
    ctx->pc = 0x10fb04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10fb08: 0x2103c
    ctx->pc = 0x10fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10fb0c: 0x3e00008
    ctx->pc = 0x10FB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB10u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FB14u;
    // 0x10fb14: 0x0
    ctx->pc = 0x10fb14u;
    // NOP
}
