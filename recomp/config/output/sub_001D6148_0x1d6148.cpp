#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6148
// Address: 0x1d6148 - 0x1d61b8
void sub_001D6148_0x1d6148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6148u;

    // 0x1d6148: 0x24020038
    ctx->pc = 0x1d6148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x1d614c: 0x3c030034
    ctx->pc = 0x1d614cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d6150: 0x822018
    ctx->pc = 0x1d6150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1d6154: 0x8c662844
    ctx->pc = 0x1d6154u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 10308)));
    // 0x1d6158: 0xc43021
    ctx->pc = 0x1d6158u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d615c: 0x24c40010
    ctx->pc = 0x1d615cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 16));
    // 0x1d6160: 0x8c820024
    ctx->pc = 0x1d6160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d6164: 0x28420004
    ctx->pc = 0x1d6164u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1d6168: 0x14400003
    ctx->pc = 0x1D6168u;
    {
        const bool branch_taken_0x1d6168 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D616Cu;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x1d6168) {
            ctx->pc = 0x1D6178u;
            goto label_1d6178;
        }
    }
    ctx->pc = 0x1D6170u;
    // 0x1d6170: 0x3e00008
    ctx->pc = 0x1D6170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6174u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6178u: goto label_1d6178;
            case 0x1D61A0u: goto label_1d61a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6178u;
label_1d6178:
    // 0x1d6178: 0x8cc3002c
    ctx->pc = 0x1d6178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1d617c: 0x31040
    ctx->pc = 0x1d617cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d6180: 0xc21021
    ctx->pc = 0x1d6180u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d6184: 0x24630001
    ctx->pc = 0x1d6184u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d6188: 0xa4450022
    ctx->pc = 0x1d6188u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d618c: 0xacc3002c
    ctx->pc = 0x1d618cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1d6190: 0x8c82001c
    ctx->pc = 0x1d6190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1d6194: 0x28420004
    ctx->pc = 0x1d6194u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1d6198: 0x50400001
    ctx->pc = 0x1D6198u;
    {
        const bool branch_taken_0x1d6198 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d6198) {
            ctx->pc = 0x1D619Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
            ctx->pc = 0x1D61A0u;
            goto label_1d61a0;
        }
    }
    ctx->pc = 0x1D61A0u;
label_1d61a0:
    // 0x1d61a0: 0x8c830024
    ctx->pc = 0x1d61a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d61a4: 0x102d
    ctx->pc = 0x1d61a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61a8: 0x24630001
    ctx->pc = 0x1d61a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d61ac: 0x3e00008
    ctx->pc = 0x1D61ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D61B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6178u: goto label_1d6178;
            case 0x1D61A0u: goto label_1d61a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D61B4u;
    // 0x1d61b4: 0x0
    ctx->pc = 0x1d61b4u;
    // NOP
}
