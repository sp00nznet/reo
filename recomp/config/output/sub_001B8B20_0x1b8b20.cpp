#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8B20
// Address: 0x1b8b20 - 0x1b8bb0
void sub_001B8B20_0x1b8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8b20u;

    // 0x1b8b20: 0x27bdfff0
    ctx->pc = 0x1b8b20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8b24: 0x24080001
    ctx->pc = 0x1b8b24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8b28: 0xffbf0000
    ctx->pc = 0x1b8b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8b2c: 0x90830002
    ctx->pc = 0x1b8b2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1b8b30: 0x14680009
    ctx->pc = 0x1B8B30u;
    {
        const bool branch_taken_0x1b8b30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 8));
        if (branch_taken_0x1b8b30) {
            ctx->pc = 0x1B8B58u;
            goto label_1b8b58;
        }
    }
    ctx->pc = 0x1B8B38u;
    // 0x1b8b38: 0x90830003
    ctx->pc = 0x1b8b38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b8b3c: 0x24870038
    ctx->pc = 0x1b8b3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 56));
    // 0x1b8b40: 0x24020009
    ctx->pc = 0x1b8b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b8b44: 0x482d
    ctx->pc = 0x1b8b44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b48: 0x502d
    ctx->pc = 0x1b8b48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b4c: 0x2404000d
    ctx->pc = 0x1b8b4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b8b50: 0xc06e4f4
    ctx->pc = 0x1B8B50u;
    SET_GPR_U32(ctx, 31, 0x1B8B58u);
    ctx->pc = 0x1B8B54u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B58u; }
    }
    if (ctx->pc != 0x1B8B58u) { return; }
    ctx->pc = 0x1B8B58u;
label_1b8b58:
    // 0x1b8b58: 0xdfbf0000
    ctx->pc = 0x1b8b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8b5c: 0x3e00008
    ctx->pc = 0x1B8B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8B60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8B58u: goto label_1b8b58;
            case 0x1B8BA4u: goto label_1b8ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8B64u;
    // 0x1b8b64: 0x0
    ctx->pc = 0x1b8b64u;
    // NOP
    // 0x1b8b68: 0x0
    ctx->pc = 0x1b8b68u;
    // NOP
    // 0x1b8b6c: 0x0
    ctx->pc = 0x1b8b6cu;
    // NOP
    // 0x1b8b70: 0x27bdfff0
    ctx->pc = 0x1b8b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8b74: 0x24080001
    ctx->pc = 0x1b8b74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8b78: 0xffbf0000
    ctx->pc = 0x1b8b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8b7c: 0x90830002
    ctx->pc = 0x1b8b7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1b8b80: 0x14680008
    ctx->pc = 0x1B8B80u;
    {
        const bool branch_taken_0x1b8b80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 8));
        ctx->pc = 0x1B8B84u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b80) {
            ctx->pc = 0x1B8BA4u;
            goto label_1b8ba4;
        }
    }
    ctx->pc = 0x1B8B88u;
    // 0x1b8b88: 0x90830003
    ctx->pc = 0x1b8b88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b8b8c: 0x24870038
    ctx->pc = 0x1b8b8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 56));
    // 0x1b8b90: 0x24020009
    ctx->pc = 0x1b8b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b8b94: 0x482d
    ctx->pc = 0x1b8b94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b98: 0x2404000d
    ctx->pc = 0x1b8b98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b8b9c: 0xc06e4f4
    ctx->pc = 0x1B8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B8BA4u);
    ctx->pc = 0x1B8BA0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BA4u; }
    }
    if (ctx->pc != 0x1B8BA4u) { return; }
    ctx->pc = 0x1B8BA4u;
label_1b8ba4:
    // 0x1b8ba4: 0xdfbf0000
    ctx->pc = 0x1b8ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8ba8: 0x3e00008
    ctx->pc = 0x1B8BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8BACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8B58u: goto label_1b8b58;
            case 0x1B8BA4u: goto label_1b8ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8BB0u;
}
