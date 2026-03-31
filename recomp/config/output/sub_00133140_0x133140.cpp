#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00133140
// Address: 0x133140 - 0x1331a8
void sub_00133140_0x133140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x133140u;

    // 0x133140: 0x3e00008
    ctx->pc = 0x133140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133144u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133198u: goto label_133198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133148u;
    // 0x133148: 0x3e00008
    ctx->pc = 0x133148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13314Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133198u: goto label_133198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133150u;
    // 0x133150: 0x3e00008
    ctx->pc = 0x133150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133154u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133198u: goto label_133198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133158u;
    // 0x133158: 0x27bdfff0
    ctx->pc = 0x133158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13315c: 0xffbf0000
    ctx->pc = 0x13315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133160: 0x8c840004
    ctx->pc = 0x133160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x133164: 0xdfbf0000
    ctx->pc = 0x133164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133168: 0x804b5ca
    ctx->pc = 0x133168u;
    ctx->pc = 0x13316Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12D728u;
    entry_12d728_0x12d738(rdram, ctx, runtime); return;
    ctx->pc = 0x133170u;
    // 0x133170: 0x27bdfff0
    ctx->pc = 0x133170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133174: 0x14800008
    ctx->pc = 0x133174u;
    {
        const bool branch_taken_0x133174 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x133178u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x133174) {
            ctx->pc = 0x133198u;
            goto label_133198;
        }
    }
    ctx->pc = 0x13317Cu;
    // 0x13317c: 0x3c040024
    ctx->pc = 0x13317cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x133180: 0xc04a034
    ctx->pc = 0x133180u;
    SET_GPR_U32(ctx, 31, 0x133188u);
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948120));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133188u; }
    }
    if (ctx->pc != 0x133188u) { return; }
    ctx->pc = 0x133188u;
    // 0x133188: 0x2402ffff
    ctx->pc = 0x133188u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13318c: 0xdfbf0000
    ctx->pc = 0x13318cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133190: 0x3e00008
    ctx->pc = 0x133190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133198u: goto label_133198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133198u;
label_133198:
    // 0x133198: 0x8c840004
    ctx->pc = 0x133198u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13319c: 0xdfbf0000
    ctx->pc = 0x13319cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1331a0: 0x804b5b8
    ctx->pc = 0x1331A0u;
    ctx->pc = 0x1331A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12D6E0u;
    sub_0012D6E0_0x12d6e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1331A8u;
}
