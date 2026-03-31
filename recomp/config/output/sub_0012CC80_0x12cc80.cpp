#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012CC80
// Address: 0x12cc80 - 0x12ccb0
void sub_0012CC80_0x12cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12cc80u;

    // 0x12cc80: 0x27bdfff0
    ctx->pc = 0x12cc80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12cc84: 0xffb00000
    ctx->pc = 0x12cc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12cc88: 0xffbf0008
    ctx->pc = 0x12cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12cc8c: 0xc04b268
    ctx->pc = 0x12CC8Cu;
    SET_GPR_U32(ctx, 31, 0x12CC94u);
    ctx->pc = 0x12CC90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C9A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C9A0_0x12c9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CC94u; }
    }
    if (ctx->pc != 0x12CC94u) { return; }
    ctx->pc = 0x12CC94u;
    // 0x12cc94: 0x24020001
    ctx->pc = 0x12cc94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cc98: 0xdfbf0008
    ctx->pc = 0x12cc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cc9c: 0xa2020001
    ctx->pc = 0x12cc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x12cca0: 0xdfb00000
    ctx->pc = 0x12cca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cca4: 0x3e00008
    ctx->pc = 0x12CCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CCA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CCACu;
    // 0x12ccac: 0x0
    ctx->pc = 0x12ccacu;
    // NOP
}
