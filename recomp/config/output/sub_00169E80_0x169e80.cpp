#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169E80
// Address: 0x169e80 - 0x169ea0
void sub_00169E80_0x169e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169e80u;

    // 0x169e80: 0x27bdfff0
    ctx->pc = 0x169e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169e84: 0xffbf0000
    ctx->pc = 0x169e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169e88: 0xc05c908
    ctx->pc = 0x169E88u;
    SET_GPR_U32(ctx, 31, 0x169E90u);
    ctx->pc = 0x172420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172420_0x172420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169E90u; }
    }
    if (ctx->pc != 0x169E90u) { return; }
    ctx->pc = 0x169E90u;
    // 0x169e90: 0xdfbf0000
    ctx->pc = 0x169e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169e94: 0x805a3ca
    ctx->pc = 0x169E94u;
    ctx->pc = 0x169E98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x168F28u;
    entry_168f28_0x168f48(rdram, ctx, runtime); return;
    ctx->pc = 0x169E9Cu;
    // 0x169e9c: 0x0
    ctx->pc = 0x169e9cu;
    // NOP
}
