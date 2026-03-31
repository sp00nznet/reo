#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00108108
// Address: 0x108108 - 0x108188
void sub_00108108_0x108108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108108u;

    // 0x108108: 0x3c02ffff
    ctx->pc = 0x108108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x10810c: 0x821024
    ctx->pc = 0x10810cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108110: 0x14400003
    ctx->pc = 0x108110u;
    {
        const bool branch_taken_0x108110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x108114u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108110) {
            ctx->pc = 0x108120u;
            goto label_108120;
        }
    }
    ctx->pc = 0x108118u;
    // 0x108118: 0x24050010
    ctx->pc = 0x108118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x10811c: 0x42400
    ctx->pc = 0x10811cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
label_108120:
    // 0x108120: 0x3c02ff00
    ctx->pc = 0x108120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x108124: 0x821024
    ctx->pc = 0x108124u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108128: 0x14400003
    ctx->pc = 0x108128u;
    {
        const bool branch_taken_0x108128 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10812Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)61440 << 16));
        if (branch_taken_0x108128) {
            ctx->pc = 0x108138u;
            goto label_108138;
        }
    }
    ctx->pc = 0x108130u;
    // 0x108130: 0x24a50008
    ctx->pc = 0x108130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x108134: 0x42200
    ctx->pc = 0x108134u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
label_108138:
    // 0x108138: 0x821024
    ctx->pc = 0x108138u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10813c: 0x14400003
    ctx->pc = 0x10813Cu;
    {
        const bool branch_taken_0x10813c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x108140u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
        if (branch_taken_0x10813c) {
            ctx->pc = 0x10814Cu;
            goto label_10814c;
        }
    }
    ctx->pc = 0x108144u;
    // 0x108144: 0x24a50004
    ctx->pc = 0x108144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x108148: 0x42100
    ctx->pc = 0x108148u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
label_10814c:
    // 0x10814c: 0x821024
    ctx->pc = 0x10814cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108150: 0x14400003
    ctx->pc = 0x108150u;
    {
        const bool branch_taken_0x108150 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x108150) {
            ctx->pc = 0x108160u;
            goto label_108160;
        }
    }
    ctx->pc = 0x108158u;
    // 0x108158: 0x24a50002
    ctx->pc = 0x108158u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x10815c: 0x42080
    ctx->pc = 0x10815cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_108160:
    // 0x108160: 0x4800007
    ctx->pc = 0x108160u;
    {
        const bool branch_taken_0x108160 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x108164u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108160) {
            ctx->pc = 0x108180u;
            goto label_108180;
        }
    }
    ctx->pc = 0x108168u;
    // 0x108168: 0x3c034000
    ctx->pc = 0x108168u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x10816c: 0x24a50001
    ctx->pc = 0x10816cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x108170: 0x831824
    ctx->pc = 0x108170u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x108174: 0x10600002
    ctx->pc = 0x108174u;
    {
        const bool branch_taken_0x108174 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x108178u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x108174) {
            ctx->pc = 0x108180u;
            goto label_108180;
        }
    }
    ctx->pc = 0x10817Cu;
    // 0x10817c: 0xa0102d
    ctx->pc = 0x10817cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108180:
    // 0x108180: 0x3e00008
    ctx->pc = 0x108180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108120u: goto label_108120;
            case 0x108138u: goto label_108138;
            case 0x10814Cu: goto label_10814c;
            case 0x108160u: goto label_108160;
            case 0x108180u: goto label_108180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108188u;
}
