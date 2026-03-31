#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001669E0
// Address: 0x1669e0 - 0x166a20
void sub_001669E0_0x1669e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1669e0u;

    // 0x1669e0: 0x27bdfff0
    ctx->pc = 0x1669e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1669e4: 0x282d
    ctx->pc = 0x1669e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669e8: 0xffb00000
    ctx->pc = 0x1669e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1669ec: 0xffbf0008
    ctx->pc = 0x1669ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1669f0: 0xc059a88
    ctx->pc = 0x1669F0u;
    SET_GPR_U32(ctx, 31, 0x1669F8u);
    ctx->pc = 0x1669F4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166A20_0x166a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1669F8u; }
    }
    if (ctx->pc != 0x1669F8u) { return; }
    ctx->pc = 0x1669F8u;
    // 0x1669f8: 0x200202d
    ctx->pc = 0x1669f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1669fc: 0xc059a88
    ctx->pc = 0x1669FCu;
    SET_GPR_U32(ctx, 31, 0x166A04u);
    ctx->pc = 0x166A00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x166A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166A20_0x166a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166A04u; }
    }
    if (ctx->pc != 0x166A04u) { return; }
    ctx->pc = 0x166A04u;
    // 0x166a04: 0x200202d
    ctx->pc = 0x166a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a08: 0xdfbf0008
    ctx->pc = 0x166a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166a0c: 0x24050002
    ctx->pc = 0x166a0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x166a10: 0xdfb00000
    ctx->pc = 0x166a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166a14: 0x8059a88
    ctx->pc = 0x166A14u;
    ctx->pc = 0x166A18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x166A20u;
    sub_00166A20_0x166a20(rdram, ctx, runtime); return;
    ctx->pc = 0x166A1Cu;
    // 0x166a1c: 0x0
    ctx->pc = 0x166a1cu;
    // NOP
}
