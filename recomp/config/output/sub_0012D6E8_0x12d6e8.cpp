#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D6E8
// Address: 0x12d6e8 - 0x12d738
void sub_0012D6E8_0x12d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d6e8u;

    // 0x12d6e8: 0x3e00008
    ctx->pc = 0x12D6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D6ECu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D6F0u;
    // 0x12d6f0: 0x3e00008
    ctx->pc = 0x12D6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D6F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D6F8u;
    // 0x12d6f8: 0x27bdfff0
    ctx->pc = 0x12d6f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d6fc: 0xffbf0000
    ctx->pc = 0x12d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d700: 0x8c840004
    ctx->pc = 0x12d700u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d704: 0xdfbf0000
    ctx->pc = 0x12d704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d708: 0x80493fc
    ctx->pc = 0x12D708u;
    ctx->pc = 0x12D70Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124FF0u;
    entry_124ff0_0x125058(rdram, ctx, runtime); return;
    ctx->pc = 0x12D710u;
    // 0x12d710: 0x27bdfff0
    ctx->pc = 0x12d710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d714: 0xffbf0000
    ctx->pc = 0x12d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d718: 0xdfbf0000
    ctx->pc = 0x12d718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d71c: 0x8049416
    ctx->pc = 0x12D71Cu;
    ctx->pc = 0x12D720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x125058u;
    entry_125058_0x1250a0(rdram, ctx, runtime); return;
    ctx->pc = 0x12D724u;
    // 0x12d724: 0x0
    ctx->pc = 0x12d724u;
    // NOP
    // 0x12d728: 0xac860054
    ctx->pc = 0x12d728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x12d72c: 0x3e00008
    ctx->pc = 0x12D72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D730u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D734u;
    // 0x12d734: 0x0
    ctx->pc = 0x12d734u;
    // NOP
}
