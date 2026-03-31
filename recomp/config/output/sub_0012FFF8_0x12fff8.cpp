#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012FFF8
// Address: 0x12fff8 - 0x130038
void sub_0012FFF8_0x12fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fff8u;

    // 0x12fff8: 0x27bdfff0
    ctx->pc = 0x12fff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fffc: 0x24020001
    ctx->pc = 0x12fffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130000: 0xffbf0000
    ctx->pc = 0x130000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130004: 0x80830001
    ctx->pc = 0x130004u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x130008: 0x14620005
    ctx->pc = 0x130008u;
    {
        const bool branch_taken_0x130008 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x13000Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x130008) {
            ctx->pc = 0x130020u;
            goto label_130020;
        }
    }
    ctx->pc = 0x130010u;
    // 0x130010: 0xdfbf0000
    ctx->pc = 0x130010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130014: 0x804bf7c
    ctx->pc = 0x130014u;
    ctx->pc = 0x130018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12FDF0u;
    entry_12fdf0_0x12ff60(rdram, ctx, runtime); return;
    ctx->pc = 0x13001Cu;
    // 0x13001c: 0x0
    ctx->pc = 0x13001cu;
    // NOP
label_130020:
    // 0x130020: 0x14620003
    ctx->pc = 0x130020u;
    {
        const bool branch_taken_0x130020 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x130024u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x130020) {
            ctx->pc = 0x130030u;
            goto label_130030;
        }
    }
    ctx->pc = 0x130028u;
    // 0x130028: 0x804bfd8
    ctx->pc = 0x130028u;
    ctx->pc = 0x13002Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12FF60u;
    entry_12ff60_0x12fff8(rdram, ctx, runtime); return;
    ctx->pc = 0x130030u;
label_130030:
    // 0x130030: 0x3e00008
    ctx->pc = 0x130030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130020u: goto label_130020;
            case 0x130030u: goto label_130030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130038u;
}
