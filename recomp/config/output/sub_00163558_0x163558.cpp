#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163558
// Address: 0x163558 - 0x163598
void sub_00163558_0x163558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163558u;

    // 0x163558: 0x27bdfff0
    ctx->pc = 0x163558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16355c: 0xa0102d
    ctx->pc = 0x16355cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163560: 0xffb00000
    ctx->pc = 0x163560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163564: 0x80802d
    ctx->pc = 0x163564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163568: 0x200282d
    ctx->pc = 0x163568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16356c: 0xc0382d
    ctx->pc = 0x16356cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163570: 0x24040002
    ctx->pc = 0x163570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x163574: 0xffbf0008
    ctx->pc = 0x163574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x163578: 0xc050716
    ctx->pc = 0x163578u;
    SET_GPR_U32(ctx, 31, 0x163580u);
    ctx->pc = 0x16357Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141C58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141C58_0x141c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163580u; }
    }
    if (ctx->pc != 0x163580u) { return; }
    ctx->pc = 0x163580u;
    // 0x163580: 0x3c020027
    ctx->pc = 0x163580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x163584: 0xdfbf0008
    ctx->pc = 0x163584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163588: 0xac500744
    ctx->pc = 0x163588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1860), GPR_U32(ctx, 16));
    // 0x16358c: 0xdfb00000
    ctx->pc = 0x16358cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163590: 0x3e00008
    ctx->pc = 0x163590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163594u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163598u;
}
