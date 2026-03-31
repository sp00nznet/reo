#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00171B38
// Address: 0x171b38 - 0x171be0
void sub_00171B38_0x171b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x171b38u;

    // 0x171b38: 0x27bdffe0
    ctx->pc = 0x171b38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171b3c: 0xffb00000
    ctx->pc = 0x171b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171b40: 0xa0802d
    ctx->pc = 0x171b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b44: 0xffb10008
    ctx->pc = 0x171b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171b48: 0xffbf0010
    ctx->pc = 0x171b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171b4c: 0xc05c54c
    ctx->pc = 0x171B4Cu;
    SET_GPR_U32(ctx, 31, 0x171B54u);
    ctx->pc = 0x171B50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171530_0x171530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B54u; }
    }
    if (ctx->pc != 0x171B54u) { return; }
    ctx->pc = 0x171B54u;
    // 0x171b54: 0x14400008
    ctx->pc = 0x171B54u;
    {
        const bool branch_taken_0x171b54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x171B58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171b54) {
            ctx->pc = 0x171B78u;
            goto label_171b78;
        }
    }
    ctx->pc = 0x171B5Cu;
    // 0x171b5c: 0x200102d
    ctx->pc = 0x171b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b60: 0xdfb00000
    ctx->pc = 0x171b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171b64: 0xdfb10008
    ctx->pc = 0x171b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171b68: 0xdfbf0010
    ctx->pc = 0x171b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171b6c: 0x3e00008
    ctx->pc = 0x171B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171B78u: goto label_171b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171B74u;
    // 0x171b74: 0x0
    ctx->pc = 0x171b74u;
    // NOP
label_171b78:
    // 0x171b78: 0x8e241b30
    ctx->pc = 0x171b78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 6960)));
    // 0x171b7c: 0xdfb00000
    ctx->pc = 0x171b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171b80: 0xdfb10008
    ctx->pc = 0x171b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171b84: 0x24840a48
    ctx->pc = 0x171b84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2632));
    // 0x171b88: 0xdfbf0010
    ctx->pc = 0x171b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171b8c: 0x805c378
    ctx->pc = 0x171B8Cu;
    ctx->pc = 0x171B90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x170DE0u;
    entry_170de0_0x170e60(rdram, ctx, runtime); return;
    ctx->pc = 0x171B94u;
    // 0x171b94: 0x0
    ctx->pc = 0x171b94u;
    // NOP
    // 0x171b98: 0x27bdffe0
    ctx->pc = 0x171b98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171b9c: 0xffb10008
    ctx->pc = 0x171b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171ba0: 0xa0882d
    ctx->pc = 0x171ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ba4: 0xffbf0010
    ctx->pc = 0x171ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171ba8: 0xffb00000
    ctx->pc = 0x171ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171bac: 0x8c901b30
    ctx->pc = 0x171bacu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x171bb0: 0x26040a48
    ctx->pc = 0x171bb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2632));
    // 0x171bb4: 0xc05c534
    ctx->pc = 0x171BB4u;
    SET_GPR_U32(ctx, 31, 0x171BBCu);
    ctx->pc = 0x171BB8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2520));
    ctx->pc = 0x1714D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001714D0_0x1714d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BBCu; }
    }
    if (ctx->pc != 0x171BBCu) { return; }
    ctx->pc = 0x171BBCu;
    // 0x171bbc: 0x24020001
    ctx->pc = 0x171bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171bc0: 0xae110020
    ctx->pc = 0x171bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x171bc4: 0xae02001c
    ctx->pc = 0x171bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x171bc8: 0xdfb10008
    ctx->pc = 0x171bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171bcc: 0xdfb00000
    ctx->pc = 0x171bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171bd0: 0xdfbf0010
    ctx->pc = 0x171bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171bd4: 0x3e00008
    ctx->pc = 0x171BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171BD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171B78u: goto label_171b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171BDCu;
    // 0x171bdc: 0x0
    ctx->pc = 0x171bdcu;
    // NOP
}
