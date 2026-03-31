#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13eee8
// Address: 0x13eee8 - 0x13ef58
void entry_13eee8_0x13ef58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13eee8u;

    // 0x13eee8: 0x27bdffe0
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13eeec: 0xffb00000
    ctx->pc = 0x13eeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13eef0: 0xffb10008
    ctx->pc = 0x13eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13eef4: 0x2411000f
    ctx->pc = 0x13eef4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
    // 0x13eef8: 0xffb20010
    ctx->pc = 0x13eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13eefc: 0xffbf0018
    ctx->pc = 0x13eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13ef00: 0xc04fc86
    ctx->pc = 0x13EF00u;
    SET_GPR_U32(ctx, 31, 0x13EF08u);
    ctx->pc = 0x13EF04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13F218u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F218_0x13f218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF08u; }
    }
    if (ctx->pc != 0x13EF08u) { return; }
    ctx->pc = 0x13EF08u;
    // 0x13ef08: 0x3c020022
    ctx->pc = 0x13ef08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13ef0c: 0x24503880
    ctx->pc = 0x13ef0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 14464));
label_13ef10:
    // 0x13ef10: 0x82020000
    ctx->pc = 0x13ef10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ef14: 0x54520004
    ctx->pc = 0x13EF14u;
    {
        const bool branch_taken_0x13ef14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x13ef14) {
            ctx->pc = 0x13EF18u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x13EF28u;
            goto label_13ef28;
        }
    }
    ctx->pc = 0x13EF1Cu;
    // 0x13ef1c: 0xc04fb4a
    ctx->pc = 0x13EF1Cu;
    SET_GPR_U32(ctx, 31, 0x13EF24u);
    ctx->pc = 0x13EF20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13ED28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ED28_0x13ed28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF24u; }
    }
    if (ctx->pc != 0x13EF24u) { return; }
    ctx->pc = 0x13EF24u;
    // 0x13ef24: 0x2631ffff
    ctx->pc = 0x13ef24u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_13ef28:
    // 0x13ef28: 0x621fff9
    ctx->pc = 0x13EF28u;
    {
        const bool branch_taken_0x13ef28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x13EF2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 96));
        if (branch_taken_0x13ef28) {
            ctx->pc = 0x13EF10u;
            goto label_13ef10;
        }
    }
    ctx->pc = 0x13EF30u;
    // 0x13ef30: 0xc04fc8c
    ctx->pc = 0x13EF30u;
    SET_GPR_U32(ctx, 31, 0x13EF38u);
    ctx->pc = 0x13F230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F230_0x13f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF38u; }
    }
    if (ctx->pc != 0x13EF38u) { return; }
    ctx->pc = 0x13EF38u;
    // 0x13ef38: 0xc04e276
    ctx->pc = 0x13EF38u;
    SET_GPR_U32(ctx, 31, 0x13EF40u);
    ctx->pc = 0x1389D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001389D8_0x1389d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF40u; }
    }
    if (ctx->pc != 0x13EF40u) { return; }
    ctx->pc = 0x13EF40u;
    // 0x13ef40: 0xdfb00000
    ctx->pc = 0x13ef40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef44: 0xdfb10008
    ctx->pc = 0x13ef44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ef48: 0xdfb20010
    ctx->pc = 0x13ef48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ef4c: 0xdfbf0018
    ctx->pc = 0x13ef4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ef50: 0x805049a
    ctx->pc = 0x13EF50u;
    ctx->pc = 0x13EF54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x141268u;
    entry_141268_0x141280(rdram, ctx, runtime); return;
    ctx->pc = 0x13EF58u;
}
