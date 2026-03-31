#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d620
// Address: 0x17d620 - 0x17d638
void entry_17d620_0x17d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d620u;

    // 0x17d620: 0x27bdfff0
    ctx->pc = 0x17d620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d624: 0xffbf0000
    ctx->pc = 0x17d624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d628: 0xdfbf0000
    ctx->pc = 0x17d628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d62c: 0x8052490
    ctx->pc = 0x17D62Cu;
    ctx->pc = 0x17D630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x149240u;
    sub_00149240_0x149240(rdram, ctx, runtime); return;
    ctx->pc = 0x17D634u;
    // 0x17d634: 0x0
    ctx->pc = 0x17d634u;
    // NOP
}
