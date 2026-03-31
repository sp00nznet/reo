#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016C450
// Address: 0x16c450 - 0x16c500
void sub_0016C450_0x16c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16c450u;

    // 0x16c450: 0x27bdffd0
    ctx->pc = 0x16c450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16c454: 0xffb10008
    ctx->pc = 0x16c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c458: 0x80882d
    ctx->pc = 0x16c458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c45c: 0xffb30018
    ctx->pc = 0x16c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16c460: 0x24130001
    ctx->pc = 0x16c460u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c464: 0xffb00000
    ctx->pc = 0x16c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c468: 0x26221b28
    ctx->pc = 0x16c468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 6952));
    // 0x16c46c: 0xffb20010
    ctx->pc = 0x16c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c470: 0xffbf0020
    ctx->pc = 0x16c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16c474: 0x8c520014
    ctx->pc = 0x16c474u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16c478: 0x8c500010
    ctx->pc = 0x16c478u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16c47c: 0xc059f30
    ctx->pc = 0x16C47Cu;
    SET_GPR_U32(ctx, 31, 0x16C484u);
    ctx->pc = 0x16C480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CC0_0x167cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C484u; }
    }
    if (ctx->pc != 0x16C484u) { return; }
    ctx->pc = 0x16C484u;
    // 0x16c484: 0x220202d
    ctx->pc = 0x16c484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c488: 0x10530015
    ctx->pc = 0x16C488u;
    {
        const bool branch_taken_0x16c488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x16C48Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c488) {
            ctx->pc = 0x16C4E0u;
            goto label_16c4e0;
        }
    }
    ctx->pc = 0x16C490u;
    // 0x16c490: 0xc059f30
    ctx->pc = 0x16C490u;
    SET_GPR_U32(ctx, 31, 0x16C498u);
    ctx->pc = 0x167CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CC0_0x167cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C498u; }
    }
    if (ctx->pc != 0x16C498u) { return; }
    ctx->pc = 0x16C498u;
    // 0x16c498: 0x54530012
    ctx->pc = 0x16C498u;
    {
        const bool branch_taken_0x16c498 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x16c498) {
            ctx->pc = 0x16C49Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16C4E4u;
            goto label_16c4e4;
        }
    }
    ctx->pc = 0x16C4A0u;
    // 0x16c4a0: 0xc05b140
    ctx->pc = 0x16C4A0u;
    SET_GPR_U32(ctx, 31, 0x16C4A8u);
    ctx->pc = 0x16C4A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16C500u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C500_0x16c500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4A8u; }
    }
    if (ctx->pc != 0x16C4A8u) { return; }
    ctx->pc = 0x16C4A8u;
    // 0x16c4a8: 0x1040000d
    ctx->pc = 0x16C4A8u;
    {
        const bool branch_taken_0x16c4a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C4ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c4a8) {
            ctx->pc = 0x16C4E0u;
            goto label_16c4e0;
        }
    }
    ctx->pc = 0x16C4B0u;
    // 0x16c4b0: 0x240282d
    ctx->pc = 0x16c4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4b4: 0xc059f28
    ctx->pc = 0x16C4B4u;
    SET_GPR_U32(ctx, 31, 0x16C4BCu);
    ctx->pc = 0x16C4B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x167CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CA0_0x167ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4BCu; }
    }
    if (ctx->pc != 0x16C4BCu) { return; }
    ctx->pc = 0x16C4BCu;
    // 0x16c4bc: 0x220202d
    ctx->pc = 0x16c4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4c0: 0xdfb00000
    ctx->pc = 0x16c4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c4c4: 0xdfb10008
    ctx->pc = 0x16c4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c4c8: 0xdfb20010
    ctx->pc = 0x16c4c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c4cc: 0xdfb30018
    ctx->pc = 0x16c4ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c4d0: 0xdfbf0020
    ctx->pc = 0x16c4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c4d4: 0x805b1a4
    ctx->pc = 0x16C4D4u;
    ctx->pc = 0x16C4D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x16C690u;
    entry_16c690_0x16c6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x16C4DCu;
    // 0x16c4dc: 0x0
    ctx->pc = 0x16c4dcu;
    // NOP
label_16c4e0:
    // 0x16c4e0: 0xdfb00000
    ctx->pc = 0x16c4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c4e4:
    // 0x16c4e4: 0xdfb10008
    ctx->pc = 0x16c4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c4e8: 0xdfb20010
    ctx->pc = 0x16c4e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c4ec: 0xdfb30018
    ctx->pc = 0x16c4ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c4f0: 0xdfbf0020
    ctx->pc = 0x16c4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c4f4: 0x3e00008
    ctx->pc = 0x16C4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C4F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C4E0u: goto label_16c4e0;
            case 0x16C4E4u: goto label_16c4e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C4FCu;
    // 0x16c4fc: 0x0
    ctx->pc = 0x16c4fcu;
    // NOP
}
