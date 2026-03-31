#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001719F0
// Address: 0x1719f0 - 0x171aa0
void sub_001719F0_0x1719f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1719f0u;

    // 0x1719f0: 0x27bdffe0
    ctx->pc = 0x1719f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1719f4: 0xffb10008
    ctx->pc = 0x1719f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1719f8: 0xffb00000
    ctx->pc = 0x1719f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1719fc: 0xffbf0010
    ctx->pc = 0x1719fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171a00: 0xc05c54c
    ctx->pc = 0x171A00u;
    SET_GPR_U32(ctx, 31, 0x171A08u);
    ctx->pc = 0x171A04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171530_0x171530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A08u; }
    }
    if (ctx->pc != 0x171A08u) { return; }
    ctx->pc = 0x171A08u;
    // 0x171a08: 0x10400017
    ctx->pc = 0x171A08u;
    {
        const bool branch_taken_0x171a08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x171A0Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x171a08) {
            ctx->pc = 0x171A68u;
            goto label_171a68;
        }
    }
    ctx->pc = 0x171A10u;
    // 0x171a10: 0x8e301b30
    ctx->pc = 0x171a10u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 6960)));
    // 0x171a14: 0xc05c51e
    ctx->pc = 0x171A14u;
    SET_GPR_U32(ctx, 31, 0x171A1Cu);
    ctx->pc = 0x171A18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2632));
    ctx->pc = 0x171478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171478_0x171478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A1Cu; }
    }
    if (ctx->pc != 0x171A1Cu) { return; }
    ctx->pc = 0x171A1Cu;
    // 0x171a1c: 0xc05cf00
    ctx->pc = 0x171A1Cu;
    SET_GPR_U32(ctx, 31, 0x171A24u);
    ctx->pc = 0x173C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173C00_0x173c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A24u; }
    }
    if (ctx->pc != 0x171A24u) { return; }
    ctx->pc = 0x171A24u;
    // 0x171a24: 0x24030001
    ctx->pc = 0x171a24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171a28: 0x10430007
    ctx->pc = 0x171A28u;
    {
        const bool branch_taken_0x171a28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x171A2Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2560));
        if (branch_taken_0x171a28) {
            ctx->pc = 0x171A48u;
            goto label_171a48;
        }
    }
    ctx->pc = 0x171A30u;
    // 0x171a30: 0xdfb00000
    ctx->pc = 0x171a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a34: 0xdfb10008
    ctx->pc = 0x171a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171a38: 0xdfbf0010
    ctx->pc = 0x171a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a3c: 0x8051f3a
    ctx->pc = 0x171A3Cu;
    ctx->pc = 0x171A40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x147CE8u;
    entry_147ce8_0x147d30(rdram, ctx, runtime); return;
    ctx->pc = 0x171A44u;
    // 0x171a44: 0x0
    ctx->pc = 0x171a44u;
    // NOP
label_171a48:
    // 0x171a48: 0xc051f9e
    ctx->pc = 0x171A48u;
    SET_GPR_U32(ctx, 31, 0x171A50u);
    ctx->pc = 0x147E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147E78_0x147e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A50u; }
    }
    if (ctx->pc != 0x171A50u) { return; }
    ctx->pc = 0x171A50u;
    // 0x171a50: 0x220202d
    ctx->pc = 0x171a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a54: 0xdfb00000
    ctx->pc = 0x171a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a58: 0xdfb10008
    ctx->pc = 0x171a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171a5c: 0xdfbf0010
    ctx->pc = 0x171a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a60: 0x805c69e
    ctx->pc = 0x171A60u;
    ctx->pc = 0x171A64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x171A78u;
    goto label_171a78;
    ctx->pc = 0x171A68u;
label_171a68:
    // 0x171a68: 0xdfb10008
    ctx->pc = 0x171a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171a6c: 0xdfbf0010
    ctx->pc = 0x171a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a70: 0x3e00008
    ctx->pc = 0x171A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171A48u: goto label_171a48;
            case 0x171A68u: goto label_171a68;
            case 0x171A78u: goto label_171a78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171A78u;
label_171a78:
    // 0x171a78: 0x27bdfff0
    ctx->pc = 0x171a78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171a7c: 0x24060048
    ctx->pc = 0x171a7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 72));
    // 0x171a80: 0xffbf0000
    ctx->pc = 0x171a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171a84: 0x8c851b30
    ctx->pc = 0x171a84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x171a88: 0x3c040027
    ctx->pc = 0x171a88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x171a8c: 0xdfbf0000
    ctx->pc = 0x171a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a90: 0x248460d8
    ctx->pc = 0x171a90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24792));
    // 0x171a94: 0x24a50a00
    ctx->pc = 0x171a94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2560));
    // 0x171a98: 0x80557c8
    ctx->pc = 0x171A98u;
    ctx->pc = 0x171A9Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x155F20u;
    entry_155f20_0x1560f0(rdram, ctx, runtime); return;
    ctx->pc = 0x171AA0u;
}
