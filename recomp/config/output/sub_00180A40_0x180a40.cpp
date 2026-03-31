#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00180A40
// Address: 0x180a40 - 0x180aa0
void sub_00180A40_0x180a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x180a40u;

    // 0x180a40: 0x27bdffe0
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180a44: 0xffb00000
    ctx->pc = 0x180a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180a48: 0xffbf0010
    ctx->pc = 0x180a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180a4c: 0xc06025c
    ctx->pc = 0x180A4Cu;
    SET_GPR_U32(ctx, 31, 0x180A54u);
    ctx->pc = 0x180A50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180970_0x180970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A54u; }
    }
    if (ctx->pc != 0x180A54u) { return; }
    ctx->pc = 0x180A54u;
    // 0x180a54: 0x8c45007c
    ctx->pc = 0x180a54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x180a58: 0x10a00009
    ctx->pc = 0x180A58u;
    {
        const bool branch_taken_0x180a58 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x180A5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 820));
        if (branch_taken_0x180a58) {
            ctx->pc = 0x180A80u;
            goto label_180a80;
        }
    }
    ctx->pc = 0x180A60u;
    // 0x180a60: 0x3c020027
    ctx->pc = 0x180a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x180a64: 0x2042018
    ctx->pc = 0x180a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x180a68: 0x24426188
    ctx->pc = 0x180a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24968));
    // 0x180a6c: 0x24420008
    ctx->pc = 0x180a6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x180a70: 0x822021
    ctx->pc = 0x180a70u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x180a74: 0x8c830000
    ctx->pc = 0x180a74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180a78: 0x54a30003
    ctx->pc = 0x180A78u;
    {
        const bool branch_taken_0x180a78 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x180a78) {
            ctx->pc = 0x180A7Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->pc = 0x180A88u;
            goto label_180a88;
        }
    }
    ctx->pc = 0x180A80u;
label_180a80:
    // 0x180a80: 0x10000002
    ctx->pc = 0x180A80u;
    {
        const bool branch_taken_0x180a80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180A84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180a80) {
            ctx->pc = 0x180A8Cu;
            goto label_180a8c;
        }
    }
    ctx->pc = 0x180A88u;
label_180a88:
    // 0x180a88: 0x24020001
    ctx->pc = 0x180a88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_180a8c:
    // 0x180a8c: 0xdfbf0010
    ctx->pc = 0x180a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180a90: 0xdfb00000
    ctx->pc = 0x180a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a94: 0x3e00008
    ctx->pc = 0x180A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180A80u: goto label_180a80;
            case 0x180A88u: goto label_180a88;
            case 0x180A8Cu: goto label_180a8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180A9Cu;
    // 0x180a9c: 0x0
    ctx->pc = 0x180a9cu;
    // NOP
}
