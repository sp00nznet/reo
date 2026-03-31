#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B800
// Address: 0x12b800 - 0x12b898
void sub_0012B800_0x12b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b800u;

    // 0x12b800: 0x27bdfff0
    ctx->pc = 0x12b800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b804: 0x3c030021
    ctx->pc = 0x12b804u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b808: 0xffbf0000
    ctx->pc = 0x12b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b80c: 0x24630454
    ctx->pc = 0x12b80cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1108));
    // 0x12b810: 0x8c620000
    ctx->pc = 0x12b810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b814: 0x2442ffff
    ctx->pc = 0x12b814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12b818: 0x1440001b
    ctx->pc = 0x12B818u;
    {
        const bool branch_taken_0x12b818 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12b818) {
            ctx->pc = 0x12B888u;
            goto label_12b888;
        }
    }
    ctx->pc = 0x12B820u;
    // 0x12b820: 0xc04adec
    ctx->pc = 0x12B820u;
    SET_GPR_U32(ctx, 31, 0x12B828u);
    ctx->pc = 0x12B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B7B0_0x12b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B828u; }
    }
    if (ctx->pc != 0x12B828u) { return; }
    ctx->pc = 0x12B828u;
    // 0x12b828: 0xc04ae5a
    ctx->pc = 0x12B828u;
    SET_GPR_U32(ctx, 31, 0x12B830u);
    ctx->pc = 0x12B968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B968_0x12b968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B830u; }
    }
    if (ctx->pc != 0x12B830u) { return; }
    ctx->pc = 0x12B830u;
    // 0x12b830: 0xc04aec2
    ctx->pc = 0x12B830u;
    SET_GPR_U32(ctx, 31, 0x12B838u);
    ctx->pc = 0x12BB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BB08_0x12bb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B838u; }
    }
    if (ctx->pc != 0x12B838u) { return; }
    ctx->pc = 0x12B838u;
    // 0x12b838: 0xc04ae8e
    ctx->pc = 0x12B838u;
    SET_GPR_U32(ctx, 31, 0x12B840u);
    ctx->pc = 0x12BA38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BA38_0x12ba38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B840u; }
    }
    if (ctx->pc != 0x12B840u) { return; }
    ctx->pc = 0x12B840u;
    // 0x12b840: 0xc04af2a
    ctx->pc = 0x12B840u;
    SET_GPR_U32(ctx, 31, 0x12B848u);
    ctx->pc = 0x12BCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BCA8_0x12bca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B848u; }
    }
    if (ctx->pc != 0x12B848u) { return; }
    ctx->pc = 0x12B848u;
    // 0x12b848: 0x3c020021
    ctx->pc = 0x12b848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x12b84c: 0x3c030021
    ctx->pc = 0x12b84cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b850: 0x244204e8
    ctx->pc = 0x12b850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1256));
    // 0x12b854: 0x8c657d78
    ctx->pc = 0x12b854u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 32120)));
    // 0x12b858: 0xc04512c
    ctx->pc = 0x12B858u;
    SET_GPR_U32(ctx, 31, 0x12B860u);
    ctx->pc = 0x12B85Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B860u; }
    }
    if (ctx->pc != 0x12B860u) { return; }
    ctx->pc = 0x12B860u;
    // 0x12b860: 0x202d
    ctx->pc = 0x12b860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b864: 0xc05077c
    ctx->pc = 0x12B864u;
    SET_GPR_U32(ctx, 31, 0x12B86Cu);
    ctx->pc = 0x12B868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141DF0_0x141df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B86Cu; }
    }
    if (ctx->pc != 0x12B86Cu) { return; }
    ctx->pc = 0x12B86Cu;
    // 0x12b86c: 0x202d
    ctx->pc = 0x12b86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b870: 0xc050782
    ctx->pc = 0x12B870u;
    SET_GPR_U32(ctx, 31, 0x12B878u);
    ctx->pc = 0x12B874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E08_0x141e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B878u; }
    }
    if (ctx->pc != 0x12B878u) { return; }
    ctx->pc = 0x12B878u;
    // 0x12b878: 0xdfbf0000
    ctx->pc = 0x12b878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b87c: 0x805084e
    ctx->pc = 0x12B87Cu;
    ctx->pc = 0x12B880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x142138u;
    sub_00142138_0x142138(rdram, ctx, runtime); return;
    ctx->pc = 0x12B884u;
    // 0x12b884: 0x0
    ctx->pc = 0x12b884u;
    // NOP
label_12b888:
    // 0x12b888: 0xdfbf0000
    ctx->pc = 0x12b888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b88c: 0x3e00008
    ctx->pc = 0x12B88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B890u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B888u: goto label_12b888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12B894u;
    // 0x12b894: 0x0
    ctx->pc = 0x12b894u;
    // NOP
}
