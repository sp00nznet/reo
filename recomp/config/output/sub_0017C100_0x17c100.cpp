#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017C100
// Address: 0x17c100 - 0x17c140
void sub_0017C100_0x17c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c100u;

    // 0x17c100: 0x27bdfff0
    ctx->pc = 0x17c100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c104: 0xc0382d
    ctx->pc = 0x17c104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c108: 0xffbf0000
    ctx->pc = 0x17c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c10c: 0x24060010
    ctx->pc = 0x17c10cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c110: 0xdfbf0000
    ctx->pc = 0x17c110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c114: 0x805f058
    ctx->pc = 0x17C114u;
    ctx->pc = 0x17C118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17C160u;
    entry_17c160_0x17c290(rdram, ctx, runtime); return;
    ctx->pc = 0x17C11Cu;
    // 0x17c11c: 0x0
    ctx->pc = 0x17c11cu;
    // NOP
    // 0x17c120: 0x27bdfff0
    ctx->pc = 0x17c120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c124: 0xc0382d
    ctx->pc = 0x17c124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c128: 0xffbf0000
    ctx->pc = 0x17c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c12c: 0x24060018
    ctx->pc = 0x17c12cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    // 0x17c130: 0xdfbf0000
    ctx->pc = 0x17c130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c134: 0x805f058
    ctx->pc = 0x17C134u;
    ctx->pc = 0x17C138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17C160u;
    entry_17c160_0x17c290(rdram, ctx, runtime); return;
    ctx->pc = 0x17C13Cu;
    // 0x17c13c: 0x0
    ctx->pc = 0x17c13cu;
    // NOP
}
