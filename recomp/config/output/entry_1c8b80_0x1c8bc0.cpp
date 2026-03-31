#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1c8b80
// Address: 0x1c8b80 - 0x1c8bc0
void entry_1c8b80_0x1c8bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8b80u;

    // 0x1c8b80: 0x27bdfff0
    ctx->pc = 0x1c8b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8b84: 0x3c010034
    ctx->pc = 0x1c8b84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8b88: 0xffbf0000
    ctx->pc = 0x1c8b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8b8c: 0x9023b219
    ctx->pc = 0x1c8b8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294947353)));
    // 0x1c8b90: 0x10600006
    ctx->pc = 0x1C8B90u;
    {
        const bool branch_taken_0x1c8b90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8B94u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1c8b90) {
            ctx->pc = 0x1C8BACu;
            goto label_1c8bac;
        }
    }
    ctx->pc = 0x1C8B98u;
    // 0x1c8b98: 0x24040005
    ctx->pc = 0x1c8b98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8b9c: 0xa020b219
    ctx->pc = 0x1c8b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294947353), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8ba0: 0x3c010034
    ctx->pc = 0x1c8ba0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8ba4: 0xc072308
    ctx->pc = 0x1C8BA4u;
    SET_GPR_U32(ctx, 31, 0x1C8BACu);
    ctx->pc = 0x1C8BA8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294947352), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1C8C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8C20_0x1c8c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8BACu; }
    }
    if (ctx->pc != 0x1C8BACu) { return; }
    ctx->pc = 0x1C8BACu;
label_1c8bac:
    // 0x1c8bac: 0xdfbf0000
    ctx->pc = 0x1c8bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8bb0: 0x3e00008
    ctx->pc = 0x1C8BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8BB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8BACu: goto label_1c8bac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8BB8u;
    // 0x1c8bb8: 0x0
    ctx->pc = 0x1c8bb8u;
    // NOP
    // 0x1c8bbc: 0x0
    ctx->pc = 0x1c8bbcu;
    // NOP
}
