#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7900
// Address: 0x1d7900 - 0x1d7990
void sub_001D7900_0x1d7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7900u;

    // 0x1d7900: 0x27bdffe0
    ctx->pc = 0x1d7900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7904: 0x80282d
    ctx->pc = 0x1d7904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7908: 0xffbf0010
    ctx->pc = 0x1d7908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d790c: 0x30c4000f
    ctx->pc = 0x1d790cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), 15));
    // 0x1d7910: 0x4c10004
    ctx->pc = 0x1D7910u;
    {
        const bool branch_taken_0x1d7910 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D7914u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        if (branch_taken_0x1d7910) {
            ctx->pc = 0x1D7924u;
            goto label_1d7924;
        }
    }
    ctx->pc = 0x1D7918u;
    // 0x1d7918: 0x10800003
    ctx->pc = 0x1D7918u;
    {
        const bool branch_taken_0x1d7918 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D791Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1d7918) {
            ctx->pc = 0x1D7928u;
            goto label_1d7928;
        }
    }
    ctx->pc = 0x1D7920u;
    // 0x1d7920: 0x2484fff0
    ctx->pc = 0x1d7920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
label_1d7924:
    // 0x1d7924: 0x24020010
    ctx->pc = 0x1d7924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_1d7928:
    // 0x1d7928: 0x3103000f
    ctx->pc = 0x1d7928u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 8), 15));
    // 0x1d792c: 0x441023
    ctx->pc = 0x1d792cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d7930: 0x5010004
    ctx->pc = 0x1D7930u;
    {
        const bool branch_taken_0x1d7930 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1D7934u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        if (branch_taken_0x1d7930) {
            ctx->pc = 0x1D7944u;
            goto label_1d7944;
        }
    }
    ctx->pc = 0x1D7938u;
    // 0x1d7938: 0x10600003
    ctx->pc = 0x1D7938u;
    {
        const bool branch_taken_0x1d7938 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D793Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1d7938) {
            ctx->pc = 0x1D7948u;
            goto label_1d7948;
        }
    }
    ctx->pc = 0x1D7940u;
    // 0x1d7940: 0x2463fff0
    ctx->pc = 0x1d7940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967280));
label_1d7944:
    // 0x1d7944: 0x24020010
    ctx->pc = 0x1d7944u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_1d7948:
    // 0x1d7948: 0x3c040035
    ctx->pc = 0x1d7948u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x1d794c: 0x431023
    ctx->pc = 0x1d794cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7950: 0x3c070034
    ctx->pc = 0x1d7950u;
    SET_GPR_U32(ctx, 7, ((uint32_t)52 << 16));
    // 0x1d7954: 0x485021
    ctx->pc = 0x1d7954u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1d7958: 0x24848290
    ctx->pc = 0x1d7958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935184));
    // 0x1d795c: 0x120402d
    ctx->pc = 0x1d795cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7960: 0x302d
    ctx->pc = 0x1d7960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7964: 0x3c090034
    ctx->pc = 0x1d7964u;
    SET_GPR_U32(ctx, 9, ((uint32_t)52 << 16));
    // 0x1d7968: 0x24e77280
    ctx->pc = 0x1d7968u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 29312));
    // 0x1d796c: 0x25296280
    ctx->pc = 0x1d796cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 25216));
    // 0x1d7970: 0xc045e7a
    ctx->pc = 0x1D7970u;
    SET_GPR_U32(ctx, 31, 0x1D7978u);
    ctx->pc = 0x1D7974u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7978u; }
    }
    if (ctx->pc != 0x1D7978u) { return; }
    ctx->pc = 0x1D7978u;
    // 0x1d7978: 0xdfbf0010
    ctx->pc = 0x1d7978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d797c: 0x3e00008
    ctx->pc = 0x1D797Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7980u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7924u: goto label_1d7924;
            case 0x1D7928u: goto label_1d7928;
            case 0x1D7944u: goto label_1d7944;
            case 0x1D7948u: goto label_1d7948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7984u;
    // 0x1d7984: 0x0
    ctx->pc = 0x1d7984u;
    // NOP
    // 0x1d7988: 0x0
    ctx->pc = 0x1d7988u;
    // NOP
    // 0x1d798c: 0x0
    ctx->pc = 0x1d798cu;
    // NOP
}
