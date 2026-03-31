#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010A258
// Address: 0x10a258 - 0x10a2b0
void sub_0010A258_0x10a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a258u;

    // 0x10a258: 0x27bdffe0
    ctx->pc = 0x10a258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a25c: 0x3c020037
    ctx->pc = 0x10a25cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x10a260: 0xffb00000
    ctx->pc = 0x10a260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a264: 0x80802d
    ctx->pc = 0x10a264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a268: 0xffb10008
    ctx->pc = 0x10a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a26c: 0x2451f0dc
    ctx->pc = 0x10a26cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963420));
    // 0x10a270: 0xa0202d
    ctx->pc = 0x10a270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a274: 0xffbf0010
    ctx->pc = 0x10a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a278: 0xc045348
    ctx->pc = 0x10A278u;
    SET_GPR_U32(ctx, 31, 0x10A280u);
    ctx->pc = 0x10A27Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x114D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114D20_0x114d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A280u; }
    }
    if (ctx->pc != 0x10A280u) { return; }
    ctx->pc = 0x10A280u;
    // 0x10a280: 0x40202d
    ctx->pc = 0x10a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a284: 0x2403ffff
    ctx->pc = 0x10a284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a288: 0x54830005
    ctx->pc = 0x10A288u;
    {
        const bool branch_taken_0x10a288 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x10a288) {
            ctx->pc = 0x10A28Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x10A2A0u;
            goto label_10a2a0;
        }
    }
    ctx->pc = 0x10A290u;
    // 0x10a290: 0x8e230000
    ctx->pc = 0x10a290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10a294: 0x54600001
    ctx->pc = 0x10A294u;
    {
        const bool branch_taken_0x10a294 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a294) {
            ctx->pc = 0x10A298u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x10A29Cu;
            goto label_10a29c;
        }
    }
    ctx->pc = 0x10A29Cu;
label_10a29c:
    // 0x10a29c: 0xdfb00000
    ctx->pc = 0x10a29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a2a0:
    // 0x10a2a0: 0xdfb10008
    ctx->pc = 0x10a2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a2a4: 0xdfbf0010
    ctx->pc = 0x10a2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a2a8: 0x3e00008
    ctx->pc = 0x10A2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A2ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A29Cu: goto label_10a29c;
            case 0x10A2A0u: goto label_10a2a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A2B0u;
}
