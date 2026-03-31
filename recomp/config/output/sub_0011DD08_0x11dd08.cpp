#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011DD08
// Address: 0x11dd08 - 0x11dd80
void sub_0011DD08_0x11dd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11dd08u;

    // 0x11dd08: 0x27bdffe0
    ctx->pc = 0x11dd08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11dd0c: 0xffb00000
    ctx->pc = 0x11dd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dd10: 0xffbf0010
    ctx->pc = 0x11dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11dd14: 0xc047712
    ctx->pc = 0x11DD14u;
    SET_GPR_U32(ctx, 31, 0x11DD1Cu);
    ctx->pc = 0x11DD18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11DC48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC48_0x11dc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DD1Cu; }
    }
    if (ctx->pc != 0x11DD1Cu) { return; }
    ctx->pc = 0x11DD1Cu;
    // 0x11dd1c: 0x200202d
    ctx->pc = 0x11dd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd20: 0xdfbf0010
    ctx->pc = 0x11dd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dd24: 0xdfb00000
    ctx->pc = 0x11dd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dd28: 0x8045090
    ctx->pc = 0x11DD28u;
    ctx->pc = 0x11DD2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x114240u;
    entry_114240_0x114260(rdram, ctx, runtime); return;
    ctx->pc = 0x11DD30u;
    // 0x11dd30: 0x27bdffe0
    ctx->pc = 0x11dd30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11dd34: 0xa0302d
    ctx->pc = 0x11dd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd38: 0xffb00000
    ctx->pc = 0x11dd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11dd3c: 0x80802d
    ctx->pc = 0x11dd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd40: 0xffbf0010
    ctx->pc = 0x11dd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11dd44: 0x3c040024
    ctx->pc = 0x11dd44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x11dd48: 0x200282d
    ctx->pc = 0x11dd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd4c: 0xc0476cc
    ctx->pc = 0x11DD4Cu;
    SET_GPR_U32(ctx, 31, 0x11DD54u);
    ctx->pc = 0x11DD50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937680));
    ctx->pc = 0x11DB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DB30_0x11db30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DD54u; }
    }
    if (ctx->pc != 0x11DD54u) { return; }
    ctx->pc = 0x11DD54u;
    // 0x11dd54: 0xc047712
    ctx->pc = 0x11DD54u;
    SET_GPR_U32(ctx, 31, 0x11DD5Cu);
    ctx->pc = 0x11DC48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC48_0x11dc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DD5Cu; }
    }
    if (ctx->pc != 0x11DD5Cu) { return; }
    ctx->pc = 0x11DD5Cu;
    // 0x11dd5c: 0x3c020021
    ctx->pc = 0x11dd5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x11dd60: 0x200202d
    ctx->pc = 0x11dd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd64: 0x8c45a180
    ctx->pc = 0x11dd64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294943104)));
    // 0x11dd68: 0xdfbf0010
    ctx->pc = 0x11dd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dd6c: 0xdfb00000
    ctx->pc = 0x11dd6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dd70: 0x24a50004
    ctx->pc = 0x11dd70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x11dd74: 0x8045290
    ctx->pc = 0x11DD74u;
    ctx->pc = 0x11DD78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x114A40u;
    entry_114a40_0x114a50(rdram, ctx, runtime); return;
    ctx->pc = 0x11DD7Cu;
    // 0x11dd7c: 0x0
    ctx->pc = 0x11dd7cu;
    // NOP
}
