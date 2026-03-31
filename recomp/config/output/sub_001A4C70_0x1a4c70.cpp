#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A4C70
// Address: 0x1a4c70 - 0x1a4d50
void sub_001A4C70_0x1a4c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a4c70u;

    // 0x1a4c70: 0x27bdfff0
    ctx->pc = 0x1a4c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4c74: 0x24024d42
    ctx->pc = 0x1a4c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19778));
    // 0x1a4c78: 0xffbf0000
    ctx->pc = 0x1a4c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4c7c: 0x94a30000
    ctx->pc = 0x1a4c7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a4c80: 0x10620006
    ctx->pc = 0x1A4C80u;
    {
        const bool branch_taken_0x1a4c80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a4c80) {
            ctx->pc = 0x1A4C9Cu;
            goto label_1a4c9c;
        }
    }
    ctx->pc = 0x1A4C88u;
    // 0x1a4c88: 0x3c040024
    ctx->pc = 0x1a4c88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a4c8c: 0xc0696a8
    ctx->pc = 0x1A4C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A4C94u);
    ctx->pc = 0x1A4C90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7840));
    ctx->pc = 0x1A5AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5AA0_0x1a5aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C94u; }
    }
    if (ctx->pc != 0x1A4C94u) { return; }
    ctx->pc = 0x1A4C94u;
    // 0x1a4c94: 0x1000002a
    ctx->pc = 0x1A4C94u;
    {
        const bool branch_taken_0x1a4c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4C98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c94) {
            ctx->pc = 0x1A4D40u;
            goto label_1a4d40;
        }
    }
    ctx->pc = 0x1A4C9Cu;
label_1a4c9c:
    // 0x1a4c9c: 0x94a30014
    ctx->pc = 0x1a4c9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1a4ca0: 0x24020018
    ctx->pc = 0x1a4ca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a4ca4: 0x94a60012
    ctx->pc = 0x1a4ca4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x1a4ca8: 0x31c00
    ctx->pc = 0x1a4ca8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a4cac: 0xc31825
    ctx->pc = 0x1a4cacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4cb0: 0xac830004
    ctx->pc = 0x1a4cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1a4cb4: 0x94a30018
    ctx->pc = 0x1a4cb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a4cb8: 0x94a60016
    ctx->pc = 0x1a4cb8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x1a4cbc: 0x31c00
    ctx->pc = 0x1a4cbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a4cc0: 0xc31825
    ctx->pc = 0x1a4cc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4cc4: 0xac830008
    ctx->pc = 0x1a4cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1a4cc8: 0x94a3001c
    ctx->pc = 0x1a4cc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1a4ccc: 0x10620006
    ctx->pc = 0x1A4CCCu;
    {
        const bool branch_taken_0x1a4ccc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A4CD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1a4ccc) {
            ctx->pc = 0x1A4CE8u;
            goto label_1a4ce8;
        }
    }
    ctx->pc = 0x1A4CD4u;
    // 0x1a4cd4: 0x3c040024
    ctx->pc = 0x1a4cd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a4cd8: 0xc0696a8
    ctx->pc = 0x1A4CD8u;
    SET_GPR_U32(ctx, 31, 0x1A4CE0u);
    ctx->pc = 0x1A4CDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7904));
    ctx->pc = 0x1A5AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5AA0_0x1a5aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CE0u; }
    }
    if (ctx->pc != 0x1A4CE0u) { return; }
    ctx->pc = 0x1A4CE0u;
    // 0x1a4ce0: 0x10000017
    ctx->pc = 0x1A4CE0u;
    {
        const bool branch_taken_0x1a4ce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4CE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ce0) {
            ctx->pc = 0x1A4D40u;
            goto label_1a4d40;
        }
    }
    ctx->pc = 0x1A4CE8u;
label_1a4ce8:
    // 0x1a4ce8: 0x24060008
    ctx->pc = 0x1a4ce8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4cec: 0xac820014
    ctx->pc = 0x1a4cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1a4cf0: 0x24050010
    ctx->pc = 0x1a4cf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a4cf4: 0x8c880004
    ctx->pc = 0x1a4cf4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a4cf8: 0x240300ff
    ctx->pc = 0x1a4cf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a4cfc: 0x24020001
    ctx->pc = 0x1a4cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4d00: 0x83840
    ctx->pc = 0x1a4d00u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 8), 1));
    // 0x1a4d04: 0xe83821
    ctx->pc = 0x1a4d04u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a4d08: 0xac87000c
    ctx->pc = 0x1a4d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1a4d0c: 0xac860018
    ctx->pc = 0x1a4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x1a4d10: 0xac85001c
    ctx->pc = 0x1a4d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x1a4d14: 0xac830020
    ctx->pc = 0x1a4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x1a4d18: 0xac860024
    ctx->pc = 0x1a4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x1a4d1c: 0xac860028
    ctx->pc = 0x1a4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x1a4d20: 0xac83002c
    ctx->pc = 0x1a4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x1a4d24: 0xac860030
    ctx->pc = 0x1a4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x1a4d28: 0xac800034
    ctx->pc = 0x1a4d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1a4d2c: 0xac830038
    ctx->pc = 0x1a4d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x1a4d30: 0xac80003c
    ctx->pc = 0x1a4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1a4d34: 0xac800040
    ctx->pc = 0x1a4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1a4d38: 0xac800044
    ctx->pc = 0x1a4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1a4d3c: 0xac800000
    ctx->pc = 0x1a4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1a4d40:
    // 0x1a4d40: 0xdfbf0000
    ctx->pc = 0x1a4d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d44: 0x3e00008
    ctx->pc = 0x1A4D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4C9Cu: goto label_1a4c9c;
            case 0x1A4CE8u: goto label_1a4ce8;
            case 0x1A4D40u: goto label_1a4d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4D4Cu;
    // 0x1a4d4c: 0x0
    ctx->pc = 0x1a4d4cu;
    // NOP
}
