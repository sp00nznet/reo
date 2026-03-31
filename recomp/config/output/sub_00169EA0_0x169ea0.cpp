#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169EA0
// Address: 0x169ea0 - 0x169eb8
void sub_00169EA0_0x169ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169ea0u;

    // 0x169ea0: 0x27bdfff0
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169ea4: 0xffbf0000
    ctx->pc = 0x169ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169ea8: 0xdfbf0000
    ctx->pc = 0x169ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169eac: 0x805a3d2
    ctx->pc = 0x169EACu;
    ctx->pc = 0x169EB0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x168F48u;
    entry_168f48_0x168f60(rdram, ctx, runtime); return;
    ctx->pc = 0x169EB4u;
    // 0x169eb4: 0x0
    ctx->pc = 0x169eb4u;
    // NOP
}
