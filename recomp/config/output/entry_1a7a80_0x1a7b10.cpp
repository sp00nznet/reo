#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a7a80
// Address: 0x1a7a80 - 0x1a7b10
void entry_1a7a80_0x1a7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7a80u;

    // 0x1a7a80: 0x27bdfff0
    ctx->pc = 0x1a7a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7a84: 0x3c02002b
    ctx->pc = 0x1a7a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a7a88: 0xffbf0000
    ctx->pc = 0x1a7a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7a8c: 0x3c01002b
    ctx->pc = 0x1a7a8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7a90: 0x8c240a68
    ctx->pc = 0x1a7a90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7a94: 0x24420a80
    ctx->pc = 0x1a7a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a7a98: 0x41840
    ctx->pc = 0x1a7a98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a7a9c: 0x641821
    ctx->pc = 0x1a7a9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7aa0: 0x31880
    ctx->pc = 0x1a7aa0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7aa4: 0x431821
    ctx->pc = 0x1a7aa4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7aa8: 0x8c620000
    ctx->pc = 0x1a7aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7aac: 0x4400006
    ctx->pc = 0x1A7AACu;
    {
        const bool branch_taken_0x1a7aac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A7AB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x1a7aac) {
            ctx->pc = 0x1A7AC8u;
            goto label_1a7ac8;
        }
    }
    ctx->pc = 0x1A7AB4u;
    // 0x1a7ab4: 0x3c040024
    ctx->pc = 0x1a7ab4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7ab8: 0xc0423b4
    ctx->pc = 0x1A7AB8u;
    SET_GPR_U32(ctx, 31, 0x1A7AC0u);
    ctx->pc = 0x1A7ABCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8896));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AC0u; }
    }
    if (ctx->pc != 0x1A7AC0u) { return; }
    ctx->pc = 0x1A7AC0u;
    // 0x1a7ac0: 0x1000000d
    ctx->pc = 0x1A7AC0u;
    {
        const bool branch_taken_0x1a7ac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7AC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7ac0) {
            ctx->pc = 0x1A7AF8u;
            goto label_1a7af8;
        }
    }
    ctx->pc = 0x1A7AC8u;
label_1a7ac8:
    // 0x1a7ac8: 0x3c01002b
    ctx->pc = 0x1a7ac8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7acc: 0xac620000
    ctx->pc = 0x1a7accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a7ad0: 0x8c220a68
    ctx->pc = 0x1a7ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7ad4: 0x24430001
    ctx->pc = 0x1a7ad4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7ad8: 0x4610004
    ctx->pc = 0x1A7AD8u;
    {
        const bool branch_taken_0x1a7ad8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7ADCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a7ad8) {
            ctx->pc = 0x1A7AECu;
            goto label_1a7aec;
        }
    }
    ctx->pc = 0x1A7AE0u;
    // 0x1a7ae0: 0x10400002
    ctx->pc = 0x1A7AE0u;
    {
        const bool branch_taken_0x1a7ae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7ae0) {
            ctx->pc = 0x1A7AECu;
            goto label_1a7aec;
        }
    }
    ctx->pc = 0x1A7AE8u;
    // 0x1a7ae8: 0x2442ffe0
    ctx->pc = 0x1a7ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a7aec:
    // 0x1a7aec: 0x3c01002b
    ctx->pc = 0x1a7aecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7af0: 0xac220a68
    ctx->pc = 0x1a7af0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7af4: 0x102d
    ctx->pc = 0x1a7af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7af8:
    // 0x1a7af8: 0xdfbf0000
    ctx->pc = 0x1a7af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7afc: 0x3e00008
    ctx->pc = 0x1A7AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7B00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7AC8u: goto label_1a7ac8;
            case 0x1A7AECu: goto label_1a7aec;
            case 0x1A7AF8u: goto label_1a7af8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7B04u;
    // 0x1a7b04: 0x0
    ctx->pc = 0x1a7b04u;
    // NOP
    // 0x1a7b08: 0x0
    ctx->pc = 0x1a7b08u;
    // NOP
    // 0x1a7b0c: 0x0
    ctx->pc = 0x1a7b0cu;
    // NOP
}
