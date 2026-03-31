#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A598
// Address: 0x17a598 - 0x17a5d8
void sub_0017A598_0x17a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a598u;

    // 0x17a598: 0x27bdfff0
    ctx->pc = 0x17a598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a59c: 0xffb00000
    ctx->pc = 0x17a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a5a0: 0xffbf0008
    ctx->pc = 0x17a5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17a5a4: 0xc05e976
    ctx->pc = 0x17A5A4u;
    SET_GPR_U32(ctx, 31, 0x17A5ACu);
    ctx->pc = 0x17A5A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A5D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A5D8_0x17a5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5ACu; }
    }
    if (ctx->pc != 0x17A5ACu) { return; }
    ctx->pc = 0x17A5ACu;
    // 0x17a5ac: 0x240300e0
    ctx->pc = 0x17a5acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x17a5b0: 0x14430005
    ctx->pc = 0x17A5B0u;
    {
        const bool branch_taken_0x17a5b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17A5B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a5b0) {
            ctx->pc = 0x17A5C8u;
            goto label_17a5c8;
        }
    }
    ctx->pc = 0x17A5B8u;
    // 0x17a5b8: 0x92030020
    ctx->pc = 0x17a5b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17a5bc: 0x3102b
    ctx->pc = 0x17a5bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x17a5c0: 0x2c630002
    ctx->pc = 0x17a5c0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x17a5c4: 0x3100a
    ctx->pc = 0x17a5c4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_17a5c8:
    // 0x17a5c8: 0xdfb00000
    ctx->pc = 0x17a5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a5cc: 0xdfbf0008
    ctx->pc = 0x17a5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a5d0: 0x3e00008
    ctx->pc = 0x17A5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A5D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A5C8u: goto label_17a5c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A5D8u;
}
