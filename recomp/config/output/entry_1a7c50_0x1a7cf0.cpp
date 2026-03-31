#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a7c50
// Address: 0x1a7c50 - 0x1a7cf0
void entry_1a7c50_0x1a7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a7c50u;

    // 0x1a7c50: 0x27bdfff0
    ctx->pc = 0x1a7c50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7c54: 0x3c02002b
    ctx->pc = 0x1a7c54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a7c58: 0xffbf0000
    ctx->pc = 0x1a7c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7c5c: 0x3c01002b
    ctx->pc = 0x1a7c5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7c60: 0x8c250a68
    ctx->pc = 0x1a7c60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7c64: 0x24420a80
    ctx->pc = 0x1a7c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1a7c68: 0x51840
    ctx->pc = 0x1a7c68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a7c6c: 0x651821
    ctx->pc = 0x1a7c6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7c70: 0x31880
    ctx->pc = 0x1a7c70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7c74: 0x432821
    ctx->pc = 0x1a7c74u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7c78: 0x8ca20000
    ctx->pc = 0x1a7c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7c7c: 0x4400006
    ctx->pc = 0x1A7C7Cu;
    {
        const bool branch_taken_0x1a7c7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A7C80u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x1a7c7c) {
            ctx->pc = 0x1A7C98u;
            goto label_1a7c98;
        }
    }
    ctx->pc = 0x1A7C84u;
    // 0x1a7c84: 0x3c040024
    ctx->pc = 0x1a7c84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a7c88: 0xc0423b4
    ctx->pc = 0x1A7C88u;
    SET_GPR_U32(ctx, 31, 0x1A7C90u);
    ctx->pc = 0x1A7C8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8992));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C90u; }
    }
    if (ctx->pc != 0x1A7C90u) { return; }
    ctx->pc = 0x1A7C90u;
    // 0x1a7c90: 0x10000012
    ctx->pc = 0x1A7C90u;
    {
        const bool branch_taken_0x1a7c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7C94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7c90) {
            ctx->pc = 0x1A7CDCu;
            goto label_1a7cdc;
        }
    }
    ctx->pc = 0x1A7C98u;
label_1a7c98:
    // 0x1a7c98: 0x3c024200
    ctx->pc = 0x1a7c98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16896 << 16));
    // 0x1a7c9c: 0x31c00
    ctx->pc = 0x1a7c9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a7ca0: 0x3c01002b
    ctx->pc = 0x1a7ca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7ca4: 0x31a3c
    ctx->pc = 0x1a7ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a7ca8: 0x31a3e
    ctx->pc = 0x1a7ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a7cac: 0x621025
    ctx->pc = 0x1a7cacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7cb0: 0xaca20000
    ctx->pc = 0x1a7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a7cb4: 0x8c220a68
    ctx->pc = 0x1a7cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1a7cb8: 0x24430001
    ctx->pc = 0x1a7cb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a7cbc: 0x4610004
    ctx->pc = 0x1A7CBCu;
    {
        const bool branch_taken_0x1a7cbc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A7CC0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 31));
        if (branch_taken_0x1a7cbc) {
            ctx->pc = 0x1A7CD0u;
            goto label_1a7cd0;
        }
    }
    ctx->pc = 0x1A7CC4u;
    // 0x1a7cc4: 0x10400002
    ctx->pc = 0x1A7CC4u;
    {
        const bool branch_taken_0x1a7cc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a7cc4) {
            ctx->pc = 0x1A7CD0u;
            goto label_1a7cd0;
        }
    }
    ctx->pc = 0x1A7CCCu;
    // 0x1a7ccc: 0x2442ffe0
    ctx->pc = 0x1a7cccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967264));
label_1a7cd0:
    // 0x1a7cd0: 0x3c01002b
    ctx->pc = 0x1a7cd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a7cd4: 0xac220a68
    ctx->pc = 0x1a7cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 2));
    // 0x1a7cd8: 0x102d
    ctx->pc = 0x1a7cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7cdc:
    // 0x1a7cdc: 0xdfbf0000
    ctx->pc = 0x1a7cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7ce0: 0x3e00008
    ctx->pc = 0x1A7CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7CE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7C98u: goto label_1a7c98;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CDCu: goto label_1a7cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7CE8u;
    // 0x1a7ce8: 0x0
    ctx->pc = 0x1a7ce8u;
    // NOP
    // 0x1a7cec: 0x0
    ctx->pc = 0x1a7cecu;
    // NOP
}
