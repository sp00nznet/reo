#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7D80
// Address: 0x1c7d80 - 0x1c7df0
void sub_001C7D80_0x1c7d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7d80u;

    // 0x1c7d80: 0x27bdffd0
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7d84: 0xffbf0020
    ctx->pc = 0x1c7d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c7d88: 0x7fb10010
    ctx->pc = 0x1c7d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7d8c: 0x7fb00000
    ctx->pc = 0x1c7d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7d90: 0x1ca00002
    ctx->pc = 0x1C7D90u;
    {
        const bool branch_taken_0x1c7d90 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1C7D94u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d90) {
            ctx->pc = 0x1C7D9Cu;
            goto label_1c7d9c;
        }
    }
    ctx->pc = 0x1C7D98u;
    // 0x1c7d98: 0x8e250004
    ctx->pc = 0x1c7d98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c7d9c:
    // 0x1c7d9c: 0x8e22000c
    ctx->pc = 0x1c7d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c7da0: 0x458023
    ctx->pc = 0x1c7da0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c7da4: 0x1e000005
    ctx->pc = 0x1C7DA4u;
    {
        const bool branch_taken_0x1c7da4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1C7DA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c7da4) {
            ctx->pc = 0x1C7DBCu;
            goto label_1c7dbc;
        }
    }
    ctx->pc = 0x1C7DACu;
    // 0x1c7dac: 0xc071f40
    ctx->pc = 0x1C7DACu;
    SET_GPR_U32(ctx, 31, 0x1C7DB4u);
    ctx->pc = 0x1C7D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D00_0x1c7d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DB4u; }
    }
    if (ctx->pc != 0x1C7DB4u) { return; }
    ctx->pc = 0x1C7DB4u;
    // 0x1c7db4: 0x10000008
    ctx->pc = 0x1C7DB4u;
    {
        const bool branch_taken_0x1c7db4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7DB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1c7db4) {
            ctx->pc = 0x1C7DD8u;
            goto label_1c7dd8;
        }
    }
    ctx->pc = 0x1C7DBCu;
label_1c7dbc:
    // 0x1c7dbc: 0x8e240008
    ctx->pc = 0x1c7dbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c7dc0: 0x200302d
    ctx->pc = 0x1c7dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7dc4: 0xc041ed8
    ctx->pc = 0x1C7DC4u;
    SET_GPR_U32(ctx, 31, 0x1C7DCCu);
    ctx->pc = 0x1C7DC8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x107B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B60_0x107b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7DCCu; }
    }
    if (ctx->pc != 0x1C7DCCu) { return; }
    ctx->pc = 0x1C7DCCu;
    // 0x1c7dcc: 0xae30000c
    ctx->pc = 0x1c7dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x1c7dd0: 0xae200004
    ctx->pc = 0x1c7dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c7dd4: 0xdfbf0020
    ctx->pc = 0x1c7dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7dd8:
    // 0x1c7dd8: 0x7bb10010
    ctx->pc = 0x1c7dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7ddc: 0x7bb00000
    ctx->pc = 0x1c7ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7de0: 0x3e00008
    ctx->pc = 0x1C7DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7DE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7D9Cu: goto label_1c7d9c;
            case 0x1C7DBCu: goto label_1c7dbc;
            case 0x1C7DD8u: goto label_1c7dd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7DE8u;
    // 0x1c7de8: 0x0
    ctx->pc = 0x1c7de8u;
    // NOP
    // 0x1c7dec: 0x0
    ctx->pc = 0x1c7decu;
    // NOP
}
