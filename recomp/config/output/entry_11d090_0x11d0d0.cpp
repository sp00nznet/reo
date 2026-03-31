#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_11d090
// Address: 0x11d090 - 0x11d0d0
void entry_11d090_0x11d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11d090u;

    // 0x11d090: 0x27bdfff0
    ctx->pc = 0x11d090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d094: 0xffbf0000
    ctx->pc = 0x11d094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d098: 0xc0452a0
    ctx->pc = 0x11D098u;
    SET_GPR_U32(ctx, 31, 0x11D0A0u);
    ctx->pc = 0x114A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A80_0x114a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0A0u; }
    }
    if (ctx->pc != 0x11D0A0u) { return; }
    ctx->pc = 0x11D0A0u;
    // 0x11d0a0: 0x3c030200
    ctx->pc = 0x11d0a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x11d0a4: 0x14430005
    ctx->pc = 0x11D0A4u;
    {
        const bool branch_taken_0x11d0a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x11d0a4) {
            ctx->pc = 0x11D0BCu;
            goto label_11d0bc;
        }
    }
    ctx->pc = 0x11D0ACu;
    // 0x11d0ac: 0xc047434
    ctx->pc = 0x11D0ACu;
    SET_GPR_U32(ctx, 31, 0x11D0B4u);
    ctx->pc = 0x11D0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D0D0_0x11d0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0B4u; }
    }
    if (ctx->pc != 0x11D0B4u) { return; }
    ctx->pc = 0x11D0B4u;
    // 0x11d0b4: 0x10000004
    ctx->pc = 0x11D0B4u;
    {
        const bool branch_taken_0x11d0b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D0B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11d0b4) {
            ctx->pc = 0x11D0C8u;
            goto label_11d0c8;
        }
    }
    ctx->pc = 0x11D0BCu;
label_11d0bc:
    // 0x11d0bc: 0xc0452a4
    ctx->pc = 0x11D0BCu;
    SET_GPR_U32(ctx, 31, 0x11D0C4u);
    ctx->pc = 0x114A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114A90_0x114a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0C4u; }
    }
    if (ctx->pc != 0x11D0C4u) { return; }
    ctx->pc = 0x11D0C4u;
    // 0x11d0c4: 0xdfbf0000
    ctx->pc = 0x11d0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d0c8:
    // 0x11d0c8: 0x3e00008
    ctx->pc = 0x11D0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D0CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D0BCu: goto label_11d0bc;
            case 0x11D0C8u: goto label_11d0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D0D0u;
}
