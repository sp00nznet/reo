#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BD040
// Address: 0x1bd040 - 0x1bd0b0
void sub_001BD040_0x1bd040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bd040u;

    // 0x1bd040: 0x27bdffb0
    ctx->pc = 0x1bd040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bd044: 0xffbf0030
    ctx->pc = 0x1bd044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bd048: 0x7fb20020
    ctx->pc = 0x1bd048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd04c: 0x7fb10010
    ctx->pc = 0x1bd04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd050: 0x80902d
    ctx->pc = 0x1bd050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd054: 0x7fb00000
    ctx->pc = 0x1bd054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd058: 0xa0882d
    ctx->pc = 0x1bd058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd05c: 0xc0802d
    ctx->pc = 0x1bd05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bd060:
    // 0x1bd060: 0x240202d
    ctx->pc = 0x1bd060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd064: 0x220282d
    ctx->pc = 0x1bd064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd068: 0x200302d
    ctx->pc = 0x1bd068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd06c: 0xc0471e6
    ctx->pc = 0x1BD06Cu;
    SET_GPR_U32(ctx, 31, 0x1BD074u);
    ctx->pc = 0x1BD070u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 76));
    ctx->pc = 0x11C798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C798_0x11c798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD074u; }
    }
    if (ctx->pc != 0x1BD074u) { return; }
    ctx->pc = 0x1BD074u;
    // 0x1bd074: 0x440fffa
    ctx->pc = 0x1BD074u;
    {
        const bool branch_taken_0x1bd074 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bd074) {
            ctx->pc = 0x1BD060u;
            goto label_1bd060;
        }
    }
    ctx->pc = 0x1BD07Cu;
    // 0x1bd07c: 0x8fa2004c
    ctx->pc = 0x1bd07cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bd080: 0xdfbf0030
    ctx->pc = 0x1bd080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd084: 0x7bb20020
    ctx->pc = 0x1bd084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd088: 0x7bb10010
    ctx->pc = 0x1bd088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd08c: 0x7bb00000
    ctx->pc = 0x1bd08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd090: 0x38420001
    ctx->pc = 0x1bd090u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1bd094: 0x2c420001
    ctx->pc = 0x1bd094u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1bd098: 0x21023
    ctx->pc = 0x1bd098u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1bd09c: 0x3e00008
    ctx->pc = 0x1BD09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD0A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD060u: goto label_1bd060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BD0A4u;
    // 0x1bd0a4: 0x0
    ctx->pc = 0x1bd0a4u;
    // NOP
    // 0x1bd0a8: 0x0
    ctx->pc = 0x1bd0a8u;
    // NOP
    // 0x1bd0ac: 0x0
    ctx->pc = 0x1bd0acu;
    // NOP
}
