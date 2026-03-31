#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13c9c0
// Address: 0x13c9c0 - 0x13c9e8
void entry_13c9c0_0x13c9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13c9c0u;

    // 0x13c9c0: 0x27bdffe0
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c9c4: 0xffbf0010
    ctx->pc = 0x13c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c9c8: 0xc04f1fa
    ctx->pc = 0x13C9C8u;
    SET_GPR_U32(ctx, 31, 0x13C9D0u);
    ctx->pc = 0x13C9CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13C7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C7E8_0x13c7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C9D0u; }
    }
    if (ctx->pc != 0x13C9D0u) { return; }
    ctx->pc = 0x13C9D0u;
    // 0x13c9d0: 0x8fa20004
    ctx->pc = 0x13c9d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13c9d4: 0xdfbf0010
    ctx->pc = 0x13c9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c9d8: 0x2102b
    ctx->pc = 0x13c9d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13c9dc: 0x3e00008
    ctx->pc = 0x13C9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C9E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C9E4u;
    // 0x13c9e4: 0x0
    ctx->pc = 0x13c9e4u;
    // NOP
}
