#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016C560
// Address: 0x16c560 - 0x16c5a8
void sub_0016C560_0x16c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16c560u;

    // 0x16c560: 0x27bdfff0
    ctx->pc = 0x16c560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c564: 0x80282d
    ctx->pc = 0x16c564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c568: 0xffbf0008
    ctx->pc = 0x16c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16c56c: 0xffb00000
    ctx->pc = 0x16c56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c570: 0x8cb009fc
    ctx->pc = 0x16c570u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 2556)));
    // 0x16c574: 0x8ca2002c
    ctx->pc = 0x16c574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x16c578: 0x101827
    ctx->pc = 0x16c578u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x16c57c: 0x43800a
    ctx->pc = 0x16c57cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x16c580: 0x50282a
    ctx->pc = 0x16c580u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x16c584: 0xc05c164
    ctx->pc = 0x16C584u;
    SET_GPR_U32(ctx, 31, 0x16C58Cu);
    ctx->pc = 0x16C588u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    ctx->pc = 0x170590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170590_0x170590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C58Cu; }
    }
    if (ctx->pc != 0x16C58Cu) { return; }
    ctx->pc = 0x16C58Cu;
    // 0x16c58c: 0x50102a
    ctx->pc = 0x16c58cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x16c590: 0xdfb00000
    ctx->pc = 0x16c590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c594: 0xdfbf0008
    ctx->pc = 0x16c594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c598: 0x2c420001
    ctx->pc = 0x16c598u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x16c59c: 0x3e00008
    ctx->pc = 0x16C59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C5A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C5A4u;
    // 0x16c5a4: 0x0
    ctx->pc = 0x16c5a4u;
    // NOP
}
