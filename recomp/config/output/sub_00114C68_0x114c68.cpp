#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114C68
// Address: 0x114c68 - 0x114ce0
void sub_00114C68_0x114c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114c68u;

    // 0x114c68: 0x27bdffc0
    ctx->pc = 0x114c68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x114c6c: 0xffb20020
    ctx->pc = 0x114c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x114c70: 0xffb10010
    ctx->pc = 0x114c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x114c74: 0xc0902d
    ctx->pc = 0x114c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c78: 0xffbf0030
    ctx->pc = 0x114c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x114c7c: 0xa0882d
    ctx->pc = 0x114c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c80: 0x1480000f
    ctx->pc = 0x114C80u;
    {
        const bool branch_taken_0x114c80 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x114C84u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x114c80) {
            ctx->pc = 0x114CC0u;
            goto label_114cc0;
        }
    }
    ctx->pc = 0x114C88u;
    // 0x114c88: 0x3c100021
    ctx->pc = 0x114c88u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x114c8c: 0x8e029d30
    ctx->pc = 0x114c8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294942000)));
    // 0x114c90: 0x14400007
    ctx->pc = 0x114C90u;
    {
        const bool branch_taken_0x114c90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x114C94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x114c90) {
            ctx->pc = 0x114CB0u;
            goto label_114cb0;
        }
    }
    ctx->pc = 0x114C98u;
    // 0x114c98: 0xc04578c
    ctx->pc = 0x114C98u;
    SET_GPR_U32(ctx, 31, 0x114CA0u);
    ctx->pc = 0x115E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115E30_0x115e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114CA0u; }
    }
    if (ctx->pc != 0x114CA0u) { return; }
    ctx->pc = 0x114CA0u;
    // 0x114ca0: 0x10400007
    ctx->pc = 0x114CA0u;
    {
        const bool branch_taken_0x114ca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x114CA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x114ca0) {
            ctx->pc = 0x114CC0u;
            goto label_114cc0;
        }
    }
    ctx->pc = 0x114CA8u;
    // 0x114ca8: 0xae029d30
    ctx->pc = 0x114ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942000), GPR_U32(ctx, 2));
    // 0x114cac: 0x220202d
    ctx->pc = 0x114cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114cb0:
    // 0x114cb0: 0xc045758
    ctx->pc = 0x114CB0u;
    SET_GPR_U32(ctx, 31, 0x114CB8u);
    ctx->pc = 0x114CB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x115D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00115D60_0x115d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114CB8u; }
    }
    if (ctx->pc != 0x114CB8u) { return; }
    ctx->pc = 0x114CB8u;
    // 0x114cb8: 0x10000003
    ctx->pc = 0x114CB8u;
    {
        const bool branch_taken_0x114cb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x114CBCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x114cb8) {
            ctx->pc = 0x114CC8u;
            goto label_114cc8;
        }
    }
    ctx->pc = 0x114CC0u;
label_114cc0:
    // 0x114cc0: 0x2402ffff
    ctx->pc = 0x114cc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114cc4: 0xdfbf0030
    ctx->pc = 0x114cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_114cc8:
    // 0x114cc8: 0xdfb20020
    ctx->pc = 0x114cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114ccc: 0xdfb10010
    ctx->pc = 0x114cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114cd0: 0xdfb00000
    ctx->pc = 0x114cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114cd4: 0x3e00008
    ctx->pc = 0x114CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114CD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114CB0u: goto label_114cb0;
            case 0x114CC0u: goto label_114cc0;
            case 0x114CC8u: goto label_114cc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x114CDCu;
    // 0x114cdc: 0x0
    ctx->pc = 0x114cdcu;
    // NOP
}
