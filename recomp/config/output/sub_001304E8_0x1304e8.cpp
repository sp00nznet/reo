#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001304E8
// Address: 0x1304e8 - 0x130520
void sub_001304E8_0x1304e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1304e8u;

    // 0x1304e8: 0x27bdfff0
    ctx->pc = 0x1304e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1304ec: 0xffb00000
    ctx->pc = 0x1304ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1304f0: 0xffbf0008
    ctx->pc = 0x1304f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1304f4: 0xc04c11e
    ctx->pc = 0x1304F4u;
    SET_GPR_U32(ctx, 31, 0x1304FCu);
    ctx->pc = 0x1304F8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130478_0x130478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304FCu; }
    }
    if (ctx->pc != 0x1304FCu) { return; }
    ctx->pc = 0x1304FCu;
    // 0x1304fc: 0x0
    ctx->pc = 0x1304fcu;
    // NOP
label_130500:
    // 0x130500: 0xc04a808
    ctx->pc = 0x130500u;
    SET_GPR_U32(ctx, 31, 0x130508u);
    ctx->pc = 0x12A020u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A020_0x12a020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130508u; }
    }
    if (ctx->pc != 0x130508u) { return; }
    ctx->pc = 0x130508u;
    // 0x130508: 0x82020041
    ctx->pc = 0x130508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x13050c: 0x1440fffc
    ctx->pc = 0x13050Cu;
    {
        const bool branch_taken_0x13050c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x130510u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x13050c) {
            ctx->pc = 0x130500u;
            goto label_130500;
        }
    }
    ctx->pc = 0x130514u;
    // 0x130514: 0xdfb00000
    ctx->pc = 0x130514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130518: 0x3e00008
    ctx->pc = 0x130518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13051Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130500u: goto label_130500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130520u;
}
