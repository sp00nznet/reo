#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5410
// Address: 0x1c5410 - 0x1c5480
void sub_001C5410_0x1c5410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5410u;

    // 0x1c5410: 0x27bdffc0
    ctx->pc = 0x1c5410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c5414: 0xffbf0030
    ctx->pc = 0x1c5414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c5418: 0x7fb20020
    ctx->pc = 0x1c5418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c541c: 0x7fb10010
    ctx->pc = 0x1c541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5420: 0x7fb00000
    ctx->pc = 0x1c5420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5424: 0x8c9200e8
    ctx->pc = 0x1c5424u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x1c5428: 0x26510008
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 8));
    // 0x1c542c: 0x26500108
    ctx->pc = 0x1c542cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 264));
    // 0x1c5430: 0xc06fd98
    ctx->pc = 0x1C5430u;
    SET_GPR_U32(ctx, 31, 0x1C5438u);
    ctx->pc = 0x1C5434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BF660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF660_0x1bf660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5438u; }
    }
    if (ctx->pc != 0x1C5438u) { return; }
    ctx->pc = 0x1C5438u;
    // 0x1c5438: 0xc0714ac
    ctx->pc = 0x1C5438u;
    SET_GPR_U32(ctx, 31, 0x1C5440u);
    ctx->pc = 0x1C543Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C52B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C52B0_0x1c52b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5440u; }
    }
    if (ctx->pc != 0x1C5440u) { return; }
    ctx->pc = 0x1C5440u;
    // 0x1c5440: 0xc0714c0
    ctx->pc = 0x1C5440u;
    SET_GPR_U32(ctx, 31, 0x1C5448u);
    ctx->pc = 0x1C5444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5300_0x1c5300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5448u; }
    }
    if (ctx->pc != 0x1C5448u) { return; }
    ctx->pc = 0x1C5448u;
    // 0x1c5448: 0x220202d
    ctx->pc = 0x1c5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c544c: 0xc0714d0
    ctx->pc = 0x1C544Cu;
    SET_GPR_U32(ctx, 31, 0x1C5454u);
    ctx->pc = 0x1C5450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C5340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5340_0x1c5340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5454u; }
    }
    if (ctx->pc != 0x1C5454u) { return; }
    ctx->pc = 0x1C5454u;
    // 0x1c5454: 0xc0714ec
    ctx->pc = 0x1C5454u;
    SET_GPR_U32(ctx, 31, 0x1C545Cu);
    ctx->pc = 0x1C5458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C53B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C53B0_0x1c53b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C545Cu; }
    }
    if (ctx->pc != 0x1C545Cu) { return; }
    ctx->pc = 0x1C545Cu;
    // 0x1c545c: 0xc0715a8
    ctx->pc = 0x1C545Cu;
    SET_GPR_U32(ctx, 31, 0x1C5464u);
    ctx->pc = 0x1C5460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C56A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C56A0_0x1c56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5464u; }
    }
    if (ctx->pc != 0x1C5464u) { return; }
    ctx->pc = 0x1C5464u;
    // 0x1c5464: 0xdfbf0030
    ctx->pc = 0x1c5464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5468: 0x7bb20020
    ctx->pc = 0x1c5468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c546c: 0x7bb10010
    ctx->pc = 0x1c546cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5470: 0x7bb00000
    ctx->pc = 0x1c5470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5474: 0x3e00008
    ctx->pc = 0x1C5474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5478u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C547Cu;
    // 0x1c547c: 0x0
    ctx->pc = 0x1c547cu;
    // NOP
}
