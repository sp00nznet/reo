#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6ED0
// Address: 0x1d6ed0 - 0x1d6f10
void sub_001D6ED0_0x1d6ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6ed0u;

    // 0x1d6ed0: 0x27bdffe0
    ctx->pc = 0x1d6ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6ed4: 0xffbf0000
    ctx->pc = 0x1d6ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6ed8: 0xc076294
    ctx->pc = 0x1D6ED8u;
    SET_GPR_U32(ctx, 31, 0x1D6EE0u);
    ctx->pc = 0x1D6EDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x1D8A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8A50_0x1d8a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6EE0u; }
    }
    if (ctx->pc != 0x1D6EE0u) { return; }
    ctx->pc = 0x1D6EE0u;
    // 0x1d6ee0: 0x21c3c
    ctx->pc = 0x1d6ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6ee4: 0x31c3f
    ctx->pc = 0x1d6ee4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d6ee8: 0x24020001
    ctx->pc = 0x1d6ee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6eec: 0x14620003
    ctx->pc = 0x1D6EECu;
    {
        const bool branch_taken_0x1d6eec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d6eec) {
            ctx->pc = 0x1D6EFCu;
            goto label_1d6efc;
        }
    }
    ctx->pc = 0x1D6EF4u;
    // 0x1d6ef4: 0x10000002
    ctx->pc = 0x1D6EF4u;
    {
        const bool branch_taken_0x1d6ef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6EF8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        if (branch_taken_0x1d6ef4) {
            ctx->pc = 0x1D6F00u;
            goto label_1d6f00;
        }
    }
    ctx->pc = 0x1D6EFCu;
label_1d6efc:
    // 0x1d6efc: 0x2402ffff
    ctx->pc = 0x1d6efcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6f00:
    // 0x1d6f00: 0xdfbf0000
    ctx->pc = 0x1d6f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6f04: 0x3e00008
    ctx->pc = 0x1D6F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6F08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6EFCu: goto label_1d6efc;
            case 0x1D6F00u: goto label_1d6f00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6F0Cu;
    // 0x1d6f0c: 0x0
    ctx->pc = 0x1d6f0cu;
    // NOP
}
