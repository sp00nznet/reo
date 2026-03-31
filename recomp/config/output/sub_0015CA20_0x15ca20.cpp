#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015CA20
// Address: 0x15ca20 - 0x15ca68
void sub_0015CA20_0x15ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ca20u;

    // 0x15ca20: 0x27bdfff0
    ctx->pc = 0x15ca20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ca24: 0xffbf0000
    ctx->pc = 0x15ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ca28: 0xc05ce6a
    ctx->pc = 0x15CA28u;
    SET_GPR_U32(ctx, 31, 0x15CA30u);
    ctx->pc = 0x1739A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001739A8_0x1739a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA30u; }
    }
    if (ctx->pc != 0x15CA30u) { return; }
    ctx->pc = 0x15CA30u;
    // 0x15ca30: 0x10400009
    ctx->pc = 0x15CA30u;
    {
        const bool branch_taken_0x15ca30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15CA34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966990));
        if (branch_taken_0x15ca30) {
            ctx->pc = 0x15CA58u;
            goto label_15ca58;
        }
    }
    ctx->pc = 0x15CA38u;
    // 0x15ca38: 0xc057abc
    ctx->pc = 0x15CA38u;
    SET_GPR_U32(ctx, 31, 0x15CA40u);
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA40u; }
    }
    if (ctx->pc != 0x15CA40u) { return; }
    ctx->pc = 0x15CA40u;
    // 0x15ca40: 0x3c040024
    ctx->pc = 0x15ca40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15ca44: 0xdfbf0000
    ctx->pc = 0x15ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca48: 0x2484e8c0
    ctx->pc = 0x15ca48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961344));
    // 0x15ca4c: 0x8058dd4
    ctx->pc = 0x15CA4Cu;
    ctx->pc = 0x15CA50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15CA54u;
    // 0x15ca54: 0x0
    ctx->pc = 0x15ca54u;
    // NOP
label_15ca58:
    // 0x15ca58: 0xdfbf0000
    ctx->pc = 0x15ca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca5c: 0x3e00008
    ctx->pc = 0x15CA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CA60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15CA58u: goto label_15ca58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15CA64u;
    // 0x15ca64: 0x0
    ctx->pc = 0x15ca64u;
    // NOP
}
