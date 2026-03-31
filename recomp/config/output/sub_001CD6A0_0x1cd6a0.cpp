#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CD6A0
// Address: 0x1cd6a0 - 0x1cd710
void sub_001CD6A0_0x1cd6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cd6a0u;

    // 0x1cd6a0: 0x27bdffe0
    ctx->pc = 0x1cd6a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd6a4: 0x3c020023
    ctx->pc = 0x1cd6a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1cd6a8: 0xffbf0010
    ctx->pc = 0x1cd6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd6ac: 0x51880
    ctx->pc = 0x1cd6acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cd6b0: 0x244266d0
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26320));
    // 0x1cd6b4: 0x7fb00000
    ctx->pc = 0x1cd6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd6b8: 0x431021
    ctx->pc = 0x1cd6b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd6bc: 0x80382d
    ctx->pc = 0x1cd6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6c0: 0x8c460000
    ctx->pc = 0x1cd6c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd6c4: 0xa0802d
    ctx->pc = 0x1cd6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6c8: 0x3c040034
    ctx->pc = 0x1cd6c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1cd6cc: 0x3c050025
    ctx->pc = 0x1cd6ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd6d0: 0x24840af0
    ctx->pc = 0x1cd6d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd6d4: 0xc042a0c
    ctx->pc = 0x1CD6D4u;
    SET_GPR_U32(ctx, 31, 0x1CD6DCu);
    ctx->pc = 0x1CD6D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24608));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6DCu; }
    }
    if (ctx->pc != 0x1CD6DCu) { return; }
    ctx->pc = 0x1CD6DCu;
    // 0x1cd6dc: 0x16000005
    ctx->pc = 0x1CD6DCu;
    {
        const bool branch_taken_0x1cd6dc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CD6E0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x1cd6dc) {
            ctx->pc = 0x1CD6F4u;
            goto label_1cd6f4;
        }
    }
    ctx->pc = 0x1CD6E4u;
    // 0x1cd6e4: 0x3c050025
    ctx->pc = 0x1cd6e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1cd6e8: 0x24840af0
    ctx->pc = 0x1cd6e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2800));
    // 0x1cd6ec: 0xc042aee
    ctx->pc = 0x1CD6ECu;
    SET_GPR_U32(ctx, 31, 0x1CD6F4u);
    ctx->pc = 0x1CD6F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24480));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6F4u; }
    }
    if (ctx->pc != 0x1CD6F4u) { return; }
    ctx->pc = 0x1CD6F4u;
label_1cd6f4:
    // 0x1cd6f4: 0xdfbf0010
    ctx->pc = 0x1cd6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd6f8: 0x3c020034
    ctx->pc = 0x1cd6f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1cd6fc: 0x7bb00000
    ctx->pc = 0x1cd6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd700: 0x24420af0
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2800));
    // 0x1cd704: 0x3e00008
    ctx->pc = 0x1CD704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD6F4u: goto label_1cd6f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD70Cu;
    // 0x1cd70c: 0x0
    ctx->pc = 0x1cd70cu;
    // NOP
}
