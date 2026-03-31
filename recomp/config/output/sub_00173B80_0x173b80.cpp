#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173B80
// Address: 0x173b80 - 0x173bf0
void sub_00173B80_0x173b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173b80u;

    // 0x173b80: 0x27bdffe0
    ctx->pc = 0x173b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173b84: 0x24050001
    ctx->pc = 0x173b84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x173b88: 0xffb00010
    ctx->pc = 0x173b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x173b8c: 0x80802d
    ctx->pc = 0x173b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b90: 0xffbf0018
    ctx->pc = 0x173b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x173b94: 0x8e030048
    ctx->pc = 0x173b94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x173b98: 0x10650011
    ctx->pc = 0x173B98u;
    {
        const bool branch_taken_0x173b98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x173B9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173b98) {
            ctx->pc = 0x173BE0u;
            goto label_173be0;
        }
    }
    ctx->pc = 0x173BA0u;
    // 0x173ba0: 0xc05cf04
    ctx->pc = 0x173BA0u;
    SET_GPR_U32(ctx, 31, 0x173BA8u);
    ctx->pc = 0x173C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173C10_0x173c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BA8u; }
    }
    if (ctx->pc != 0x173BA8u) { return; }
    ctx->pc = 0x173BA8u;
    // 0x173ba8: 0x1440000d
    ctx->pc = 0x173BA8u;
    {
        const bool branch_taken_0x173ba8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173BACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173ba8) {
            ctx->pc = 0x173BE0u;
            goto label_173be0;
        }
    }
    ctx->pc = 0x173BB0u;
    // 0x173bb0: 0xc05a7b2
    ctx->pc = 0x173BB0u;
    SET_GPR_U32(ctx, 31, 0x173BB8u);
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BB8u; }
    }
    if (ctx->pc != 0x173BB8u) { return; }
    ctx->pc = 0x173BB8u;
    // 0x173bb8: 0xc05cefc
    ctx->pc = 0x173BB8u;
    SET_GPR_U32(ctx, 31, 0x173BC0u);
    ctx->pc = 0x173BBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x173BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173BF0_0x173bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BC0u; }
    }
    if (ctx->pc != 0x173BC0u) { return; }
    ctx->pc = 0x173BC0u;
    // 0x173bc0: 0xc05cf1c
    ctx->pc = 0x173BC0u;
    SET_GPR_U32(ctx, 31, 0x173BC8u);
    ctx->pc = 0x173BC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173C70_0x173c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BC8u; }
    }
    if (ctx->pc != 0x173BC8u) { return; }
    ctx->pc = 0x173BC8u;
    // 0x173bc8: 0x202d
    ctx->pc = 0x173bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173bcc: 0xc05cefc
    ctx->pc = 0x173BCCu;
    SET_GPR_U32(ctx, 31, 0x173BD4u);
    ctx->pc = 0x173BD0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173BF0_0x173bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BD4u; }
    }
    if (ctx->pc != 0x173BD4u) { return; }
    ctx->pc = 0x173BD4u;
    // 0x173bd4: 0xc05a7b8
    ctx->pc = 0x173BD4u;
    SET_GPR_U32(ctx, 31, 0x173BDCu);
    ctx->pc = 0x173BD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BDCu; }
    }
    if (ctx->pc != 0x173BDCu) { return; }
    ctx->pc = 0x173BDCu;
    // 0x173bdc: 0x200102d
    ctx->pc = 0x173bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173be0:
    // 0x173be0: 0xdfb00010
    ctx->pc = 0x173be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173be4: 0xdfbf0018
    ctx->pc = 0x173be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173be8: 0x3e00008
    ctx->pc = 0x173BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173BECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173BE0u: goto label_173be0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173BF0u;
}
