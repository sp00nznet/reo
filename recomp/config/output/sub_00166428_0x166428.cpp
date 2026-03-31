#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166428
// Address: 0x166428 - 0x166498
void sub_00166428_0x166428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166428u;

    // 0x166428: 0x27bdffe0
    ctx->pc = 0x166428u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16642c: 0x24050007
    ctx->pc = 0x16642cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x166430: 0xffb00000
    ctx->pc = 0x166430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166434: 0x80802d
    ctx->pc = 0x166434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166438: 0xffb10008
    ctx->pc = 0x166438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16643c: 0xffbf0010
    ctx->pc = 0x16643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166440: 0xc05df12
    ctx->pc = 0x166440u;
    SET_GPR_U32(ctx, 31, 0x166448u);
    ctx->pc = 0x166444u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C48_0x177c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166448u; }
    }
    if (ctx->pc != 0x166448u) { return; }
    ctx->pc = 0x166448u;
    // 0x166448: 0x1051000d
    ctx->pc = 0x166448u;
    {
        const bool branch_taken_0x166448 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x16644Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166448) {
            ctx->pc = 0x166480u;
            goto label_166480;
        }
    }
    ctx->pc = 0x166450u;
    // 0x166450: 0xc059f30
    ctx->pc = 0x166450u;
    SET_GPR_U32(ctx, 31, 0x166458u);
    ctx->pc = 0x166454u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7308)));
    ctx->pc = 0x167CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CC0_0x167cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166458u; }
    }
    if (ctx->pc != 0x166458u) { return; }
    ctx->pc = 0x166458u;
    // 0x166458: 0x200202d
    ctx->pc = 0x166458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16645c: 0x24050007
    ctx->pc = 0x16645cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x166460: 0x14510007
    ctx->pc = 0x166460u;
    {
        const bool branch_taken_0x166460 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x166464u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x166460) {
            ctx->pc = 0x166480u;
            goto label_166480;
        }
    }
    ctx->pc = 0x166468u;
    // 0x166468: 0xdfb00000
    ctx->pc = 0x166468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16646c: 0xdfb10008
    ctx->pc = 0x16646cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166470: 0xdfbf0010
    ctx->pc = 0x166470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166474: 0x805df0c
    ctx->pc = 0x166474u;
    ctx->pc = 0x166478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177C30u;
    entry_177c30_0x177c48(rdram, ctx, runtime); return;
    ctx->pc = 0x16647Cu;
    // 0x16647c: 0x0
    ctx->pc = 0x16647cu;
    // NOP
label_166480:
    // 0x166480: 0xdfb00000
    ctx->pc = 0x166480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166484: 0xdfb10008
    ctx->pc = 0x166484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166488: 0xdfbf0010
    ctx->pc = 0x166488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16648c: 0x3e00008
    ctx->pc = 0x16648Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166490u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166480u: goto label_166480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166494u;
    // 0x166494: 0x0
    ctx->pc = 0x166494u;
    // NOP
}
