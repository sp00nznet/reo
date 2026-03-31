#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001614E8
// Address: 0x1614e8 - 0x161578
void sub_001614E8_0x1614e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1614e8u;

    // 0x1614e8: 0x27bdfff0
    ctx->pc = 0x1614e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1614ec: 0xffb00000
    ctx->pc = 0x1614ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1614f0: 0xffbf0008
    ctx->pc = 0x1614f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1614f4: 0xc0582e4
    ctx->pc = 0x1614F4u;
    SET_GPR_U32(ctx, 31, 0x1614FCu);
    ctx->pc = 0x1614F8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614FCu; }
    }
    if (ctx->pc != 0x1614FCu) { return; }
    ctx->pc = 0x1614FCu;
    // 0x1614fc: 0xdfbf0008
    ctx->pc = 0x1614fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161500: 0x200282d
    ctx->pc = 0x161500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161504: 0xdfb00000
    ctx->pc = 0x161504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161508: 0x40202d
    ctx->pc = 0x161508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16150c: 0x805f492
    ctx->pc = 0x16150Cu;
    ctx->pc = 0x161510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D248u;
    sub_0017D248_0x17d248(rdram, ctx, runtime); return;
    ctx->pc = 0x161514u;
    // 0x161514: 0x0
    ctx->pc = 0x161514u;
    // NOP
    // 0x161518: 0x27bdfff0
    ctx->pc = 0x161518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16151c: 0xffb00000
    ctx->pc = 0x16151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161520: 0xffbf0008
    ctx->pc = 0x161520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x161524: 0xc057ff0
    ctx->pc = 0x161524u;
    SET_GPR_U32(ctx, 31, 0x16152Cu);
    ctx->pc = 0x161528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16152Cu; }
    }
    if (ctx->pc != 0x16152Cu) { return; }
    ctx->pc = 0x16152Cu;
    // 0x16152c: 0x1440000a
    ctx->pc = 0x16152Cu;
    {
        const bool branch_taken_0x16152c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161530u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16152c) {
            ctx->pc = 0x161558u;
            goto label_161558;
        }
    }
    ctx->pc = 0x161534u;
    // 0x161534: 0x3c040024
    ctx->pc = 0x161534u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x161538: 0xc058dd4
    ctx->pc = 0x161538u;
    SET_GPR_U32(ctx, 31, 0x161540u);
    ctx->pc = 0x16153Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966512));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161540u; }
    }
    if (ctx->pc != 0x161540u) { return; }
    ctx->pc = 0x161540u;
    // 0x161540: 0x102d
    ctx->pc = 0x161540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161544: 0xdfb00000
    ctx->pc = 0x161544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161548: 0xdfbf0008
    ctx->pc = 0x161548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16154c: 0x3e00008
    ctx->pc = 0x16154Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161550u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161558u: goto label_161558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161554u;
    // 0x161554: 0x0
    ctx->pc = 0x161554u;
    // NOP
label_161558:
    // 0x161558: 0xc0582e4
    ctx->pc = 0x161558u;
    SET_GPR_U32(ctx, 31, 0x161560u);
    ctx->pc = 0x160B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B90_0x160b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161560u; }
    }
    if (ctx->pc != 0x161560u) { return; }
    ctx->pc = 0x161560u;
    // 0x161560: 0xdfb00000
    ctx->pc = 0x161560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161564: 0x40202d
    ctx->pc = 0x161564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161568: 0xdfbf0008
    ctx->pc = 0x161568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16156c: 0x805f494
    ctx->pc = 0x16156Cu;
    ctx->pc = 0x161570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D250u;
    sub_0017D250_0x17d250(rdram, ctx, runtime); return;
    ctx->pc = 0x161574u;
    // 0x161574: 0x0
    ctx->pc = 0x161574u;
    // NOP
}
