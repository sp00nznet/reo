#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A31B0
// Address: 0x1a31b0 - 0x1a3210
void sub_001A31B0_0x1a31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a31b0u;

    // 0x1a31b0: 0x27bdffe0
    ctx->pc = 0x1a31b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a31b4: 0xffbf0010
    ctx->pc = 0x1a31b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a31b8: 0xc068d64
    ctx->pc = 0x1A31B8u;
    SET_GPR_U32(ctx, 31, 0x1A31C0u);
    ctx->pc = 0x1A31BCu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A3590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3590_0x1a3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31C0u; }
    }
    if (ctx->pc != 0x1A31C0u) { return; }
    ctx->pc = 0x1A31C0u;
    // 0x1a31c0: 0x40802d
    ctx->pc = 0x1a31c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a31c4: 0x24050002
    ctx->pc = 0x1a31c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a31c8: 0xc068d68
    ctx->pc = 0x1A31C8u;
    SET_GPR_U32(ctx, 31, 0x1A31D0u);
    ctx->pc = 0x1A31CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35A0_0x1a35a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31D0u; }
    }
    if (ctx->pc != 0x1A31D0u) { return; }
    ctx->pc = 0x1A31D0u;
    // 0x1a31d0: 0x10400003
    ctx->pc = 0x1A31D0u;
    {
        const bool branch_taken_0x1a31d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A31D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a31d0) {
            ctx->pc = 0x1A31E0u;
            goto label_1a31e0;
        }
    }
    ctx->pc = 0x1A31D8u;
    // 0x1a31d8: 0x10000009
    ctx->pc = 0x1A31D8u;
    {
        const bool branch_taken_0x1a31d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A31DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a31d8) {
            ctx->pc = 0x1A3200u;
            goto label_1a3200;
        }
    }
    ctx->pc = 0x1A31E0u;
label_1a31e0:
    // 0x1a31e0: 0x24050002
    ctx->pc = 0x1a31e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a31e4: 0xc068d7c
    ctx->pc = 0x1A31E4u;
    SET_GPR_U32(ctx, 31, 0x1A31ECu);
    ctx->pc = 0x1A31E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31ECu; }
    }
    if (ctx->pc != 0x1A31ECu) { return; }
    ctx->pc = 0x1A31ECu;
    // 0x1a31ec: 0x14400003
    ctx->pc = 0x1A31ECu;
    {
        const bool branch_taken_0x1a31ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a31ec) {
            ctx->pc = 0x1A31FCu;
            goto label_1a31fc;
        }
    }
    ctx->pc = 0x1A31F4u;
    // 0x1a31f4: 0x10000002
    ctx->pc = 0x1A31F4u;
    {
        const bool branch_taken_0x1a31f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A31F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a31f4) {
            ctx->pc = 0x1A3200u;
            goto label_1a3200;
        }
    }
    ctx->pc = 0x1A31FCu;
label_1a31fc:
    // 0x1a31fc: 0x8c420004
    ctx->pc = 0x1a31fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a3200:
    // 0x1a3200: 0xdfbf0010
    ctx->pc = 0x1a3200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3204: 0x7bb00000
    ctx->pc = 0x1a3204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3208: 0x3e00008
    ctx->pc = 0x1A3208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A320Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A31E0u: goto label_1a31e0;
            case 0x1A31FCu: goto label_1a31fc;
            case 0x1A3200u: goto label_1a3200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3210u;
}
