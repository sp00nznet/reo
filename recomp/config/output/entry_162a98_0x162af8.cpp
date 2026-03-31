#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_162a98
// Address: 0x162a98 - 0x162af8
void entry_162a98_0x162af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162a98u;

    // 0x162a98: 0x27bdfff0
    ctx->pc = 0x162a98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162a9c: 0xffbf0000
    ctx->pc = 0x162a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162aa0: 0x8c82004c
    ctx->pc = 0x162aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x162aa4: 0x10400004
    ctx->pc = 0x162AA4u;
    {
        const bool branch_taken_0x162aa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162AA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162aa4) {
            ctx->pc = 0x162AB8u;
            goto label_162ab8;
        }
    }
    ctx->pc = 0x162AACu;
    // 0x162aac: 0xdfbf0000
    ctx->pc = 0x162aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162ab0: 0x804f4d6
    ctx->pc = 0x162AB0u;
    ctx->pc = 0x162AB4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D358u;
    sub_0013D358_0x13d358(rdram, ctx, runtime); return;
    ctx->pc = 0x162AB8u;
label_162ab8:
    // 0x162ab8: 0xdfbf0000
    ctx->pc = 0x162ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162abc: 0x3e00008
    ctx->pc = 0x162ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162AC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162AB8u: goto label_162ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162AC4u;
    // 0x162ac4: 0x0
    ctx->pc = 0x162ac4u;
    // NOP
    // 0x162ac8: 0x27bdfff0
    ctx->pc = 0x162ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162acc: 0xffb00000
    ctx->pc = 0x162accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162ad0: 0xa0802d
    ctx->pc = 0x162ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ad4: 0xffbf0008
    ctx->pc = 0x162ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x162ad8: 0xc04f4f0
    ctx->pc = 0x162AD8u;
    SET_GPR_U32(ctx, 31, 0x162AE0u);
    ctx->pc = 0x162ADCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    ctx->pc = 0x13D3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D3C0_0x13d3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AE0u; }
    }
    if (ctx->pc != 0x162AE0u) { return; }
    ctx->pc = 0x162AE0u;
    // 0x162ae0: 0xae020000
    ctx->pc = 0x162ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x162ae4: 0xdfbf0008
    ctx->pc = 0x162ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162ae8: 0xdfb00000
    ctx->pc = 0x162ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162aec: 0x3e00008
    ctx->pc = 0x162AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162AB8u: goto label_162ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162AF4u;
    // 0x162af4: 0x0
    ctx->pc = 0x162af4u;
    // NOP
}
