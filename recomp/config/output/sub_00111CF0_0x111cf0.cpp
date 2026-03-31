#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00111CF0
// Address: 0x111cf0 - 0x111d48
void sub_00111CF0_0x111cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x111cf0u;

    // 0x111cf0: 0x27bdff80
    ctx->pc = 0x111cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x111cf4: 0xffa40060
    ctx->pc = 0x111cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x111cf8: 0x27a40060
    ctx->pc = 0x111cf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x111cfc: 0xffa50068
    ctx->pc = 0x111cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x111d00: 0xffb00070
    ctx->pc = 0x111d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x111d04: 0xffbf0078
    ctx->pc = 0x111d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x111d08: 0xc044674
    ctx->pc = 0x111D08u;
    SET_GPR_U32(ctx, 31, 0x111D10u);
    ctx->pc = 0x111D0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D10u; }
    }
    if (ctx->pc != 0x111D10u) { return; }
    ctx->pc = 0x111D10u;
    // 0x111d10: 0x27b00020
    ctx->pc = 0x111d10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x111d14: 0x27a40068
    ctx->pc = 0x111d14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x111d18: 0xc044674
    ctx->pc = 0x111D18u;
    SET_GPR_U32(ctx, 31, 0x111D20u);
    ctx->pc = 0x111D1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D20u; }
    }
    if (ctx->pc != 0x111D20u) { return; }
    ctx->pc = 0x111D20u;
    // 0x111d20: 0x200282d
    ctx->pc = 0x111d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d24: 0x3a0202d
    ctx->pc = 0x111d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d28: 0xc0446a4
    ctx->pc = 0x111D28u;
    SET_GPR_U32(ctx, 31, 0x111D30u);
    ctx->pc = 0x111D2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x111A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111A90_0x111a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D30u; }
    }
    if (ctx->pc != 0x111D30u) { return; }
    ctx->pc = 0x111D30u;
    // 0x111d30: 0xc04463e
    ctx->pc = 0x111D30u;
    SET_GPR_U32(ctx, 31, 0x111D38u);
    ctx->pc = 0x111D34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1118F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118F8_0x1118f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D38u; }
    }
    if (ctx->pc != 0x111D38u) { return; }
    ctx->pc = 0x111D38u;
    // 0x111d38: 0xdfb00070
    ctx->pc = 0x111d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x111d3c: 0xdfbf0078
    ctx->pc = 0x111d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x111d40: 0x3e00008
    ctx->pc = 0x111D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111D44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111D48u;
}
