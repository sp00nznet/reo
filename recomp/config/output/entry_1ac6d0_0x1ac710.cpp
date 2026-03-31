#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1ac6d0
// Address: 0x1ac6d0 - 0x1ac710
void entry_1ac6d0_0x1ac710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ac6d0u;

    // 0x1ac6d0: 0x27bdfff0
    ctx->pc = 0x1ac6d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac6d4: 0xffbf0000
    ctx->pc = 0x1ac6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac6d8: 0xc069c78
    ctx->pc = 0x1AC6D8u;
    SET_GPR_U32(ctx, 31, 0x1AC6E0u);
    ctx->pc = 0x1A71E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A71E0_0x1a71e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6E0u; }
    }
    if (ctx->pc != 0x1AC6E0u) { return; }
    ctx->pc = 0x1AC6E0u;
    // 0x1ac6e0: 0x24040010
    ctx->pc = 0x1ac6e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac6e4: 0xc069fec
    ctx->pc = 0x1AC6E4u;
    SET_GPR_U32(ctx, 31, 0x1AC6ECu);
    ctx->pc = 0x1AC6E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A7FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7FB0_0x1a7fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6ECu; }
    }
    if (ctx->pc != 0x1AC6ECu) { return; }
    ctx->pc = 0x1AC6ECu;
    // 0x1ac6ec: 0x3c01002b
    ctx->pc = 0x1ac6ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1ac6f0: 0xc06b570
    ctx->pc = 0x1AC6F0u;
    SET_GPR_U32(ctx, 31, 0x1AC6F8u);
    ctx->pc = 0x1AC6F4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14392), GPR_U32(ctx, 0));
    ctx->pc = 0x1AD5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD5C0_0x1ad5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6F8u; }
    }
    if (ctx->pc != 0x1AC6F8u) { return; }
    ctx->pc = 0x1AC6F8u;
    // 0x1ac6f8: 0xdfbf0000
    ctx->pc = 0x1ac6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac6fc: 0x24020001
    ctx->pc = 0x1ac6fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac700: 0x3e00008
    ctx->pc = 0x1AC700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC708u;
    // 0x1ac708: 0x0
    ctx->pc = 0x1ac708u;
    // NOP
    // 0x1ac70c: 0x0
    ctx->pc = 0x1ac70cu;
    // NOP
}
