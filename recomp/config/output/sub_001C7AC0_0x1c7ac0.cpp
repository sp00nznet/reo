#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7AC0
// Address: 0x1c7ac0 - 0x1c7b10
void sub_001C7AC0_0x1c7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7ac0u;

    // 0x1c7ac0: 0x27bdfff0
    ctx->pc = 0x1c7ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7ac4: 0x3c010033
    ctx->pc = 0x1c7ac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7ac8: 0xffbf0000
    ctx->pc = 0x1c7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7acc: 0x24030007
    ctx->pc = 0x1c7accu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c7ad0: 0x90275056
    ctx->pc = 0x1c7ad0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20566)));
    // 0x1c7ad4: 0x10e30008
    ctx->pc = 0x1C7AD4u;
    {
        const bool branch_taken_0x1c7ad4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C7AD8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
        if (branch_taken_0x1c7ad4) {
            ctx->pc = 0x1C7AF8u;
            goto label_1c7af8;
        }
    }
    ctx->pc = 0x1C7ADCu;
    // 0x1c7adc: 0xac2551a8
    ctx->pc = 0x1c7adcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20904), GPR_U32(ctx, 5));
    // 0x1c7ae0: 0x3c010033
    ctx->pc = 0x1c7ae0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7ae4: 0xac2651ac
    ctx->pc = 0x1c7ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20908), GPR_U32(ctx, 6));
    // 0x1c7ae8: 0x3c010033
    ctx->pc = 0x1c7ae8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
    // 0x1c7aec: 0xac2451a4
    ctx->pc = 0x1c7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20900), GPR_U32(ctx, 4));
    // 0x1c7af0: 0xc071ea0
    ctx->pc = 0x1C7AF0u;
    SET_GPR_U32(ctx, 31, 0x1C7AF8u);
    ctx->pc = 0x1C7AF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C7A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7A80_0x1c7a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7AF8u; }
    }
    if (ctx->pc != 0x1C7AF8u) { return; }
    ctx->pc = 0x1C7AF8u;
label_1c7af8:
    // 0x1c7af8: 0xdfbf0000
    ctx->pc = 0x1c7af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7afc: 0x3e00008
    ctx->pc = 0x1C7AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7B00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7AF8u: goto label_1c7af8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7B04u;
    // 0x1c7b04: 0x0
    ctx->pc = 0x1c7b04u;
    // NOP
    // 0x1c7b08: 0x0
    ctx->pc = 0x1c7b08u;
    // NOP
    // 0x1c7b0c: 0x0
    ctx->pc = 0x1c7b0cu;
    // NOP
}
