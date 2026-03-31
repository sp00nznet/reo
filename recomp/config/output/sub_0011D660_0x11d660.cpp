#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011D660
// Address: 0x11d660 - 0x11d6b8
void sub_0011D660_0x11d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11d660u;

    // 0x11d660: 0x40036000
    ctx->pc = 0x11d660u;
    SET_GPR_U32(ctx, 3, ctx->cop0_status);
    // 0x11d664: 0x3c020001
    ctx->pc = 0x11d664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x11d668: 0x621824
    ctx->pc = 0x11d668u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d66c: 0x1060000d
    ctx->pc = 0x11D66Cu;
    {
        const bool branch_taken_0x11d66c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11D670u;
        SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        if (branch_taken_0x11d66c) {
            ctx->pc = 0x11D6A4u;
            goto label_11d6a4;
        }
    }
    ctx->pc = 0x11D674u;
    // 0x11d674: 0x0
    ctx->pc = 0x11d674u;
    // NOP
label_11d678:
    // 0x11d678: 0x42000039
    ctx->pc = 0x11d678u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x11d67c: 0x40f
    ctx->pc = 0x11d67cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11d680: 0x40026000
    ctx->pc = 0x11d680u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x11d684: 0x3c030001
    ctx->pc = 0x11d684u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x11d688: 0x431024
    ctx->pc = 0x11d688u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11d68c: 0x0
    ctx->pc = 0x11d68cu;
    // NOP
    // 0x11d690: 0x0
    ctx->pc = 0x11d690u;
    // NOP
    // 0x11d694: 0x1440fff8
    ctx->pc = 0x11D694u;
    {
        const bool branch_taken_0x11d694 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11d694) {
            ctx->pc = 0x11D678u;
            goto label_11d678;
        }
    }
    ctx->pc = 0x11D69Cu;
    // 0x11d69c: 0x3e00008
    ctx->pc = 0x11D69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D6A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D678u: goto label_11d678;
            case 0x11D6A4u: goto label_11d6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D6A4u;
label_11d6a4:
    // 0x11d6a4: 0x202d
    ctx->pc = 0x11d6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6a8: 0x80102d
    ctx->pc = 0x11d6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d6ac: 0x3e00008
    ctx->pc = 0x11D6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D678u: goto label_11d678;
            case 0x11D6A4u: goto label_11d6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D6B4u;
    // 0x11d6b4: 0x0
    ctx->pc = 0x11d6b4u;
    // NOP
}
