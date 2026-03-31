#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C18B0
// Address: 0x1c18b0 - 0x1c18e0
void sub_001C18B0_0x1c18b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c18b0u;

    // 0x1c18b0: 0x2403000a
    ctx->pc = 0x1c18b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c18b4: 0x308400ff
    ctx->pc = 0x1c18b4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x1c18b8: 0x83001b
    ctx->pc = 0x1c18b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 4) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,4); } }
    // 0x1c18bc: 0x24050006
    ctx->pc = 0x1c18bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c18c0: 0x50600001
    ctx->pc = 0x1C18C0u;
    {
        const bool branch_taken_0x1c18c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c18c0) {
            ctx->pc = 0x1C18C4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1C18C8u;
            goto label_1c18c8;
        }
    }
    ctx->pc = 0x1C18C8u;
label_1c18c8:
    // 0x1c18c8: 0x1012
    ctx->pc = 0x1c18c8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1c18cc: 0x451818
    ctx->pc = 0x1c18ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1c18d0: 0x641021
    ctx->pc = 0x1c18d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c18d4: 0x3e00008
    ctx->pc = 0x1C18D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C18D8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C18C8u: goto label_1c18c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C18DCu;
    // 0x1c18dc: 0x0
    ctx->pc = 0x1c18dcu;
    // NOP
}
