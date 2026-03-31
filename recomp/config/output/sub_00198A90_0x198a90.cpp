#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00198A90
// Address: 0x198a90 - 0x198ad0
void sub_00198A90_0x198a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x198a90u;

    // 0x198a90: 0x3c01002a
    ctx->pc = 0x198a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198a94: 0x8423fd60
    ctx->pc = 0x198a94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294966624)));
    // 0x198a98: 0x3c01002a
    ctx->pc = 0x198a98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198a9c: 0x831823
    ctx->pc = 0x198a9cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x198aa0: 0x8c22f9b4
    ctx->pc = 0x198aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294965684)));
    // 0x198aa4: 0x3243c
    ctx->pc = 0x198aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x198aa8: 0x14400004
    ctx->pc = 0x198AA8u;
    {
        const bool branch_taken_0x198aa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198AACu;
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        if (branch_taken_0x198aa8) {
            ctx->pc = 0x198ABCu;
            goto label_198abc;
        }
    }
    ctx->pc = 0x198AB0u;
    // 0x198ab0: 0x41043
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x198ab4: 0x2243c
    ctx->pc = 0x198ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198ab8: 0x4243f
    ctx->pc = 0x198ab8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_198abc:
    // 0x198abc: 0x3e00008
    ctx->pc = 0x198ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198AC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198ABCu: goto label_198abc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198AC4u;
    // 0x198ac4: 0x0
    ctx->pc = 0x198ac4u;
    // NOP
    // 0x198ac8: 0x0
    ctx->pc = 0x198ac8u;
    // NOP
    // 0x198acc: 0x0
    ctx->pc = 0x198accu;
    // NOP
}
