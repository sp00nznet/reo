#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_125488
// Address: 0x125488 - 0x1254f8
void entry_125488_0x1254f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125488u;

    // 0x125488: 0x27bdffd0
    ctx->pc = 0x125488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12548c: 0xffb20010
    ctx->pc = 0x12548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x125490: 0xa0902d
    ctx->pc = 0x125490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125494: 0xffb10008
    ctx->pc = 0x125494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125498: 0x80882d
    ctx->pc = 0x125498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12549c: 0xffb30018
    ctx->pc = 0x12549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1254a0: 0xe0982d
    ctx->pc = 0x1254a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254a4: 0x122840
    ctx->pc = 0x1254a4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 1));
    // 0x1254a8: 0xffb00000
    ctx->pc = 0x1254a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1254ac: 0x2252821
    ctx->pc = 0x1254acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1254b0: 0xc0802d
    ctx->pc = 0x1254b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254b4: 0xffbf0020
    ctx->pc = 0x1254b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1254b8: 0xc049516
    ctx->pc = 0x1254B8u;
    SET_GPR_U32(ctx, 31, 0x1254C0u);
    ctx->pc = 0x1254BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125458u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00125458_0x125458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1254C0u; }
    }
    if (ctx->pc != 0x1254C0u) { return; }
    ctx->pc = 0x1254C0u;
    // 0x1254c0: 0x102040
    ctx->pc = 0x1254c0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1254c4: 0x2128021
    ctx->pc = 0x1254c4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1254c8: 0xdfb20010
    ctx->pc = 0x1254c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1254cc: 0x108040
    ctx->pc = 0x1254ccu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1254d0: 0x2242021
    ctx->pc = 0x1254d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1254d4: 0x2302821
    ctx->pc = 0x1254d4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1254d8: 0xdfb00000
    ctx->pc = 0x1254d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1254dc: 0x260302d
    ctx->pc = 0x1254dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254e0: 0xdfb30018
    ctx->pc = 0x1254e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1254e4: 0xdfb10008
    ctx->pc = 0x1254e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1254e8: 0xdfbf0020
    ctx->pc = 0x1254e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1254ec: 0x8049516
    ctx->pc = 0x1254ECu;
    ctx->pc = 0x1254F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x125458u;
    sub_00125458_0x125458(rdram, ctx, runtime); return;
    ctx->pc = 0x1254F4u;
    // 0x1254f4: 0x0
    ctx->pc = 0x1254f4u;
    // NOP
}
