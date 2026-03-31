#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172C48
// Address: 0x172c48 - 0x172cf8
void sub_00172C48_0x172c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172c48u;

    // 0x172c48: 0x27bdffd0
    ctx->pc = 0x172c48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172c4c: 0xffb00010
    ctx->pc = 0x172c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x172c50: 0x80802d
    ctx->pc = 0x172c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c54: 0xffb10018
    ctx->pc = 0x172c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x172c58: 0x2611094c
    ctx->pc = 0x172c58u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2380));
    // 0x172c5c: 0xffb20020
    ctx->pc = 0x172c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x172c60: 0xffbf0028
    ctx->pc = 0x172c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x172c64: 0xc05a7b2
    ctx->pc = 0x172C64u;
    SET_GPR_U32(ctx, 31, 0x172C6Cu);
    ctx->pc = 0x172C68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C6Cu; }
    }
    if (ctx->pc != 0x172C6Cu) { return; }
    ctx->pc = 0x172C6Cu;
    // 0x172c6c: 0x8e220018
    ctx->pc = 0x172c6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x172c70: 0x902d
    ctx->pc = 0x172c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c74: 0x1440000e
    ctx->pc = 0x172C74u;
    {
        const bool branch_taken_0x172c74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172C78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172c74) {
            ctx->pc = 0x172CB0u;
            goto label_172cb0;
        }
    }
    ctx->pc = 0x172C7Cu;
    // 0x172c7c: 0xc05cb3e
    ctx->pc = 0x172C7Cu;
    SET_GPR_U32(ctx, 31, 0x172C84u);
    ctx->pc = 0x172CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172CF8_0x172cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C84u; }
    }
    if (ctx->pc != 0x172C84u) { return; }
    ctx->pc = 0x172C84u;
    // 0x172c84: 0x10400012
    ctx->pc = 0x172C84u;
    {
        const bool branch_taken_0x172c84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172C88u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x172c84) {
            ctx->pc = 0x172CD0u;
            goto label_172cd0;
        }
    }
    ctx->pc = 0x172C8Cu;
    // 0x172c8c: 0x8e23001c
    ctx->pc = 0x172c8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x172c90: 0x24020001
    ctx->pc = 0x172c90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x172c94: 0xae220018
    ctx->pc = 0x172c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x172c98: 0x200202d
    ctx->pc = 0x172c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c9c: 0x24630001
    ctx->pc = 0x172c9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x172ca0: 0xc05c856
    ctx->pc = 0x172CA0u;
    SET_GPR_U32(ctx, 31, 0x172CA8u);
    ctx->pc = 0x172CA4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x172158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172158_0x172158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CA8u; }
    }
    if (ctx->pc != 0x172CA8u) { return; }
    ctx->pc = 0x172CA8u;
    // 0x172ca8: 0x10000009
    ctx->pc = 0x172CA8u;
    {
        const bool branch_taken_0x172ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172CACu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172ca8) {
            ctx->pc = 0x172CD0u;
            goto label_172cd0;
        }
    }
    ctx->pc = 0x172CB0u;
label_172cb0:
    // 0x172cb0: 0xc05cb9e
    ctx->pc = 0x172CB0u;
    SET_GPR_U32(ctx, 31, 0x172CB8u);
    ctx->pc = 0x172CB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172E78_0x172e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CB8u; }
    }
    if (ctx->pc != 0x172CB8u) { return; }
    ctx->pc = 0x172CB8u;
    // 0x172cb8: 0x200202d
    ctx->pc = 0x172cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cbc: 0x10400004
    ctx->pc = 0x172CBCu;
    {
        const bool branch_taken_0x172cbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172CC0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172cbc) {
            ctx->pc = 0x172CD0u;
            goto label_172cd0;
        }
    }
    ctx->pc = 0x172CC4u;
    // 0x172cc4: 0xc05c856
    ctx->pc = 0x172CC4u;
    SET_GPR_U32(ctx, 31, 0x172CCCu);
    ctx->pc = 0x172CC8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x172158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172158_0x172158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CCCu; }
    }
    if (ctx->pc != 0x172CCCu) { return; }
    ctx->pc = 0x172CCCu;
    // 0x172ccc: 0x40902d
    ctx->pc = 0x172cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172cd0:
    // 0x172cd0: 0xc05a7b8
    ctx->pc = 0x172CD0u;
    SET_GPR_U32(ctx, 31, 0x172CD8u);
    ctx->pc = 0x172CD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CD8u; }
    }
    if (ctx->pc != 0x172CD8u) { return; }
    ctx->pc = 0x172CD8u;
    // 0x172cd8: 0x240102d
    ctx->pc = 0x172cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cdc: 0xdfb00010
    ctx->pc = 0x172cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172ce0: 0xdfb10018
    ctx->pc = 0x172ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172ce4: 0xdfb20020
    ctx->pc = 0x172ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172ce8: 0xdfbf0028
    ctx->pc = 0x172ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x172cec: 0x3e00008
    ctx->pc = 0x172CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172CB0u: goto label_172cb0;
            case 0x172CD0u: goto label_172cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172CF4u;
    // 0x172cf4: 0x0
    ctx->pc = 0x172cf4u;
    // NOP
}
