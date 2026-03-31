#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00125278
// Address: 0x125278 - 0x1252b8
void sub_00125278_0x125278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125278u;

    // 0x125278: 0x27bdfff0
    ctx->pc = 0x125278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12527c: 0x24030003
    ctx->pc = 0x12527cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x125280: 0xffb00000
    ctx->pc = 0x125280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125284: 0x80802d
    ctx->pc = 0x125284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125288: 0xffbf0008
    ctx->pc = 0x125288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12528c: 0x8e020004
    ctx->pc = 0x12528cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125290: 0x54430006
    ctx->pc = 0x125290u;
    {
        const bool branch_taken_0x125290 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x125290) {
            ctx->pc = 0x125294u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1252ACu;
            goto label_1252ac;
        }
    }
    ctx->pc = 0x125298u;
    // 0x125298: 0xc04d412
    ctx->pc = 0x125298u;
    SET_GPR_U32(ctx, 31, 0x1252A0u);
    ctx->pc = 0x12529Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x135048u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135048_0x135048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1252A0u; }
    }
    if (ctx->pc != 0x1252A0u) { return; }
    ctx->pc = 0x1252A0u;
    // 0x1252a0: 0xae00008c
    ctx->pc = 0x1252a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1252a4: 0xae000004
    ctx->pc = 0x1252a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1252a8: 0xdfb00000
    ctx->pc = 0x1252a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1252ac:
    // 0x1252ac: 0xdfbf0008
    ctx->pc = 0x1252acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1252b0: 0x3e00008
    ctx->pc = 0x1252B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1252B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1252ACu: goto label_1252ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1252B8u;
}
