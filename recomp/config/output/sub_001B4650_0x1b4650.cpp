#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B4650
// Address: 0x1b4650 - 0x1b46e0
void sub_001B4650_0x1b4650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b4650u;

    // 0x1b4650: 0x27bdffb0
    ctx->pc = 0x1b4650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b4654: 0xffbf0040
    ctx->pc = 0x1b4654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b4658: 0x7fb30030
    ctx->pc = 0x1b4658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b465c: 0x7fb20020
    ctx->pc = 0x1b465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b4660: 0xa0982d
    ctx->pc = 0x1b4660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4664: 0x7fb10010
    ctx->pc = 0x1b4664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4668: 0xc0902d
    ctx->pc = 0x1b4668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b466c: 0x7fb00000
    ctx->pc = 0x1b466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4670: 0x3c110031
    ctx->pc = 0x1b4670u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    // 0x1b4674: 0x263151d0
    ctx->pc = 0x1b4674u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20944));
    // 0x1b4678: 0x1000000f
    ctx->pc = 0x1B4678u;
    {
        const bool branch_taken_0x1b4678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B467Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4678) {
            ctx->pc = 0x1B46B8u;
            goto label_1b46b8;
        }
    }
    ctx->pc = 0x1B4680u;
label_1b4680:
    // 0x1b4680: 0x86220000
    ctx->pc = 0x1b4680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4684: 0x1040000a
    ctx->pc = 0x1B4684u;
    {
        const bool branch_taken_0x1b4684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b4684) {
            ctx->pc = 0x1B46B0u;
            goto label_1b46b0;
        }
    }
    ctx->pc = 0x1B468Cu;
    // 0x1b468c: 0x86220004
    ctx->pc = 0x1b468cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b4690: 0x14530007
    ctx->pc = 0x1B4690u;
    {
        const bool branch_taken_0x1b4690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x1B4694u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 12));
        if (branch_taken_0x1b4690) {
            ctx->pc = 0x1B46B0u;
            goto label_1b46b0;
        }
    }
    ctx->pc = 0x1B4698u;
    // 0x1b4698: 0xc042b9e
    ctx->pc = 0x1B4698u;
    SET_GPR_U32(ctx, 31, 0x1B46A0u);
    ctx->pc = 0x1B469Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46A0u; }
    }
    if (ctx->pc != 0x1B46A0u) { return; }
    ctx->pc = 0x1B46A0u;
    // 0x1b46a0: 0x14400003
    ctx->pc = 0x1B46A0u;
    {
        const bool branch_taken_0x1b46a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b46a0) {
            ctx->pc = 0x1B46B0u;
            goto label_1b46b0;
        }
    }
    ctx->pc = 0x1B46A8u;
    // 0x1b46a8: 0x10000006
    ctx->pc = 0x1B46A8u;
    {
        const bool branch_taken_0x1b46a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B46ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b46a8) {
            ctx->pc = 0x1B46C4u;
            goto label_1b46c4;
        }
    }
    ctx->pc = 0x1B46B0u;
label_1b46b0:
    // 0x1b46b0: 0x26100001
    ctx->pc = 0x1b46b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b46b4: 0x2631008c
    ctx->pc = 0x1b46b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 140));
label_1b46b8:
    // 0x1b46b8: 0x2a020020
    ctx->pc = 0x1b46b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 32));
    // 0x1b46bc: 0x1440fff0
    ctx->pc = 0x1B46BCu;
    {
        const bool branch_taken_0x1b46bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B46C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b46bc) {
            ctx->pc = 0x1B4680u;
            goto label_1b4680;
        }
    }
    ctx->pc = 0x1B46C4u;
label_1b46c4:
    // 0x1b46c4: 0xdfbf0040
    ctx->pc = 0x1b46c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b46c8: 0x7bb30030
    ctx->pc = 0x1b46c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b46cc: 0x7bb20020
    ctx->pc = 0x1b46ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b46d0: 0x7bb10010
    ctx->pc = 0x1b46d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b46d4: 0x7bb00000
    ctx->pc = 0x1b46d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b46d8: 0x3e00008
    ctx->pc = 0x1B46D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B46DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4680u: goto label_1b4680;
            case 0x1B46B0u: goto label_1b46b0;
            case 0x1B46B8u: goto label_1b46b8;
            case 0x1B46C4u: goto label_1b46c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B46E0u;
}
