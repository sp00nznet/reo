#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E3F0
// Address: 0x15e3f0 - 0x15e478
void sub_0015E3F0_0x15e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e3f0u;

    // 0x15e3f0: 0x27bdfff0
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e3f4: 0xffb00000
    ctx->pc = 0x15e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e3f8: 0xffbf0008
    ctx->pc = 0x15e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15e3fc: 0xc057ff0
    ctx->pc = 0x15E3FCu;
    SET_GPR_U32(ctx, 31, 0x15E404u);
    ctx->pc = 0x15E400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E404u; }
    }
    if (ctx->pc != 0x15E404u) { return; }
    ctx->pc = 0x15E404u;
    // 0x15e404: 0x1440000a
    ctx->pc = 0x15E404u;
    {
        const bool branch_taken_0x15e404 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15E408u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15e404) {
            ctx->pc = 0x15E430u;
            goto label_15e430;
        }
    }
    ctx->pc = 0x15E40Cu;
    // 0x15e40c: 0x3c040024
    ctx->pc = 0x15e40cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15e410: 0xc058dd4
    ctx->pc = 0x15E410u;
    SET_GPR_U32(ctx, 31, 0x15E418u);
    ctx->pc = 0x15E414u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962520));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E418u; }
    }
    if (ctx->pc != 0x15E418u) { return; }
    ctx->pc = 0x15E418u;
    // 0x15e418: 0x102d
    ctx->pc = 0x15e418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e41c: 0xdfb00000
    ctx->pc = 0x15e41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e420: 0xdfbf0008
    ctx->pc = 0x15e420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15e424: 0x3e00008
    ctx->pc = 0x15E424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E428u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E430u: goto label_15e430;
            case 0x15E470u: goto label_15e470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E42Cu;
    // 0x15e42c: 0x0
    ctx->pc = 0x15e42cu;
    // NOP
label_15e430:
    // 0x15e430: 0xc057ec8
    ctx->pc = 0x15E430u;
    SET_GPR_U32(ctx, 31, 0x15E438u);
    ctx->pc = 0x15FB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FB20_0x15fb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E438u; }
    }
    if (ctx->pc != 0x15E438u) { return; }
    ctx->pc = 0x15E438u;
    // 0x15e438: 0xdfb00000
    ctx->pc = 0x15e438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e43c: 0x40202d
    ctx->pc = 0x15e43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e440: 0xdfbf0008
    ctx->pc = 0x15e440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15e444: 0x805affc
    ctx->pc = 0x15E444u;
    ctx->pc = 0x15E448u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16BFF0u;
    entry_16bff0_0x16c0e8(rdram, ctx, runtime); return;
    ctx->pc = 0x15E44Cu;
    // 0x15e44c: 0x0
    ctx->pc = 0x15e44cu;
    // NOP
    // 0x15e450: 0x8c850080
    ctx->pc = 0x15e450u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x15e454: 0x8c82007c
    ctx->pc = 0x15e454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x15e458: 0x24a40001
    ctx->pc = 0x15e458u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 1));
    // 0x15e45c: 0xa2182a
    ctx->pc = 0x15e45cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x15e460: 0x14600003
    ctx->pc = 0x15E460u;
    {
        const bool branch_taken_0x15e460 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15E464u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        if (branch_taken_0x15e460) {
            ctx->pc = 0x15E470u;
            goto label_15e470;
        }
    }
    ctx->pc = 0x15E468u;
    // 0x15e468: 0x202d
    ctx->pc = 0x15e468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e46c: 0xa2200a
    ctx->pc = 0x15e46cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_15e470:
    // 0x15e470: 0x3e00008
    ctx->pc = 0x15E470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E474u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E430u: goto label_15e430;
            case 0x15E470u: goto label_15e470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E478u;
}
