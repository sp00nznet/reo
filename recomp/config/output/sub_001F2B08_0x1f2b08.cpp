#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F2B08
// Address: 0x1f2b08 - 0x1f2b58
void sub_001F2B08_0x1f2b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f2b08u;

    // 0x1f2b08: 0x27bdffe0
    ctx->pc = 0x1f2b08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f2b0c: 0xffbe0010
    ctx->pc = 0x1f2b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1f2b10: 0xffbf0018
    ctx->pc = 0x1f2b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f2b14: 0x3a0f02d
    ctx->pc = 0x1f2b14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b18: 0xafc40000
    ctx->pc = 0x1f2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1f2b1c: 0xafc50004
    ctx->pc = 0x1f2b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1f2b20: 0x8fc20000
    ctx->pc = 0x1f2b20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1f2b24: 0x2442003c
    ctx->pc = 0x1f2b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 60));
    // 0x1f2b28: 0x8fc40004
    ctx->pc = 0x1f2b28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1f2b2c: 0x40282d
    ctx->pc = 0x1f2b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b30: 0x24060034
    ctx->pc = 0x1f2b30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 52));
    // 0x1f2b34: 0xc041eac
    ctx->pc = 0x1F2B34u;
    SET_GPR_U32(ctx, 31, 0x1F2B3Cu);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B3Cu; }
    }
    if (ctx->pc != 0x1F2B3Cu) { return; }
    ctx->pc = 0x1F2B3Cu;
    // 0x1f2b3c: 0x102d
    ctx->pc = 0x1f2b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b40: 0x3c0e82d
    ctx->pc = 0x1f2b40u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b44: 0xdfbe0010
    ctx->pc = 0x1f2b44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2b48: 0xdfbf0018
    ctx->pc = 0x1f2b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b4c: 0x27bd0020
    ctx->pc = 0x1f2b4cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f2b50: 0x3e00008
    ctx->pc = 0x1F2B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2B58u;
}
