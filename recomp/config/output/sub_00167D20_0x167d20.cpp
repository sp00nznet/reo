#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00167D20
// Address: 0x167d20 - 0x167d70
void sub_00167D20_0x167d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x167d20u;

    // 0x167d20: 0x27bdffd0
    ctx->pc = 0x167d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167d24: 0xffbf0020
    ctx->pc = 0x167d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167d28: 0xc059bfa
    ctx->pc = 0x167D28u;
    SET_GPR_U32(ctx, 31, 0x167D30u);
    ctx->pc = 0x167D2Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166FE8_0x166fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D30u; }
    }
    if (ctx->pc != 0x167D30u) { return; }
    ctx->pc = 0x167D30u;
    // 0x167d30: 0x8fa30004
    ctx->pc = 0x167d30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x167d34: 0x8fa2000c
    ctx->pc = 0x167d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x167d38: 0xdfbf0020
    ctx->pc = 0x167d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167d3c: 0x621021
    ctx->pc = 0x167d3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167d40: 0x3e00008
    ctx->pc = 0x167D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167D44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167D48u;
    // 0x167d48: 0x27bdffd0
    ctx->pc = 0x167d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167d4c: 0xffbf0020
    ctx->pc = 0x167d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167d50: 0xc059bf4
    ctx->pc = 0x167D50u;
    SET_GPR_U32(ctx, 31, 0x167D58u);
    ctx->pc = 0x167D54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166FD0_0x166fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D58u; }
    }
    if (ctx->pc != 0x167D58u) { return; }
    ctx->pc = 0x167D58u;
    // 0x167d58: 0x8fa30004
    ctx->pc = 0x167d58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x167d5c: 0x8fa2000c
    ctx->pc = 0x167d5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x167d60: 0xdfbf0020
    ctx->pc = 0x167d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167d64: 0x621021
    ctx->pc = 0x167d64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167d68: 0x3e00008
    ctx->pc = 0x167D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167D6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167D70u;
}
