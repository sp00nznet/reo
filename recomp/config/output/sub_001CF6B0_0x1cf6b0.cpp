#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CF6B0
// Address: 0x1cf6b0 - 0x1cf740
void sub_001CF6B0_0x1cf6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cf6b0u;

    // 0x1cf6b0: 0x27bdfff0
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf6b4: 0x80682d
    ctx->pc = 0x1cf6b4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6b8: 0x15a00003
    ctx->pc = 0x1CF6B8u;
    {
        const bool branch_taken_0x1cf6b8 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF6BCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1cf6b8) {
            ctx->pc = 0x1CF6C8u;
            goto label_1cf6c8;
        }
    }
    ctx->pc = 0x1CF6C0u;
    // 0x1cf6c0: 0x1000001a
    ctx->pc = 0x1CF6C0u;
    {
        const bool branch_taken_0x1cf6c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF6C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf6c0) {
            ctx->pc = 0x1CF72Cu;
            goto label_1cf72c;
        }
    }
    ctx->pc = 0x1CF6C8u;
label_1cf6c8:
    // 0x1cf6c8: 0x3c0c0034
    ctx->pc = 0x1cf6c8u;
    SET_GPR_U32(ctx, 12, ((uint32_t)52 << 16));
    // 0x1cf6cc: 0x582d
    ctx->pc = 0x1cf6ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6d0: 0x10000013
    ctx->pc = 0x1CF6D0u;
    {
        const bool branch_taken_0x1cf6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF6D4u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 5168));
        if (branch_taken_0x1cf6d0) {
            ctx->pc = 0x1CF720u;
            goto label_1cf720;
        }
    }
    ctx->pc = 0x1CF6D8u;
label_1cf6d8:
    // 0x1cf6d8: 0x91820000
    ctx->pc = 0x1cf6d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1cf6dc: 0x1040000e
    ctx->pc = 0x1CF6DCu;
    {
        const bool branch_taken_0x1cf6dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf6dc) {
            ctx->pc = 0x1CF718u;
            goto label_1cf718;
        }
    }
    ctx->pc = 0x1CF6E4u;
    // 0x1cf6e4: 0x91820003
    ctx->pc = 0x1cf6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x1cf6e8: 0x30420004
    ctx->pc = 0x1cf6e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x1cf6ec: 0x1040000a
    ctx->pc = 0x1CF6ECu;
    {
        const bool branch_taken_0x1cf6ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf6ec) {
            ctx->pc = 0x1CF718u;
            goto label_1cf718;
        }
    }
    ctx->pc = 0x1CF6F4u;
    // 0x1cf6f4: 0x8d840004
    ctx->pc = 0x1cf6f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1cf6f8: 0x10800007
    ctx->pc = 0x1CF6F8u;
    {
        const bool branch_taken_0x1cf6f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF6FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf6f8) {
            ctx->pc = 0x1CF718u;
            goto label_1cf718;
        }
    }
    ctx->pc = 0x1CF700u;
    // 0x1cf700: 0xc073d7c
    ctx->pc = 0x1CF700u;
    SET_GPR_U32(ctx, 31, 0x1CF708u);
    ctx->pc = 0x1CF5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF5F0_0x1cf5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF708u; }
    }
    if (ctx->pc != 0x1CF708u) { return; }
    ctx->pc = 0x1CF708u;
    // 0x1cf708: 0x10400003
    ctx->pc = 0x1CF708u;
    {
        const bool branch_taken_0x1cf708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cf708) {
            ctx->pc = 0x1CF718u;
            goto label_1cf718;
        }
    }
    ctx->pc = 0x1CF710u;
    // 0x1cf710: 0x10000006
    ctx->pc = 0x1CF710u;
    {
        const bool branch_taken_0x1cf710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CF714u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cf710) {
            ctx->pc = 0x1CF72Cu;
            goto label_1cf72c;
        }
    }
    ctx->pc = 0x1CF718u;
label_1cf718:
    // 0x1cf718: 0x256b0001
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cf71c: 0x258c000c
    ctx->pc = 0x1cf71cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 12));
label_1cf720:
    // 0x1cf720: 0x29620010
    ctx->pc = 0x1cf720u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), 16));
    // 0x1cf724: 0x1440ffec
    ctx->pc = 0x1CF724u;
    {
        const bool branch_taken_0x1cf724 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CF728u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cf724) {
            ctx->pc = 0x1CF6D8u;
            goto label_1cf6d8;
        }
    }
    ctx->pc = 0x1CF72Cu;
label_1cf72c:
    // 0x1cf72c: 0xdfbf0000
    ctx->pc = 0x1cf72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf730: 0x3e00008
    ctx->pc = 0x1CF730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF734u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF6C8u: goto label_1cf6c8;
            case 0x1CF6D8u: goto label_1cf6d8;
            case 0x1CF718u: goto label_1cf718;
            case 0x1CF720u: goto label_1cf720;
            case 0x1CF72Cu: goto label_1cf72c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CF738u;
    // 0x1cf738: 0x0
    ctx->pc = 0x1cf738u;
    // NOP
    // 0x1cf73c: 0x0
    ctx->pc = 0x1cf73cu;
    // NOP
}
