#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7CD0
// Address: 0x1c7cd0 - 0x1c7d00
void sub_001C7CD0_0x1c7cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7cd0u;

    // 0x1c7cd0: 0x27bdffe0
    ctx->pc = 0x1c7cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7cd4: 0xffbf0010
    ctx->pc = 0x1c7cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c7cd8: 0x7fb00000
    ctx->pc = 0x1c7cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7cdc: 0xc07224c
    ctx->pc = 0x1C7CDCu;
    SET_GPR_U32(ctx, 31, 0x1C7CE4u);
    ctx->pc = 0x1C7CE0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8930_0x1c8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CE4u; }
    }
    if (ctx->pc != 0x1C7CE4u) { return; }
    ctx->pc = 0x1C7CE4u;
    // 0x1c7ce4: 0xc072250
    ctx->pc = 0x1C7CE4u;
    SET_GPR_U32(ctx, 31, 0x1C7CECu);
    ctx->pc = 0x1C7CE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C8940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8940_0x1c8940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CECu; }
    }
    if (ctx->pc != 0x1C7CECu) { return; }
    ctx->pc = 0x1C7CECu;
    // 0x1c7cec: 0xdfbf0010
    ctx->pc = 0x1c7cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7cf0: 0x7bb00000
    ctx->pc = 0x1c7cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7cf4: 0x3e00008
    ctx->pc = 0x1C7CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7CF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7CFCu;
    // 0x1c7cfc: 0x0
    ctx->pc = 0x1c7cfcu;
    // NOP
}
