#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D598
// Address: 0x13d598 - 0x13d618
void sub_0013D598_0x13d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d598u;

    // 0x13d598: 0x27bdffe0
    ctx->pc = 0x13d598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d59c: 0x3c020022
    ctx->pc = 0x13d59cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13d5a0: 0xffb00010
    ctx->pc = 0x13d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13d5a4: 0x2442e0f0
    ctx->pc = 0x13d5a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959344));
    // 0x13d5a8: 0xffbf0018
    ctx->pc = 0x13d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13d5ac: 0x3a0202d
    ctx->pc = 0x13d5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5b0: 0xc04f526
    ctx->pc = 0x13D5B0u;
    SET_GPR_U32(ctx, 31, 0x13D5B8u);
    ctx->pc = 0x13D5B4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13D498u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D498_0x13d498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5B8u; }
    }
    if (ctx->pc != 0x13D5B8u) { return; }
    ctx->pc = 0x13D5B8u;
    // 0x13d5b8: 0x3c020022
    ctx->pc = 0x13d5b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13d5bc: 0x3c040022
    ctx->pc = 0x13d5bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x13d5c0: 0x2450e108
    ctx->pc = 0x13d5c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294959368));
    // 0x13d5c4: 0x2484e110
    ctx->pc = 0x13d5c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959376));
    // 0x13d5c8: 0x8e020000
    ctx->pc = 0x13d5c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13d5cc: 0x282d
    ctx->pc = 0x13d5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5d0: 0x14400009
    ctx->pc = 0x13D5D0u;
    {
        const bool branch_taken_0x13d5d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13D5D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9088));
        if (branch_taken_0x13d5d0) {
            ctx->pc = 0x13D5F8u;
            goto label_13d5f8;
        }
    }
    ctx->pc = 0x13D5D8u;
    // 0x13d5d8: 0xc041f1a
    ctx->pc = 0x13D5D8u;
    SET_GPR_U32(ctx, 31, 0x13D5E0u);
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5E0u; }
    }
    if (ctx->pc != 0x13D5E0u) { return; }
    ctx->pc = 0x13D5E0u;
    // 0x13d5e0: 0xc04f562
    ctx->pc = 0x13D5E0u;
    SET_GPR_U32(ctx, 31, 0x13D5E8u);
    ctx->pc = 0x13D588u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D588_0x13d588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5E8u; }
    }
    if (ctx->pc != 0x13D5E8u) { return; }
    ctx->pc = 0x13D5E8u;
    // 0x13d5e8: 0x202d
    ctx->pc = 0x13d5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5ec: 0xc04f534
    ctx->pc = 0x13D5ECu;
    SET_GPR_U32(ctx, 31, 0x13D5F4u);
    ctx->pc = 0x13D5F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13D4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4D0_0x13d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D5F4u; }
    }
    if (ctx->pc != 0x13D5F4u) { return; }
    ctx->pc = 0x13D5F4u;
    // 0x13d5f4: 0x8e020000
    ctx->pc = 0x13d5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13d5f8:
    // 0x13d5f8: 0x24420001
    ctx->pc = 0x13d5f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x13d5fc: 0x3a0202d
    ctx->pc = 0x13d5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d600: 0xc04f52e
    ctx->pc = 0x13D600u;
    SET_GPR_U32(ctx, 31, 0x13D608u);
    ctx->pc = 0x13D604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13D4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4B8_0x13d4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D608u; }
    }
    if (ctx->pc != 0x13D608u) { return; }
    ctx->pc = 0x13D608u;
    // 0x13d608: 0xdfb00010
    ctx->pc = 0x13d608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d60c: 0xdfbf0018
    ctx->pc = 0x13d60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d610: 0x3e00008
    ctx->pc = 0x13D610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D614u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D5F8u: goto label_13d5f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D618u;
}
