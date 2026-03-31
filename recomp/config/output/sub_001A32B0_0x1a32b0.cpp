#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A32B0
// Address: 0x1a32b0 - 0x1a3310
void sub_001A32B0_0x1a32b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a32b0u;

    // 0x1a32b0: 0x27bdffe0
    ctx->pc = 0x1a32b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a32b4: 0xffbf0010
    ctx->pc = 0x1a32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a32b8: 0xc068d64
    ctx->pc = 0x1A32B8u;
    SET_GPR_U32(ctx, 31, 0x1A32C0u);
    ctx->pc = 0x1A32BCu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A3590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3590_0x1a3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32C0u; }
    }
    if (ctx->pc != 0x1A32C0u) { return; }
    ctx->pc = 0x1A32C0u;
    // 0x1a32c0: 0x40802d
    ctx->pc = 0x1a32c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a32c4: 0x24050009
    ctx->pc = 0x1a32c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a32c8: 0xc068d68
    ctx->pc = 0x1A32C8u;
    SET_GPR_U32(ctx, 31, 0x1A32D0u);
    ctx->pc = 0x1A32CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35A0_0x1a35a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32D0u; }
    }
    if (ctx->pc != 0x1A32D0u) { return; }
    ctx->pc = 0x1A32D0u;
    // 0x1a32d0: 0x10400003
    ctx->pc = 0x1A32D0u;
    {
        const bool branch_taken_0x1a32d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A32D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a32d0) {
            ctx->pc = 0x1A32E0u;
            goto label_1a32e0;
        }
    }
    ctx->pc = 0x1A32D8u;
    // 0x1a32d8: 0x10000009
    ctx->pc = 0x1A32D8u;
    {
        const bool branch_taken_0x1a32d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A32DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a32d8) {
            ctx->pc = 0x1A3300u;
            goto label_1a3300;
        }
    }
    ctx->pc = 0x1A32E0u;
label_1a32e0:
    // 0x1a32e0: 0x24050009
    ctx->pc = 0x1a32e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a32e4: 0xc068d7c
    ctx->pc = 0x1A32E4u;
    SET_GPR_U32(ctx, 31, 0x1A32ECu);
    ctx->pc = 0x1A32E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32ECu; }
    }
    if (ctx->pc != 0x1A32ECu) { return; }
    ctx->pc = 0x1A32ECu;
    // 0x1a32ec: 0x14400003
    ctx->pc = 0x1A32ECu;
    {
        const bool branch_taken_0x1a32ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a32ec) {
            ctx->pc = 0x1A32FCu;
            goto label_1a32fc;
        }
    }
    ctx->pc = 0x1A32F4u;
    // 0x1a32f4: 0x10000002
    ctx->pc = 0x1A32F4u;
    {
        const bool branch_taken_0x1a32f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A32F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a32f4) {
            ctx->pc = 0x1A3300u;
            goto label_1a3300;
        }
    }
    ctx->pc = 0x1A32FCu;
label_1a32fc:
    // 0x1a32fc: 0x8c420004
    ctx->pc = 0x1a32fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a3300:
    // 0x1a3300: 0xdfbf0010
    ctx->pc = 0x1a3300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3304: 0x7bb00000
    ctx->pc = 0x1a3304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3308: 0x3e00008
    ctx->pc = 0x1A3308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A330Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A32E0u: goto label_1a32e0;
            case 0x1A32FCu: goto label_1a32fc;
            case 0x1A3300u: goto label_1a3300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3310u;
}
