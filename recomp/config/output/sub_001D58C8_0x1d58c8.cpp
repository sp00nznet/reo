#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D58C8
// Address: 0x1d58c8 - 0x1d5918
void sub_001D58C8_0x1d58c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d58c8u;

    // 0x1d58c8: 0x3c030034
    ctx->pc = 0x1d58c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d58cc: 0x80302d
    ctx->pc = 0x1d58ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58d0: 0x8c622840
    ctx->pc = 0x1d58d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10304)));
    // 0x1d58d4: 0xc2102a
    ctx->pc = 0x1d58d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x1d58d8: 0x14400003
    ctx->pc = 0x1D58D8u;
    {
        const bool branch_taken_0x1d58d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D58DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 10304));
        if (branch_taken_0x1d58d8) {
            ctx->pc = 0x1D58E8u;
            goto label_1d58e8;
        }
    }
    ctx->pc = 0x1D58E0u;
    // 0x1d58e0: 0x3e00008
    ctx->pc = 0x1D58E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D58E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D58E8u: goto label_1d58e8;
            case 0x1D58FCu: goto label_1d58fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D58E8u;
label_1d58e8:
    // 0x1d58e8: 0x2ca20003
    ctx->pc = 0x1d58e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 3));
    // 0x1d58ec: 0x14400003
    ctx->pc = 0x1D58ECu;
    {
        const bool branch_taken_0x1d58ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D58F0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 56));
        if (branch_taken_0x1d58ec) {
            ctx->pc = 0x1D58FCu;
            goto label_1d58fc;
        }
    }
    ctx->pc = 0x1D58F4u;
    // 0x1d58f4: 0x3e00008
    ctx->pc = 0x1D58F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D58F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D58E8u: goto label_1d58e8;
            case 0x1D58FCu: goto label_1d58fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D58FCu;
label_1d58fc:
    // 0x1d58fc: 0x8c840004
    ctx->pc = 0x1d58fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d5900: 0xc31818
    ctx->pc = 0x1d5900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d5904: 0x102d
    ctx->pc = 0x1d5904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5908: 0x641821
    ctx->pc = 0x1d5908u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d590c: 0x3e00008
    ctx->pc = 0x1D590Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5910u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D58E8u: goto label_1d58e8;
            case 0x1D58FCu: goto label_1d58fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5914u;
    // 0x1d5914: 0x0
    ctx->pc = 0x1d5914u;
    // NOP
}
