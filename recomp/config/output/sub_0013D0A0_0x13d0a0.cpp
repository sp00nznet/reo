#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D0A0
// Address: 0x13d0a0 - 0x13d0d0
void sub_0013D0A0_0x13d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d0a0u;

    // 0x13d0a0: 0x27bdfff0
    ctx->pc = 0x13d0a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d0a4: 0x14800006
    ctx->pc = 0x13D0A4u;
    {
        const bool branch_taken_0x13d0a4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D0A8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d0a4) {
            ctx->pc = 0x13D0C0u;
            goto label_13d0c0;
        }
    }
    ctx->pc = 0x13D0ACu;
    // 0x13d0ac: 0x3c040024
    ctx->pc = 0x13d0acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d0b0: 0xc04f53e
    ctx->pc = 0x13D0B0u;
    SET_GPR_U32(ctx, 31, 0x13D0B8u);
    ctx->pc = 0x13D0B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    ctx->pc = 0x13D4F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4F8_0x13d4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0B8u; }
    }
    if (ctx->pc != 0x13D0B8u) { return; }
    ctx->pc = 0x13D0B8u;
    // 0x13d0b8: 0x10000002
    ctx->pc = 0x13D0B8u;
    {
        const bool branch_taken_0x13d0b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D0BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x13d0b8) {
            ctx->pc = 0x13D0C4u;
            goto label_13d0c4;
        }
    }
    ctx->pc = 0x13D0C0u;
label_13d0c0:
    // 0x13d0c0: 0x80820001
    ctx->pc = 0x13d0c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_13d0c4:
    // 0x13d0c4: 0xdfbf0000
    ctx->pc = 0x13d0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0c8: 0x3e00008
    ctx->pc = 0x13D0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D0CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D0C0u: goto label_13d0c0;
            case 0x13D0C4u: goto label_13d0c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D0D0u;
}
