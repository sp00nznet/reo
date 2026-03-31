#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170630
// Address: 0x170630 - 0x1706d0
void sub_00170630_0x170630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170630u;

    // 0x170630: 0x27bdffe0
    ctx->pc = 0x170630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170634: 0xffb00010
    ctx->pc = 0x170634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x170638: 0x80802d
    ctx->pc = 0x170638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17063c: 0xffbf0018
    ctx->pc = 0x17063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x170640: 0xc05a7b2
    ctx->pc = 0x170640u;
    SET_GPR_U32(ctx, 31, 0x170648u);
    ctx->pc = 0x170644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170648u; }
    }
    if (ctx->pc != 0x170648u) { return; }
    ctx->pc = 0x170648u;
    // 0x170648: 0x8e021b30
    ctx->pc = 0x170648u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6960)));
    // 0x17064c: 0x182d
    ctx->pc = 0x17064cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170650: 0x8c440138
    ctx->pc = 0x170650u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x170654: 0x18800014
    ctx->pc = 0x170654u;
    {
        const bool branch_taken_0x170654 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x170658u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 316));
        if (branch_taken_0x170654) {
            ctx->pc = 0x1706A8u;
            goto label_1706a8;
        }
    }
    ctx->pc = 0x17065Cu;
    // 0x17065c: 0x10000006
    ctx->pc = 0x17065Cu;
    {
        const bool branch_taken_0x17065c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170660u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x17065c) {
            ctx->pc = 0x170678u;
            goto label_170678;
        }
    }
    ctx->pc = 0x170664u;
    // 0x170664: 0x0
    ctx->pc = 0x170664u;
    // NOP
label_170668:
    // 0x170668: 0x64102a
    ctx->pc = 0x170668u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x17066c: 0x1040000e
    ctx->pc = 0x17066Cu;
    {
        const bool branch_taken_0x17066c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x170670u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 128));
        if (branch_taken_0x17066c) {
            ctx->pc = 0x1706A8u;
            goto label_1706a8;
        }
    }
    ctx->pc = 0x170674u;
    // 0x170674: 0x8e020000
    ctx->pc = 0x170674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_170678:
    // 0x170678: 0x0
    ctx->pc = 0x170678u;
    // NOP
    // 0x17067c: 0x0
    ctx->pc = 0x17067cu;
    // NOP
    // 0x170680: 0x0
    ctx->pc = 0x170680u;
    // NOP
    // 0x170684: 0x5440fff8
    ctx->pc = 0x170684u;
    {
        const bool branch_taken_0x170684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x170684) {
            ctx->pc = 0x170688u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x170668u;
            goto label_170668;
        }
    }
    ctx->pc = 0x17068Cu;
    // 0x17068c: 0x8e020004
    ctx->pc = 0x17068cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x170690: 0x0
    ctx->pc = 0x170690u;
    // NOP
    // 0x170694: 0x0
    ctx->pc = 0x170694u;
    // NOP
    // 0x170698: 0x5440fff3
    ctx->pc = 0x170698u;
    {
        const bool branch_taken_0x170698 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x170698) {
            ctx->pc = 0x17069Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x170668u;
            goto label_170668;
        }
    }
    ctx->pc = 0x1706A0u;
    // 0x1706a0: 0x24020001
    ctx->pc = 0x1706a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1706a4: 0xae020000
    ctx->pc = 0x1706a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1706a8:
    // 0x1706a8: 0x641026
    ctx->pc = 0x1706a8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1706ac: 0x3a0202d
    ctx->pc = 0x1706acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706b0: 0xc05a7b8
    ctx->pc = 0x1706B0u;
    SET_GPR_U32(ctx, 31, 0x1706B8u);
    ctx->pc = 0x1706B4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1706B8u; }
    }
    if (ctx->pc != 0x1706B8u) { return; }
    ctx->pc = 0x1706B8u;
    // 0x1706b8: 0xdfbf0018
    ctx->pc = 0x1706b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1706bc: 0x200102d
    ctx->pc = 0x1706bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706c0: 0xdfb00010
    ctx->pc = 0x1706c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1706c4: 0x3e00008
    ctx->pc = 0x1706C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1706C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170668u: goto label_170668;
            case 0x170678u: goto label_170678;
            case 0x1706A8u: goto label_1706a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1706CCu;
    // 0x1706cc: 0x0
    ctx->pc = 0x1706ccu;
    // NOP
}
