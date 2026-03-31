#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D50C0
// Address: 0x1d50c0 - 0x1d5130
void sub_001D50C0_0x1d50c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d50c0u;

    // 0x1d50c0: 0x27bdffd0
    ctx->pc = 0x1d50c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d50c4: 0xffbf0010
    ctx->pc = 0x1d50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d50c8: 0x7fb00000
    ctx->pc = 0x1d50c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d50cc: 0x80802d
    ctx->pc = 0x1d50ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d50d0: 0x3c040034
    ctx->pc = 0x1d50d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x1d50d4: 0xc0754fc
    ctx->pc = 0x1D50D4u;
    SET_GPR_U32(ctx, 31, 0x1D50DCu);
    ctx->pc = 0x1D50D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10016));
    ctx->pc = 0x1D53F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D53F0_0x1d53f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50DCu; }
    }
    if (ctx->pc != 0x1D50DCu) { return; }
    ctx->pc = 0x1D50DCu;
    // 0x1d50dc: 0x10400003
    ctx->pc = 0x1D50DCu;
    {
        const bool branch_taken_0x1d50dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D50E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d50dc) {
            ctx->pc = 0x1D50ECu;
            goto label_1d50ec;
        }
    }
    ctx->pc = 0x1D50E4u;
    // 0x1d50e4: 0x1000000e
    ctx->pc = 0x1D50E4u;
    {
        const bool branch_taken_0x1d50e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D50E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d50e4) {
            ctx->pc = 0x1D5120u;
            goto label_1d5120;
        }
    }
    ctx->pc = 0x1D50ECu;
label_1d50ec:
    // 0x1d50ec: 0xc075646
    ctx->pc = 0x1D50ECu;
    SET_GPR_U32(ctx, 31, 0x1D50F4u);
    ctx->pc = 0x1D50F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 44));
    ctx->pc = 0x1D5918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5918_0x1d5918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50F4u; }
    }
    if (ctx->pc != 0x1D50F4u) { return; }
    ctx->pc = 0x1D50F4u;
    // 0x1d50f4: 0x8fa2002c
    ctx->pc = 0x1d50f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d50f8: 0x10400003
    ctx->pc = 0x1D50F8u;
    {
        const bool branch_taken_0x1d50f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D50FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x1d50f8) {
            ctx->pc = 0x1D5108u;
            goto label_1d5108;
        }
    }
    ctx->pc = 0x1D5100u;
    // 0x1d5100: 0x10000007
    ctx->pc = 0x1D5100u;
    {
        const bool branch_taken_0x1d5100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d5100) {
            ctx->pc = 0x1D5120u;
            goto label_1d5120;
        }
    }
    ctx->pc = 0x1D5108u;
label_1d5108:
    // 0x1d5108: 0x24422728
    ctx->pc = 0x1d5108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10024));
    // 0x1d510c: 0x501021
    ctx->pc = 0x1d510cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5110: 0x90420000
    ctx->pc = 0x1d5110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5114: 0x401026
    ctx->pc = 0x1d5114u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1d5118: 0x2c420001
    ctx->pc = 0x1d5118u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1d511c: 0x21023
    ctx->pc = 0x1d511cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d5120:
    // 0x1d5120: 0xdfbf0010
    ctx->pc = 0x1d5120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5124: 0x7bb00000
    ctx->pc = 0x1d5124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5128: 0x3e00008
    ctx->pc = 0x1D5128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D512Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D50ECu: goto label_1d50ec;
            case 0x1D5108u: goto label_1d5108;
            case 0x1D5120u: goto label_1d5120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5130u;
}
