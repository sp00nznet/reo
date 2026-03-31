#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17e628
// Address: 0x17e628 - 0x17e6a0
void entry_17e628_0x17e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e628u;

    // 0x17e628: 0x27bdffe0
    ctx->pc = 0x17e628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e62c: 0xffb00010
    ctx->pc = 0x17e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e630: 0x80802d
    ctx->pc = 0x17e630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e634: 0x12000003
    ctx->pc = 0x17E634u;
    {
        const bool branch_taken_0x17e634 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E638u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x17e634) {
            ctx->pc = 0x17E644u;
            goto label_17e644;
        }
    }
    ctx->pc = 0x17E63Cu;
    // 0x17e63c: 0x4a10004
    ctx->pc = 0x17E63Cu;
    {
        const bool branch_taken_0x17e63c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17E640u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x17e63c) {
            ctx->pc = 0x17E650u;
            goto label_17e650;
        }
    }
    ctx->pc = 0x17E644u;
label_17e644:
    // 0x17e644: 0x10000012
    ctx->pc = 0x17E644u;
    {
        const bool branch_taken_0x17e644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E648u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e644) {
            ctx->pc = 0x17E690u;
            goto label_17e690;
        }
    }
    ctx->pc = 0x17E64Cu;
    // 0x17e64c: 0x0
    ctx->pc = 0x17e64cu;
    // NOP
label_17e650:
    // 0x17e650: 0x3a0202d
    ctx->pc = 0x17e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e654: 0x24a51570
    ctx->pc = 0x17e654u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5488));
    // 0x17e658: 0x82020010
    ctx->pc = 0x17e658u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17e65c: 0x82030011
    ctx->pc = 0x17e65cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x17e660: 0xa3a20000
    ctx->pc = 0x17e660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e664: 0xa3a30001
    ctx->pc = 0x17e664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x17e668: 0xc042d10
    ctx->pc = 0x17E668u;
    SET_GPR_U32(ctx, 31, 0x17E670u);
    ctx->pc = 0x17E66Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E670u; }
    }
    if (ctx->pc != 0x17E670u) { return; }
    ctx->pc = 0x17E670u;
    // 0x17e670: 0x3c050024
    ctx->pc = 0x17e670u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17e674: 0x26040014
    ctx->pc = 0x17e674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 20));
    // 0x17e678: 0x24a51560
    ctx->pc = 0x17e678u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5472));
    // 0x17e67c: 0x10400004
    ctx->pc = 0x17E67Cu;
    {
        const bool branch_taken_0x17e67c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E680u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17e67c) {
            ctx->pc = 0x17E690u;
            goto label_17e690;
        }
    }
    ctx->pc = 0x17E684u;
    // 0x17e684: 0xc042d10
    ctx->pc = 0x17E684u;
    SET_GPR_U32(ctx, 31, 0x17E68Cu);
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E68Cu; }
    }
    if (ctx->pc != 0x17E68Cu) { return; }
    ctx->pc = 0x17E68Cu;
    // 0x17e68c: 0x2c420001
    ctx->pc = 0x17e68cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_17e690:
    // 0x17e690: 0xdfb00010
    ctx->pc = 0x17e690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e694: 0xdfbf0018
    ctx->pc = 0x17e694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e698: 0x3e00008
    ctx->pc = 0x17E698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E69Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E644u: goto label_17e644;
            case 0x17E650u: goto label_17e650;
            case 0x17E690u: goto label_17e690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E6A0u;
}
