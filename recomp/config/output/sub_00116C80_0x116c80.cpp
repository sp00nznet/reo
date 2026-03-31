#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00116C80
// Address: 0x116c80 - 0x116cd0
void sub_00116C80_0x116c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x116c80u;

    // 0x116c80: 0x80302d
    ctx->pc = 0x116c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c84: 0x4c1000b
    ctx->pc = 0x116C84u;
    {
        const bool branch_taken_0x116c84 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x116C88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x116c84) {
            ctx->pc = 0x116CB4u;
            goto label_116cb4;
        }
    }
    ctx->pc = 0x116C8Cu;
    // 0x116c8c: 0x3c027fff
    ctx->pc = 0x116c8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x116c90: 0x2405000c
    ctx->pc = 0x116c90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    // 0x116c94: 0x3442ffff
    ctx->pc = 0x116c94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x116c98: 0x3c030026
    ctx->pc = 0x116c98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x116c9c: 0xc21024
    ctx->pc = 0x116c9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x116ca0: 0x8c64afa4
    ctx->pc = 0x116ca0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294946724)));
    // 0x116ca4: 0x451018
    ctx->pc = 0x116ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x116ca8: 0x441021
    ctx->pc = 0x116ca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x116cac: 0x3e00008
    ctx->pc = 0x116CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116CB0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116CB4u: goto label_116cb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116CB4u;
label_116cb4:
    // 0x116cb4: 0x3c040026
    ctx->pc = 0x116cb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x116cb8: 0xc21018
    ctx->pc = 0x116cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x116cbc: 0x8c83afac
    ctx->pc = 0x116cbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294946732)));
    // 0x116cc0: 0x431021
    ctx->pc = 0x116cc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116cc4: 0x3e00008
    ctx->pc = 0x116CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116CC8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116CB4u: goto label_116cb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116CCCu;
    // 0x116ccc: 0x0
    ctx->pc = 0x116cccu;
    // NOP
}
