#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_166df8
// Address: 0x166df8 - 0x166e68
void entry_166df8_0x166e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166df8u;

    // 0x166df8: 0x610c0
    ctx->pc = 0x166df8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 3));
    // 0x166dfc: 0x27bdfff0
    ctx->pc = 0x166dfcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x166e00: 0x461023
    ctx->pc = 0x166e00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x166e04: 0xffbf0000
    ctx->pc = 0x166e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166e08: 0x21080
    ctx->pc = 0x166e08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x166e0c: 0x24831140
    ctx->pc = 0x166e0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4416));
    // 0x166e10: 0x461021
    ctx->pc = 0x166e10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x166e14: 0x24070004
    ctx->pc = 0x166e14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    // 0x166e18: 0x21080
    ctx->pc = 0x166e18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x166e1c: 0xa0402d
    ctx->pc = 0x166e1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e20: 0x621821
    ctx->pc = 0x166e20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166e24: 0x8c620000
    ctx->pc = 0x166e24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166e28: 0x60302d
    ctx->pc = 0x166e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e2c: 0x10470006
    ctx->pc = 0x166E2Cu;
    {
        const bool branch_taken_0x166e2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        ctx->pc = 0x166E30u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x166e2c) {
            ctx->pc = 0x166E48u;
            goto label_166e48;
        }
    }
    ctx->pc = 0x166E34u;
    // 0x166e34: 0x3c05ff00
    ctx->pc = 0x166e34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x166e38: 0xdfbf0000
    ctx->pc = 0x166e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166e3c: 0x34a50409
    ctx->pc = 0x166e3cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1033));
    // 0x166e40: 0x805a704
    ctx->pc = 0x166E40u;
    ctx->pc = 0x166E44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x166E48u;
label_166e48:
    // 0x166e48: 0x8d070004
    ctx->pc = 0x166e48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x166e4c: 0x60202d
    ctx->pc = 0x166e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e50: 0xc059b9a
    ctx->pc = 0x166E50u;
    SET_GPR_U32(ctx, 31, 0x166E58u);
    ctx->pc = 0x166E54u;
    SET_GPR_U32(ctx, 7, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    ctx->pc = 0x166E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166E68_0x166e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E58u; }
    }
    if (ctx->pc != 0x166E58u) { return; }
    ctx->pc = 0x166E58u;
    // 0x166e58: 0x102d
    ctx->pc = 0x166e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e5c: 0xdfbf0000
    ctx->pc = 0x166e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166e60: 0x3e00008
    ctx->pc = 0x166E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166E64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166E48u: goto label_166e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166E68u;
}
