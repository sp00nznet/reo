#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018E1B0
// Address: 0x18e1b0 - 0x18e230
void sub_0018E1B0_0x18e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18e1b0u;

    // 0x18e1b0: 0x402d
    ctx->pc = 0x18e1b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1b4: 0x10000016
    ctx->pc = 0x18E1B4u;
    {
        const bool branch_taken_0x18e1b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E1B8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x18e1b4) {
            ctx->pc = 0x18E210u;
            goto label_18e210;
        }
    }
    ctx->pc = 0x18E1BCu;
label_18e1bc:
    // 0x18e1bc: 0x10000010
    ctx->pc = 0x18E1BCu;
    {
        const bool branch_taken_0x18e1bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E1C0u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e1bc) {
            ctx->pc = 0x18E200u;
            goto label_18e200;
        }
    }
    ctx->pc = 0x18E1C4u;
label_18e1c4:
    // 0x18e1c4: 0x90830003
    ctx->pc = 0x18e1c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x18e1c8: 0x14670003
    ctx->pc = 0x18E1C8u;
    {
        const bool branch_taken_0x18e1c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 7));
        if (branch_taken_0x18e1c8) {
            ctx->pc = 0x18E1D8u;
            goto label_18e1d8;
        }
    }
    ctx->pc = 0x18E1D0u;
    // 0x18e1d0: 0x10000008
    ctx->pc = 0x18E1D0u;
    {
        const bool branch_taken_0x18e1d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E1D4u;
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)128);
        if (branch_taken_0x18e1d0) {
            ctx->pc = 0x18E1F4u;
            goto label_18e1f4;
        }
    }
    ctx->pc = 0x18E1D8u;
label_18e1d8:
    // 0x18e1d8: 0x10600006
    ctx->pc = 0x18E1D8u;
    {
        const bool branch_taken_0x18e1d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18e1d8) {
            ctx->pc = 0x18E1F4u;
            goto label_18e1f4;
        }
    }
    ctx->pc = 0x18E1E0u;
    // 0x18e1e0: 0x31842
    ctx->pc = 0x18e1e0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x18e1e4: 0x306300ff
    ctx->pc = 0x18e1e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x18e1e8: 0x14600002
    ctx->pc = 0x18E1E8u;
    {
        const bool branch_taken_0x18e1e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e1e8) {
            ctx->pc = 0x18E1F4u;
            goto label_18e1f4;
        }
    }
    ctx->pc = 0x18E1F0u;
    // 0x18e1f0: 0x64030001
    ctx->pc = 0x18e1f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
label_18e1f4:
    // 0x18e1f4: 0xa0830003
    ctx->pc = 0x18e1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e1f8: 0x25290001
    ctx->pc = 0x18e1f8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x18e1fc: 0x24840004
    ctx->pc = 0x18e1fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_18e200:
    // 0x18e200: 0x125182a
    ctx->pc = 0x18e200u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 5)));
    // 0x18e204: 0x1460ffef
    ctx->pc = 0x18E204u;
    {
        const bool branch_taken_0x18e204 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e204) {
            ctx->pc = 0x18E1C4u;
            goto label_18e1c4;
        }
    }
    ctx->pc = 0x18E20Cu;
    // 0x18e20c: 0x25080001
    ctx->pc = 0x18e20cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_18e210:
    // 0x18e210: 0x106182a
    ctx->pc = 0x18e210u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 6)));
    // 0x18e214: 0x1460ffe9
    ctx->pc = 0x18E214u;
    {
        const bool branch_taken_0x18e214 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e214) {
            ctx->pc = 0x18E1BCu;
            goto label_18e1bc;
        }
    }
    ctx->pc = 0x18E21Cu;
    // 0x18e21c: 0x3e00008
    ctx->pc = 0x18E21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E1BCu: goto label_18e1bc;
            case 0x18E1C4u: goto label_18e1c4;
            case 0x18E1D8u: goto label_18e1d8;
            case 0x18E1F4u: goto label_18e1f4;
            case 0x18E200u: goto label_18e200;
            case 0x18E210u: goto label_18e210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E224u;
    // 0x18e224: 0x0
    ctx->pc = 0x18e224u;
    // NOP
    // 0x18e228: 0x0
    ctx->pc = 0x18e228u;
    // NOP
    // 0x18e22c: 0x0
    ctx->pc = 0x18e22cu;
    // NOP
}
