#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a7b10
// Address: 0x1a7b10 - 0x1a7bb0
void entry_1a7b10_0x1a7bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7b10u;

    // 0x1a7b10: 0x27bdfff0
    ctx->pc = 0x1a7b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7b14: 0x3c02002b
    ctx->pc = 0x1a7b14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a7b18: 0xffbf0000
    ctx->pc = 0x1a7b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7b1c: 0x3c01002b
    ctx->pc = 0x1a7b1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7b20: 0x8c250a68
    ctx->pc = 0x1a7b20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7b24: 0x24420a80
    ctx->pc = 0x1a7b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a7b28: 0x51840
    ctx->pc = 0x1a7b28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a7b2c: 0x651821
    ctx->pc = 0x1a7b2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7b30: 0x31880
    ctx->pc = 0x1a7b30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7b34: 0x432821
    ctx->pc = 0x1a7b34u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7b38: 0x8ca20000
    ctx->pc = 0x1a7b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7b3c: 0x4400006
    ctx->pc = 0x1A7B3Cu;
    {
        const bool branch_taken_0x1a7b3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A7B40u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
        if (branch_taken_0x1a7b3c) {
            ctx->pc = 0x1A7B58u;
            goto label_1a7b58;
        }
    }
    ctx->pc = 0x1A7B44u;
    // 0x1a7b44: 0x3c040024
    ctx->pc = 0x1a7b44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7b48: 0xc0423b4
    ctx->pc = 0x1A7B48u;
    SET_GPR_U32(ctx, 31, 0x1A7B50u);
    ctx->pc = 0x1A7B4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8848));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B50u; }
    }
    if (ctx->pc != 0x1A7B50u) { return; }
    ctx->pc = 0x1A7B50u;
    // 0x1a7b50: 0x10000012
    ctx->pc = 0x1A7B50u;
    {
        const bool branch_taken_0x1a7b50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7B54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7b50) {
            ctx->pc = 0x1A7B9Cu;
            goto label_1a7b9c;
        }
    }
    ctx->pc = 0x1A7B58u;
label_1a7b58:
    // 0x1a7b58: 0x3c024a00
    ctx->pc = 0x1a7b58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18944 << 16));
    // 0x1a7b5c: 0x31c00
    ctx->pc = 0x1a7b5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7b60: 0x3c01002b
    ctx->pc = 0x1a7b60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7b64: 0x31a3c
    ctx->pc = 0x1a7b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a7b68: 0x31a3e
    ctx->pc = 0x1a7b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a7b6c: 0x621025
    ctx->pc = 0x1a7b6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7b70: 0xaca20000
    ctx->pc = 0x1a7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a7b74: 0x8c220a68
    ctx->pc = 0x1a7b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7b78: 0x24430001
    ctx->pc = 0x1a7b78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7b7c: 0x4610004
    ctx->pc = 0x1A7B7Cu;
    {
        const bool branch_taken_0x1a7b7c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7B80u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a7b7c) {
            ctx->pc = 0x1A7B90u;
            goto label_1a7b90;
        }
    }
    ctx->pc = 0x1A7B84u;
    // 0x1a7b84: 0x10400002
    ctx->pc = 0x1A7B84u;
    {
        const bool branch_taken_0x1a7b84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7b84) {
            ctx->pc = 0x1A7B90u;
            goto label_1a7b90;
        }
    }
    ctx->pc = 0x1A7B8Cu;
    // 0x1a7b8c: 0x2442ffe0
    ctx->pc = 0x1a7b8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a7b90:
    // 0x1a7b90: 0x3c01002b
    ctx->pc = 0x1a7b90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7b94: 0xac220a68
    ctx->pc = 0x1a7b94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7b98: 0x102d
    ctx->pc = 0x1a7b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b9c:
    // 0x1a7b9c: 0xdfbf0000
    ctx->pc = 0x1a7b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7ba0: 0x3e00008
    ctx->pc = 0x1A7BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7BA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7B58u: goto label_1a7b58;
            case 0x1A7B90u: goto label_1a7b90;
            case 0x1A7B9Cu: goto label_1a7b9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7BA8u;
    // 0x1a7ba8: 0x0
    ctx->pc = 0x1a7ba8u;
    // NOP
    // 0x1a7bac: 0x0
    ctx->pc = 0x1a7bacu;
    // NOP
}
