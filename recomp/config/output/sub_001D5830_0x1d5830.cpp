#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D5830
// Address: 0x1d5830 - 0x1d5878
void sub_001D5830_0x1d5830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d5830u;

    // 0x1d5830: 0x4a0000e
    ctx->pc = 0x1D5830u;
    {
        const bool branch_taken_0x1d5830 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D5834u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967285));
        if (branch_taken_0x1d5830) {
            ctx->pc = 0x1D586Cu;
            goto label_1d586c;
        }
    }
    ctx->pc = 0x1D5838u;
    // 0x1d5838: 0x4c10003
    ctx->pc = 0x1D5838u;
    {
        const bool branch_taken_0x1d5838 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D583Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 56));
        if (branch_taken_0x1d5838) {
            ctx->pc = 0x1D5848u;
            goto label_1d5848;
        }
    }
    ctx->pc = 0x1D5840u;
    // 0x1d5840: 0x3e00008
    ctx->pc = 0x1D5840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5844u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5848u: goto label_1d5848;
            case 0x1D586Cu: goto label_1d586c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5848u;
label_1d5848:
    // 0x1d5848: 0x3c020034
    ctx->pc = 0x1d5848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x1d584c: 0x831818
    ctx->pc = 0x1d584cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d5850: 0x8c442844
    ctx->pc = 0x1d5850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 10308)));
    // 0x1d5854: 0x102d
    ctx->pc = 0x1d5854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5858: 0x641821
    ctx->pc = 0x1d5858u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d585c: 0xac66001c
    ctx->pc = 0x1d585cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
    // 0x1d5860: 0xac650018
    ctx->pc = 0x1d5860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x1d5864: 0x3e00008
    ctx->pc = 0x1D5864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5868u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5848u: goto label_1d5848;
            case 0x1D586Cu: goto label_1d586c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D586Cu;
label_1d586c:
    // 0x1d586c: 0x3e00008
    ctx->pc = 0x1D586Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5848u: goto label_1d5848;
            case 0x1D586Cu: goto label_1d586c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5874u;
    // 0x1d5874: 0x0
    ctx->pc = 0x1d5874u;
    // NOP
}
