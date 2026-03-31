#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D5878
// Address: 0x1d5878 - 0x1d58c8
void sub_001D5878_0x1d5878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d5878u;

    // 0x1d5878: 0x3c030034
    ctx->pc = 0x1d5878u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x1d587c: 0x80302d
    ctx->pc = 0x1d587cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5880: 0x8c622840
    ctx->pc = 0x1d5880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10304)));
    // 0x1d5884: 0xc2102a
    ctx->pc = 0x1d5884u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x1d5888: 0x14400003
    ctx->pc = 0x1D5888u;
    {
        const bool branch_taken_0x1d5888 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D588Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 10304));
        if (branch_taken_0x1d5888) {
            ctx->pc = 0x1D5898u;
            goto label_1d5898;
        }
    }
    ctx->pc = 0x1D5890u;
    // 0x1d5890: 0x3e00008
    ctx->pc = 0x1D5890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5894u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5898u: goto label_1d5898;
            case 0x1D58ACu: goto label_1d58ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5898u;
label_1d5898:
    // 0x1d5898: 0x2ca20002
    ctx->pc = 0x1d5898u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 2));
    // 0x1d589c: 0x14400003
    ctx->pc = 0x1D589Cu;
    {
        const bool branch_taken_0x1d589c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D58A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 56));
        if (branch_taken_0x1d589c) {
            ctx->pc = 0x1D58ACu;
            goto label_1d58ac;
        }
    }
    ctx->pc = 0x1D58A4u;
    // 0x1d58a4: 0x3e00008
    ctx->pc = 0x1D58A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D58A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5898u: goto label_1d5898;
            case 0x1D58ACu: goto label_1d58ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D58ACu;
label_1d58ac:
    // 0x1d58ac: 0x8c840004
    ctx->pc = 0x1d58acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d58b0: 0xc31818
    ctx->pc = 0x1d58b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d58b4: 0x102d
    ctx->pc = 0x1d58b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58b8: 0x641821
    ctx->pc = 0x1d58b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d58bc: 0x3e00008
    ctx->pc = 0x1D58BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D58C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5898u: goto label_1d5898;
            case 0x1D58ACu: goto label_1d58ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D58C4u;
    // 0x1d58c4: 0x0
    ctx->pc = 0x1d58c4u;
    // NOP
}
