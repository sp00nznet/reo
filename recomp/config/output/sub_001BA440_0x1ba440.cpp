#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BA440
// Address: 0x1ba440 - 0x1ba4c0
void sub_001BA440_0x1ba440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ba440u;

    // 0x1ba440: 0x27bdfed0
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1ba444: 0xffbf0020
    ctx->pc = 0x1ba444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ba448: 0x7fb10010
    ctx->pc = 0x1ba448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ba44c: 0x80882d
    ctx->pc = 0x1ba44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba450: 0x7fb00000
    ctx->pc = 0x1ba450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba454: 0x2a210005
    ctx->pc = 0x1ba454u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 5));
    // 0x1ba458: 0x10200014
    ctx->pc = 0x1BA458u;
    {
        const bool branch_taken_0x1ba458 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA45Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ba458) {
            ctx->pc = 0x1BA4ACu;
            goto label_1ba4ac;
        }
    }
    ctx->pc = 0x1BA460u;
    // 0x1ba460: 0x3c050025
    ctx->pc = 0x1ba460u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1ba464: 0x27a40030
    ctx->pc = 0x1ba464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba468: 0x24a50220
    ctx->pc = 0x1ba468u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 544));
    // 0x1ba46c: 0xc042a0c
    ctx->pc = 0x1BA46Cu;
    SET_GPR_U32(ctx, 31, 0x1BA474u);
    ctx->pc = 0x1BA470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA474u; }
    }
    if (ctx->pc != 0x1BA474u) { return; }
    ctx->pc = 0x1BA474u;
    // 0x1ba474: 0x220202d
    ctx->pc = 0x1ba474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba478: 0xc06ad14
    ctx->pc = 0x1BA478u;
    SET_GPR_U32(ctx, 31, 0x1BA480u);
    ctx->pc = 0x1BA47Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AB450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB450_0x1ab450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA480u; }
    }
    if (ctx->pc != 0x1BA480u) { return; }
    ctx->pc = 0x1BA480u;
    // 0x1ba480: 0x10400007
    ctx->pc = 0x1BA480u;
    {
        const bool branch_taken_0x1ba480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA484u;
        SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
        if (branch_taken_0x1ba480) {
            ctx->pc = 0x1BA4A0u;
            goto label_1ba4a0;
        }
    }
    ctx->pc = 0x1BA488u;
    // 0x1ba488: 0x3c03004c
    ctx->pc = 0x1ba488u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
    // 0x1ba48c: 0x26040001
    ctx->pc = 0x1ba48cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ba490: 0x2463ae71
    ctx->pc = 0x1ba490u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946417));
    // 0x1ba494: 0x711821
    ctx->pc = 0x1ba494u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ba498: 0x10000004
    ctx->pc = 0x1BA498u;
    {
        const bool branch_taken_0x1ba498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA49Cu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1ba498) {
            ctx->pc = 0x1BA4ACu;
            goto label_1ba4ac;
        }
    }
    ctx->pc = 0x1BA4A0u;
label_1ba4a0:
    // 0x1ba4a0: 0x2463ae71
    ctx->pc = 0x1ba4a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946417));
    // 0x1ba4a4: 0x711821
    ctx->pc = 0x1ba4a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ba4a8: 0xa0600000
    ctx->pc = 0x1ba4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ba4ac:
    // 0x1ba4ac: 0xdfbf0020
    ctx->pc = 0x1ba4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba4b0: 0x7bb10010
    ctx->pc = 0x1ba4b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba4b4: 0x7bb00000
    ctx->pc = 0x1ba4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba4b8: 0x3e00008
    ctx->pc = 0x1BA4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA4BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA4A0u: goto label_1ba4a0;
            case 0x1BA4ACu: goto label_1ba4ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA4C0u;
}
