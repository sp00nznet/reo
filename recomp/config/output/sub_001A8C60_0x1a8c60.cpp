#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A8C60
// Address: 0x1a8c60 - 0x1a8ca0
void sub_001A8C60_0x1a8c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a8c60u;

    // 0x1a8c60: 0x27bdfff0
    ctx->pc = 0x1a8c60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8c64: 0x3c01002b
    ctx->pc = 0x1a8c64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8c68: 0xffbf0000
    ctx->pc = 0x1a8c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8c6c: 0x80231040
    ctx->pc = 0x1a8c6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4160)));
    // 0x1a8c70: 0x10600005
    ctx->pc = 0x1A8C70u;
    {
        const bool branch_taken_0x1a8c70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8C74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a8c70) {
            ctx->pc = 0x1A8C88u;
            goto label_1a8c88;
        }
    }
    ctx->pc = 0x1A8C78u;
    // 0x1a8c78: 0xc04c50a
    ctx->pc = 0x1A8C78u;
    SET_GPR_U32(ctx, 31, 0x1A8C80u);
    ctx->pc = 0x131428u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131428_0x131428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C80u; }
    }
    if (ctx->pc != 0x1A8C80u) { return; }
    ctx->pc = 0x1A8C80u;
    // 0x1a8c80: 0x3c01002b
    ctx->pc = 0x1a8c80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8c84: 0xa0201040
    ctx->pc = 0x1a8c84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4160), (uint8_t)GPR_U32(ctx, 0));
label_1a8c88:
    // 0x1a8c88: 0xdfbf0000
    ctx->pc = 0x1a8c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8c8c: 0x3e00008
    ctx->pc = 0x1A8C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8C90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8C88u: goto label_1a8c88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8C94u;
    // 0x1a8c94: 0x0
    ctx->pc = 0x1a8c94u;
    // NOP
    // 0x1a8c98: 0x0
    ctx->pc = 0x1a8c98u;
    // NOP
    // 0x1a8c9c: 0x0
    ctx->pc = 0x1a8c9cu;
    // NOP
}
