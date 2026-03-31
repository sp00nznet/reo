#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001704D0
// Address: 0x1704d0 - 0x170518
void sub_001704D0_0x1704d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1704d0u;

    // 0x1704d0: 0x8c821b30
    ctx->pc = 0x1704d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x1704d4: 0x248414e0
    ctx->pc = 0x1704d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5344));
    // 0x1704d8: 0x382d
    ctx->pc = 0x1704d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704dc: 0x2446013c
    ctx->pc = 0x1704dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 316));
    // 0x1704e0: 0x24830004
    ctx->pc = 0x1704e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1704e4: 0x0
    ctx->pc = 0x1704e4u;
    // NOP
label_1704e8:
    // 0x1704e8: 0x2484005c
    ctx->pc = 0x1704e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 92));
    // 0x1704ec: 0xc0102d
    ctx->pc = 0x1704ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704f0: 0x10650007
    ctx->pc = 0x1704F0u;
    {
        const bool branch_taken_0x1704f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x1704F4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
        if (branch_taken_0x1704f0) {
            ctx->pc = 0x170510u;
            goto label_170510;
        }
    }
    ctx->pc = 0x1704F8u;
    // 0x1704f8: 0x24e70001
    ctx->pc = 0x1704f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1704fc: 0x28e20010
    ctx->pc = 0x1704fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 16));
    // 0x170500: 0x0
    ctx->pc = 0x170500u;
    // NOP
    // 0x170504: 0x1440fff8
    ctx->pc = 0x170504u;
    {
        const bool branch_taken_0x170504 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x170508u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x170504) {
            ctx->pc = 0x1704E8u;
            goto label_1704e8;
        }
    }
    ctx->pc = 0x17050Cu;
    // 0x17050c: 0x102d
    ctx->pc = 0x17050cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170510:
    // 0x170510: 0x3e00008
    ctx->pc = 0x170510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1704E8u: goto label_1704e8;
            case 0x170510u: goto label_170510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170518u;
}
