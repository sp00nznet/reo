#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2AF0
// Address: 0x1a2af0 - 0x1a2b30
void sub_001A2AF0_0x1a2af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2af0u;

    // 0x1a2af0: 0x27bdfff0
    ctx->pc = 0x1a2af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2af4: 0xffbf0000
    ctx->pc = 0x1a2af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2af8: 0xc068b20
    ctx->pc = 0x1A2AF8u;
    SET_GPR_U32(ctx, 31, 0x1A2B00u);
    ctx->pc = 0x1A2C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2C80_0x1a2c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2B00u; }
    }
    if (ctx->pc != 0x1A2B00u) { return; }
    ctx->pc = 0x1A2B00u;
    // 0x1a2b00: 0x8c440004
    ctx->pc = 0x1a2b00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a2b04: 0x3c038000
    ctx->pc = 0x1a2b04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1a2b08: 0x8c420000
    ctx->pc = 0x1a2b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2b0c: 0x431024
    ctx->pc = 0x1a2b0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2b10: 0x10400002
    ctx->pc = 0x1A2B10u;
    {
        const bool branch_taken_0x1a2b10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2b10) {
            ctx->pc = 0x1A2B1Cu;
            goto label_1a2b1c;
        }
    }
    ctx->pc = 0x1A2B18u;
    // 0x1a2b18: 0x2484ffff
    ctx->pc = 0x1a2b18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a2b1c:
    // 0x1a2b1c: 0xdfbf0000
    ctx->pc = 0x1a2b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2b20: 0x80102d
    ctx->pc = 0x1a2b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b24: 0x3e00008
    ctx->pc = 0x1A2B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2B1Cu: goto label_1a2b1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2B2Cu;
    // 0x1a2b2c: 0x0
    ctx->pc = 0x1a2b2cu;
    // NOP
}
