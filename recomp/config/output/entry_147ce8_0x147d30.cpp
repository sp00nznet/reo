#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_147ce8
// Address: 0x147ce8 - 0x147d30
void entry_147ce8_0x147d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x147ce8u;

    // 0x147ce8: 0x3e00008
    ctx->pc = 0x147CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147CECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147CF0u;
    // 0x147cf0: 0x24c30013
    ctx->pc = 0x147cf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 19));
    // 0x147cf4: 0x27bdfff0
    ctx->pc = 0x147cf4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147cf8: 0x2402ffff
    ctx->pc = 0x147cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x147cfc: 0xffbf0000
    ctx->pc = 0x147cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147d00: 0x24c60022
    ctx->pc = 0x147d00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 34));
    // 0x147d04: 0x43102a
    ctx->pc = 0x147d04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x147d08: 0x62300b
    ctx->pc = 0x147d08u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x147d0c: 0x8c840040
    ctx->pc = 0x147d0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x147d10: 0x63103
    ctx->pc = 0x147d10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x147d14: 0xc052232
    ctx->pc = 0x147D14u;
    SET_GPR_U32(ctx, 31, 0x147D1Cu);
    ctx->pc = 0x147D18u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x1488C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001488C8_0x1488c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D1Cu; }
    }
    if (ctx->pc != 0x147D1Cu) { return; }
    ctx->pc = 0x147D1Cu;
    // 0x147d1c: 0xdfbf0000
    ctx->pc = 0x147d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147d20: 0x24020001
    ctx->pc = 0x147d20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d24: 0x3e00008
    ctx->pc = 0x147D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147D28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147D2Cu;
    // 0x147d2c: 0x0
    ctx->pc = 0x147d2cu;
    // NOP
}
