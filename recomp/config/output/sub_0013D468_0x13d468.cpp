#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D468
// Address: 0x13d468 - 0x13d498
void sub_0013D468_0x13d468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d468u;

    // 0x13d468: 0x27bdfff0
    ctx->pc = 0x13d468u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d46c: 0x14800006
    ctx->pc = 0x13D46Cu;
    {
        const bool branch_taken_0x13d46c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D470u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d46c) {
            ctx->pc = 0x13D488u;
            goto label_13d488;
        }
    }
    ctx->pc = 0x13D474u;
    // 0x13d474: 0x3c040024
    ctx->pc = 0x13d474u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13d478: 0xdfbf0000
    ctx->pc = 0x13d478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d47c: 0x2484d368
    ctx->pc = 0x13d47cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955880));
    // 0x13d480: 0x804f53e
    ctx->pc = 0x13D480u;
    ctx->pc = 0x13D484u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D4F8u;
    sub_0013D4F8_0x13d4f8(rdram, ctx, runtime); return;
    ctx->pc = 0x13D488u;
label_13d488:
    // 0x13d488: 0xdfbf0000
    ctx->pc = 0x13d488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d48c: 0xa0850003
    ctx->pc = 0x13d48cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x13d490: 0x3e00008
    ctx->pc = 0x13D490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D494u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D488u: goto label_13d488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D498u;
}
