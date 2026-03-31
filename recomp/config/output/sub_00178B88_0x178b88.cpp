#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00178B88
// Address: 0x178b88 - 0x178bc0
void sub_00178B88_0x178b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x178b88u;

    // 0x178b88: 0x3e00008
    ctx->pc = 0x178B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178B8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178B90u;
    // 0x178b90: 0x27bdfff0
    ctx->pc = 0x178b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178b94: 0x80102d
    ctx->pc = 0x178b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b98: 0xffbf0000
    ctx->pc = 0x178b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178b9c: 0x24452a78
    ctx->pc = 0x178b9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 10872));
    // 0x178ba0: 0x24421cc0
    ctx->pc = 0x178ba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7360));
    // 0x178ba4: 0xac450008
    ctx->pc = 0x178ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x178ba8: 0xc05e2f0
    ctx->pc = 0x178BA8u;
    SET_GPR_U32(ctx, 31, 0x178BB0u);
    ctx->pc = 0x178BACu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x178BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00178BC0_0x178bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BB0u; }
    }
    if (ctx->pc != 0x178BB0u) { return; }
    ctx->pc = 0x178BB0u;
    // 0x178bb0: 0x102d
    ctx->pc = 0x178bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bb4: 0xdfbf0000
    ctx->pc = 0x178bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178bb8: 0x3e00008
    ctx->pc = 0x178BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178BC0u;
}
