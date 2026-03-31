#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018DC50
// Address: 0x18dc50 - 0x18dc90
void sub_0018DC50_0x18dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18dc50u;

    // 0x18dc50: 0x27bdffe0
    ctx->pc = 0x18dc50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18dc54: 0xffbf0010
    ctx->pc = 0x18dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18dc58: 0x7fb00000
    ctx->pc = 0x18dc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18dc5c: 0xc068350
    ctx->pc = 0x18DC5Cu;
    SET_GPR_U32(ctx, 31, 0x18DC64u);
    ctx->pc = 0x18DC60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D40_0x1a0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC64u; }
    }
    if (ctx->pc != 0x18DC64u) { return; }
    ctx->pc = 0x18DC64u;
    // 0x18dc64: 0x14400005
    ctx->pc = 0x18DC64u;
    {
        const bool branch_taken_0x18dc64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18dc64) {
            ctx->pc = 0x18DC7Cu;
            goto label_18dc7c;
        }
    }
    ctx->pc = 0x18DC6Cu;
    // 0x18dc6c: 0xc06372c
    ctx->pc = 0x18DC6Cu;
    SET_GPR_U32(ctx, 31, 0x18DC74u);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC74u; }
    }
    if (ctx->pc != 0x18DC74u) { return; }
    ctx->pc = 0x18DC74u;
    // 0x18dc74: 0xc068354
    ctx->pc = 0x18DC74u;
    SET_GPR_U32(ctx, 31, 0x18DC7Cu);
    ctx->pc = 0x18DC78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0D50_0x1a0d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC7Cu; }
    }
    if (ctx->pc != 0x18DC7Cu) { return; }
    ctx->pc = 0x18DC7Cu;
label_18dc7c:
    // 0x18dc7c: 0xdfbf0010
    ctx->pc = 0x18dc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dc80: 0x7bb00000
    ctx->pc = 0x18dc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dc84: 0x3e00008
    ctx->pc = 0x18DC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DC88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DC7Cu: goto label_18dc7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DC8Cu;
    // 0x18dc8c: 0x0
    ctx->pc = 0x18dc8cu;
    // NOP
}
