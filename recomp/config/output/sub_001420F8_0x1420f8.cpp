#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001420F8
// Address: 0x1420f8 - 0x142138
void sub_001420F8_0x1420f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1420f8u;

    // 0x1420f8: 0x27bdfff0
    ctx->pc = 0x1420f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1420fc: 0x3c020023
    ctx->pc = 0x1420fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x142100: 0xffb00000
    ctx->pc = 0x142100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142104: 0x2450a5ec
    ctx->pc = 0x142104u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294944236));
    // 0x142108: 0x8e030000
    ctx->pc = 0x142108u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14210c: 0x14600003
    ctx->pc = 0x14210Cu;
    {
        const bool branch_taken_0x14210c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x142110u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x14210c) {
            ctx->pc = 0x14211Cu;
            goto label_14211c;
        }
    }
    ctx->pc = 0x142114u;
    // 0x142114: 0xc05081e
    ctx->pc = 0x142114u;
    SET_GPR_U32(ctx, 31, 0x14211Cu);
    ctx->pc = 0x142078u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00142078_0x142078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14211Cu; }
    }
    if (ctx->pc != 0x14211Cu) { return; }
    ctx->pc = 0x14211Cu;
label_14211c:
    // 0x14211c: 0x8e020000
    ctx->pc = 0x14211cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x142120: 0xdfbf0008
    ctx->pc = 0x142120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142124: 0x24420001
    ctx->pc = 0x142124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x142128: 0xae020000
    ctx->pc = 0x142128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14212c: 0xdfb00000
    ctx->pc = 0x14212cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142130: 0x3e00008
    ctx->pc = 0x142130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14211Cu: goto label_14211c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142138u;
}
