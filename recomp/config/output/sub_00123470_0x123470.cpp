#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00123470
// Address: 0x123470 - 0x1234d8
void sub_00123470_0x123470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123470u;

    // 0x123470: 0x3c050024
    ctx->pc = 0x123470u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x123474: 0x27bdfff0
    ctx->pc = 0x123474u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123478: 0x24060004
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x12347c: 0x24a59310
    ctx->pc = 0x12347cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939408));
    // 0x123480: 0xffb00000
    ctx->pc = 0x123480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123484: 0xffbf0008
    ctx->pc = 0x123484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x123488: 0xc041e86
    ctx->pc = 0x123488u;
    SET_GPR_U32(ctx, 31, 0x123490u);
    ctx->pc = 0x12348Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123490u; }
    }
    if (ctx->pc != 0x123490u) { return; }
    ctx->pc = 0x123490u;
    // 0x123490: 0x3c050024
    ctx->pc = 0x123490u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x123494: 0x26040008
    ctx->pc = 0x123494u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
    // 0x123498: 0x24a59318
    ctx->pc = 0x123498u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939416));
    // 0x12349c: 0x14400008
    ctx->pc = 0x12349Cu;
    {
        const bool branch_taken_0x12349c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1234A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x12349c) {
            ctx->pc = 0x1234C0u;
            goto label_1234c0;
        }
    }
    ctx->pc = 0x1234A4u;
    // 0x1234a4: 0xc041e86
    ctx->pc = 0x1234A4u;
    SET_GPR_U32(ctx, 31, 0x1234ACu);
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234ACu; }
    }
    if (ctx->pc != 0x1234ACu) { return; }
    ctx->pc = 0x1234ACu;
    // 0x1234ac: 0x54400005
    ctx->pc = 0x1234ACu;
    {
        const bool branch_taken_0x1234ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1234ac) {
            ctx->pc = 0x1234B0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1234C4u;
            goto label_1234c4;
        }
    }
    ctx->pc = 0x1234B4u;
    // 0x1234b4: 0x10000003
    ctx->pc = 0x1234B4u;
    {
        const bool branch_taken_0x1234b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1234B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1234b4) {
            ctx->pc = 0x1234C4u;
            goto label_1234c4;
        }
    }
    ctx->pc = 0x1234BCu;
    // 0x1234bc: 0x0
    ctx->pc = 0x1234bcu;
    // NOP
label_1234c0:
    // 0x1234c0: 0x102d
    ctx->pc = 0x1234c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1234c4:
    // 0x1234c4: 0xdfb00000
    ctx->pc = 0x1234c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1234c8: 0xdfbf0008
    ctx->pc = 0x1234c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1234cc: 0x3e00008
    ctx->pc = 0x1234CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1234D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1234C0u: goto label_1234c0;
            case 0x1234C4u: goto label_1234c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1234D4u;
    // 0x1234d4: 0x0
    ctx->pc = 0x1234d4u;
    // NOP
}
