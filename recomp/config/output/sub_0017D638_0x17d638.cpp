#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D638
// Address: 0x17d638 - 0x17d650
void sub_0017D638_0x17d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d638u;

    // 0x17d638: 0x27bdfff0
    ctx->pc = 0x17d638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d63c: 0xffbf0000
    ctx->pc = 0x17d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d640: 0xdfbf0000
    ctx->pc = 0x17d640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d644: 0x805f8ee
    ctx->pc = 0x17D644u;
    ctx->pc = 0x17D648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E3B8u;
    entry_17e3b8_0x17e408(rdram, ctx, runtime); return;
    ctx->pc = 0x17D64Cu;
    // 0x17d64c: 0x0
    ctx->pc = 0x17d64cu;
    // NOP
}
