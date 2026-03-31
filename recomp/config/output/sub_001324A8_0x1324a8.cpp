#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001324A8
// Address: 0x1324a8 - 0x1324f8
void sub_001324A8_0x1324a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1324a8u;

    // 0x1324a8: 0x27bdfff0
    ctx->pc = 0x1324a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1324ac: 0x14800006
    ctx->pc = 0x1324ACu;
    {
        const bool branch_taken_0x1324ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1324B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1324ac) {
            ctx->pc = 0x1324C8u;
            goto label_1324c8;
        }
    }
    ctx->pc = 0x1324B4u;
    // 0x1324b4: 0x3c040024
    ctx->pc = 0x1324b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1324b8: 0xc04a034
    ctx->pc = 0x1324B8u;
    SET_GPR_U32(ctx, 31, 0x1324C0u);
    ctx->pc = 0x1324BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946712));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1324C0u; }
    }
    if (ctx->pc != 0x1324C0u) { return; }
    ctx->pc = 0x1324C0u;
    // 0x1324c0: 0x10000009
    ctx->pc = 0x1324C0u;
    {
        const bool branch_taken_0x1324c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1324C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1324c0) {
            ctx->pc = 0x1324E8u;
            goto label_1324e8;
        }
    }
    ctx->pc = 0x1324C8u;
label_1324c8:
    // 0x1324c8: 0x80820001
    ctx->pc = 0x1324c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1324cc: 0x28420002
    ctx->pc = 0x1324ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1324d0: 0x54400005
    ctx->pc = 0x1324D0u;
    {
        const bool branch_taken_0x1324d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1324d0) {
            ctx->pc = 0x1324D4u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1324E8u;
            goto label_1324e8;
        }
    }
    ctx->pc = 0x1324D8u;
    // 0x1324d8: 0x8c840004
    ctx->pc = 0x1324d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1324dc: 0xdfbf0000
    ctx->pc = 0x1324dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1324e0: 0x804b602
    ctx->pc = 0x1324E0u;
    ctx->pc = 0x1324E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12D808u;
    sub_0012D808_0x12d808(rdram, ctx, runtime); return;
    ctx->pc = 0x1324E8u;
label_1324e8:
    // 0x1324e8: 0xdfbf0000
    ctx->pc = 0x1324e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1324ec: 0x3e00008
    ctx->pc = 0x1324ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1324F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1324C8u: goto label_1324c8;
            case 0x1324E8u: goto label_1324e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1324F4u;
    // 0x1324f4: 0x0
    ctx->pc = 0x1324f4u;
    // NOP
}
