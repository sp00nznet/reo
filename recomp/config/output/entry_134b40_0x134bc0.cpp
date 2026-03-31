#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_134b40
// Address: 0x134b40 - 0x134bc0
void entry_134b40_0x134bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134b40u;

    // 0x134b40: 0x27bdfff0
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x134b44: 0xffb00000
    ctx->pc = 0x134b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134b48: 0x80802d
    ctx->pc = 0x134b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b4c: 0xffbf0008
    ctx->pc = 0x134b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x134b50: 0x8e020008
    ctx->pc = 0x134b50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x134b54: 0x1040000a
    ctx->pc = 0x134B54u;
    {
        const bool branch_taken_0x134b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x134B58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x134b54) {
            ctx->pc = 0x134B80u;
            goto label_134b80;
        }
    }
    ctx->pc = 0x134B5Cu;
    // 0x134b5c: 0xc04c16e
    ctx->pc = 0x134B5Cu;
    SET_GPR_U32(ctx, 31, 0x134B64u);
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B64u; }
    }
    if (ctx->pc != 0x134B64u) { return; }
    ctx->pc = 0x134B64u;
    // 0x134b64: 0x24030004
    ctx->pc = 0x134b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x134b68: 0x54430006
    ctx->pc = 0x134B68u;
    {
        const bool branch_taken_0x134b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x134b68) {
            ctx->pc = 0x134B6Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->pc = 0x134B84u;
            goto label_134b84;
        }
    }
    ctx->pc = 0x134B70u;
    // 0x134b70: 0x2402ffff
    ctx->pc = 0x134b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134b74: 0x24030006
    ctx->pc = 0x134b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x134b78: 0xa6020060
    ctx->pc = 0x134b78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x134b7c: 0xa2030001
    ctx->pc = 0x134b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_134b80:
    // 0x134b80: 0x8e040094
    ctx->pc = 0x134b80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_134b84:
    // 0x134b84: 0x5080000b
    ctx->pc = 0x134B84u;
    {
        const bool branch_taken_0x134b84 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x134b84) {
            ctx->pc = 0x134B88u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134BB4u;
            goto label_134bb4;
        }
    }
    ctx->pc = 0x134B8Cu;
    // 0x134b8c: 0xc04f428
    ctx->pc = 0x134B8Cu;
    SET_GPR_U32(ctx, 31, 0x134B94u);
    ctx->pc = 0x13D0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D0A0_0x13d0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B94u; }
    }
    if (ctx->pc != 0x134B94u) { return; }
    ctx->pc = 0x134B94u;
    // 0x134b94: 0x24030003
    ctx->pc = 0x134b94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x134b98: 0x54430006
    ctx->pc = 0x134B98u;
    {
        const bool branch_taken_0x134b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x134b98) {
            ctx->pc = 0x134B9Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134BB4u;
            goto label_134bb4;
        }
    }
    ctx->pc = 0x134BA0u;
    // 0x134ba0: 0x24020006
    ctx->pc = 0x134ba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x134ba4: 0x2403ffff
    ctx->pc = 0x134ba4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134ba8: 0xa2020001
    ctx->pc = 0x134ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x134bac: 0xa6030060
    ctx->pc = 0x134bacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x134bb0: 0xdfb00000
    ctx->pc = 0x134bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134bb4:
    // 0x134bb4: 0xdfbf0008
    ctx->pc = 0x134bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134bb8: 0x3e00008
    ctx->pc = 0x134BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134B80u: goto label_134b80;
            case 0x134B84u: goto label_134b84;
            case 0x134BB4u: goto label_134bb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134BC0u;
}
