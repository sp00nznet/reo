#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001357F8
// Address: 0x1357f8 - 0x135878
void sub_001357F8_0x1357f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1357f8u;

    // 0x1357f8: 0x27bdffd0
    ctx->pc = 0x1357f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1357fc: 0x3c020026
    ctx->pc = 0x1357fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x135800: 0xffbf0020
    ctx->pc = 0x135800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x135804: 0xffb00000
    ctx->pc = 0x135804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135808: 0x802d
    ctx->pc = 0x135808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13580c: 0xffb10008
    ctx->pc = 0x13580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x135810: 0x2451206c
    ctx->pc = 0x135810u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 8300));
    // 0x135814: 0xffb20010
    ctx->pc = 0x135814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x135818: 0xa0902d
    ctx->pc = 0x135818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13581c: 0xffb30018
    ctx->pc = 0x13581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x135820: 0x80982d
    ctx->pc = 0x135820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135824: 0x220282d
    ctx->pc = 0x135824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135828:
    // 0x135828: 0x26310010
    ctx->pc = 0x135828u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x13582c: 0x260202d
    ctx->pc = 0x13582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135830: 0xc042d10
    ctx->pc = 0x135830u;
    SET_GPR_U32(ctx, 31, 0x135838u);
    ctx->pc = 0x135834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135838u; }
    }
    if (ctx->pc != 0x135838u) { return; }
    ctx->pc = 0x135838u;
    // 0x135838: 0x14400003
    ctx->pc = 0x135838u;
    {
        const bool branch_taken_0x135838 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13583Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x135838) {
            ctx->pc = 0x135848u;
            goto label_135848;
        }
    }
    ctx->pc = 0x135840u;
    // 0x135840: 0x10000005
    ctx->pc = 0x135840u;
    {
        const bool branch_taken_0x135840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x135844u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x135840) {
            ctx->pc = 0x135858u;
            goto label_135858;
        }
    }
    ctx->pc = 0x135848u;
label_135848:
    // 0x135848: 0x2a020020
    ctx->pc = 0x135848u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 32));
    // 0x13584c: 0x1440fff6
    ctx->pc = 0x13584Cu;
    {
        const bool branch_taken_0x13584c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x135850u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13584c) {
            ctx->pc = 0x135828u;
            goto label_135828;
        }
    }
    ctx->pc = 0x135854u;
    // 0x135854: 0x102d
    ctx->pc = 0x135854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135858:
    // 0x135858: 0xdfb00000
    ctx->pc = 0x135858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13585c: 0xdfb10008
    ctx->pc = 0x13585cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135860: 0xdfb20010
    ctx->pc = 0x135860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135864: 0xdfb30018
    ctx->pc = 0x135864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135868: 0xdfbf0020
    ctx->pc = 0x135868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13586c: 0x3e00008
    ctx->pc = 0x13586Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135870u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135828u: goto label_135828;
            case 0x135848u: goto label_135848;
            case 0x135858u: goto label_135858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135874u;
    // 0x135874: 0x0
    ctx->pc = 0x135874u;
    // NOP
}
