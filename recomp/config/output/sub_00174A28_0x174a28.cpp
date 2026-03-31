#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174A28
// Address: 0x174a28 - 0x174aa8
void sub_00174A28_0x174a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174a28u;

    // 0x174a28: 0x27bdffe0
    ctx->pc = 0x174a28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174a2c: 0xffb20010
    ctx->pc = 0x174a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174a30: 0xa0902d
    ctx->pc = 0x174a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a34: 0x24050003
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x174a38: 0xffb00000
    ctx->pc = 0x174a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174a3c: 0xffb10008
    ctx->pc = 0x174a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174a40: 0xc0882d
    ctx->pc = 0x174a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a44: 0xffbf0018
    ctx->pc = 0x174a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174a48: 0xc05df24
    ctx->pc = 0x174A48u;
    SET_GPR_U32(ctx, 31, 0x174A50u);
    ctx->pc = 0x174A4Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C90_0x177c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A50u; }
    }
    if (ctx->pc != 0x174A50u) { return; }
    ctx->pc = 0x174A50u;
    // 0x174a50: 0x200202d
    ctx->pc = 0x174a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a54: 0x1040000c
    ctx->pc = 0x174A54u;
    {
        const bool branch_taken_0x174a54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174A58u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x174a54) {
            ctx->pc = 0x174A88u;
            goto label_174a88;
        }
    }
    ctx->pc = 0x174A5Cu;
    // 0x174a5c: 0xc05d58a
    ctx->pc = 0x174A5Cu;
    SET_GPR_U32(ctx, 31, 0x174A64u);
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A64u; }
    }
    if (ctx->pc != 0x174A64u) { return; }
    ctx->pc = 0x174A64u;
    // 0x174a64: 0x40182d
    ctx->pc = 0x174a64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a68: 0x24020001
    ctx->pc = 0x174a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a6c: 0x54620007
    ctx->pc = 0x174A6Cu;
    {
        const bool branch_taken_0x174a6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x174a6c) {
            ctx->pc = 0x174A70u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x174A8Cu;
            goto label_174a8c;
        }
    }
    ctx->pc = 0x174A74u;
    // 0x174a74: 0xae230000
    ctx->pc = 0x174a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x174a78: 0x8e420000
    ctx->pc = 0x174a78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174a7c: 0x10000004
    ctx->pc = 0x174A7Cu;
    {
        const bool branch_taken_0x174a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174A80u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x174a7c) {
            ctx->pc = 0x174A90u;
            goto label_174a90;
        }
    }
    ctx->pc = 0x174A84u;
    // 0x174a84: 0x0
    ctx->pc = 0x174a84u;
    // NOP
label_174a88:
    // 0x174a88: 0xae200000
    ctx->pc = 0x174a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_174a8c:
    // 0x174a8c: 0x102d
    ctx->pc = 0x174a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a90:
    // 0x174a90: 0xdfb00000
    ctx->pc = 0x174a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174a94: 0xdfb10008
    ctx->pc = 0x174a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174a98: 0xdfb20010
    ctx->pc = 0x174a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174a9c: 0xdfbf0018
    ctx->pc = 0x174a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174aa0: 0x3e00008
    ctx->pc = 0x174AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174AA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174A88u: goto label_174a88;
            case 0x174A8Cu: goto label_174a8c;
            case 0x174A90u: goto label_174a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174AA8u;
}
