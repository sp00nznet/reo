#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132FE8
// Address: 0x132fe8 - 0x133058
void sub_00132FE8_0x132fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132fe8u;

    // 0x132fe8: 0x3e00008
    ctx->pc = 0x132FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132FF0u;
    // 0x132ff0: 0x3e00008
    ctx->pc = 0x132FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132FF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132FF8u;
    // 0x132ff8: 0x27bdfff0
    ctx->pc = 0x132ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132ffc: 0xffbf0000
    ctx->pc = 0x132ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133000: 0x8c840004
    ctx->pc = 0x133000u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x133004: 0xdfbf0000
    ctx->pc = 0x133004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133008: 0x804b314
    ctx->pc = 0x133008u;
    ctx->pc = 0x13300Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12CC50u;
    sub_0012CC50_0x12cc50(rdram, ctx, runtime); return;
    ctx->pc = 0x133010u;
    // 0x133010: 0x3e00008
    ctx->pc = 0x133010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133018u;
    // 0x133018: 0x3e00008
    ctx->pc = 0x133018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13301Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133020u;
    // 0x133020: 0x3e00008
    ctx->pc = 0x133020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133028u;
    // 0x133028: 0x3e00008
    ctx->pc = 0x133028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133030u;
    // 0x133030: 0x3e00008
    ctx->pc = 0x133030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133038u;
    // 0x133038: 0x3e00008
    ctx->pc = 0x133038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133040u;
    // 0x133040: 0x27bdfff0
    ctx->pc = 0x133040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133044: 0xffbf0000
    ctx->pc = 0x133044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133048: 0xdfbf0000
    ctx->pc = 0x133048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13304c: 0x804a02a
    ctx->pc = 0x13304Cu;
    ctx->pc = 0x133050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280A8u;
    entry_1280a8_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x133054u;
    // 0x133054: 0x0
    ctx->pc = 0x133054u;
    // NOP
}
