#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_161590
// Address: 0x161590 - 0x1615d8
void entry_161590_0x1615d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x161590u;

    // 0x161590: 0x27bdfff0
    ctx->pc = 0x161590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161594: 0xffbf0000
    ctx->pc = 0x161594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161598: 0xdfbf0000
    ctx->pc = 0x161598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16159c: 0x805855e
    ctx->pc = 0x16159Cu;
    ctx->pc = 0x1615A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x161578u;
    sub_00161578_0x161578(rdram, ctx, runtime); return;
    ctx->pc = 0x1615A4u;
    // 0x1615a4: 0x0
    ctx->pc = 0x1615a4u;
    // NOP
    // 0x1615a8: 0x27bdfff0
    ctx->pc = 0x1615a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1615ac: 0xffbf0000
    ctx->pc = 0x1615acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1615b0: 0x8c8400a8
    ctx->pc = 0x1615b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1615b4: 0xdfbf0000
    ctx->pc = 0x1615b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1615b8: 0x805f51a
    ctx->pc = 0x1615B8u;
    ctx->pc = 0x1615BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D468u;
    sub_0017D468_0x17d468(rdram, ctx, runtime); return;
    ctx->pc = 0x1615C0u;
    // 0x1615c0: 0x27bdfff0
    ctx->pc = 0x1615c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1615c4: 0x382d
    ctx->pc = 0x1615c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615c8: 0xffbf0000
    ctx->pc = 0x1615c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1615cc: 0xdfbf0000
    ctx->pc = 0x1615ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1615d0: 0x80585a2
    ctx->pc = 0x1615D0u;
    ctx->pc = 0x1615D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x161688u;
    entry_161688_0x1618b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1615D8u;
}
