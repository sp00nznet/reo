#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00111D48
// Address: 0x111d48 - 0x111db0
void sub_00111D48_0x111d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x111d48u;

    // 0x111d48: 0x27bdff80
    ctx->pc = 0x111d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x111d4c: 0xffa40060
    ctx->pc = 0x111d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x111d50: 0x27a40060
    ctx->pc = 0x111d50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x111d54: 0xffa50068
    ctx->pc = 0x111d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x111d58: 0xffb00070
    ctx->pc = 0x111d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x111d5c: 0xffbf0078
    ctx->pc = 0x111d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x111d60: 0xc044674
    ctx->pc = 0x111D60u;
    SET_GPR_U32(ctx, 31, 0x111D68u);
    ctx->pc = 0x111D64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D68u; }
    }
    if (ctx->pc != 0x111D68u) { return; }
    ctx->pc = 0x111D68u;
    // 0x111d68: 0x27b00020
    ctx->pc = 0x111d68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x111d6c: 0x27a40068
    ctx->pc = 0x111d6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x111d70: 0xc044674
    ctx->pc = 0x111D70u;
    SET_GPR_U32(ctx, 31, 0x111D78u);
    ctx->pc = 0x111D74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001119D0_0x1119d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D78u; }
    }
    if (ctx->pc != 0x111D78u) { return; }
    ctx->pc = 0x111D78u;
    // 0x111d78: 0x200282d
    ctx->pc = 0x111d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d7c: 0x8fa20024
    ctx->pc = 0x111d7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x111d80: 0x3a0202d
    ctx->pc = 0x111d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d84: 0x27a60040
    ctx->pc = 0x111d84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x111d88: 0x38420001
    ctx->pc = 0x111d88u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x111d8c: 0xc0446a4
    ctx->pc = 0x111D8Cu;
    SET_GPR_U32(ctx, 31, 0x111D94u);
    ctx->pc = 0x111D90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->pc = 0x111A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111A90_0x111a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D94u; }
    }
    if (ctx->pc != 0x111D94u) { return; }
    ctx->pc = 0x111D94u;
    // 0x111d94: 0xc04463e
    ctx->pc = 0x111D94u;
    SET_GPR_U32(ctx, 31, 0x111D9Cu);
    ctx->pc = 0x111D98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1118F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001118F8_0x1118f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D9Cu; }
    }
    if (ctx->pc != 0x111D9Cu) { return; }
    ctx->pc = 0x111D9Cu;
    // 0x111d9c: 0xdfb00070
    ctx->pc = 0x111d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x111da0: 0xdfbf0078
    ctx->pc = 0x111da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x111da4: 0x3e00008
    ctx->pc = 0x111DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111DA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111DACu;
    // 0x111dac: 0x0
    ctx->pc = 0x111dacu;
    // NOP
}
