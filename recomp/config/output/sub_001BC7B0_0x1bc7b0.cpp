#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BC7B0
// Address: 0x1bc7b0 - 0x1bc870
void sub_001BC7B0_0x1bc7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bc7b0u;

    // 0x1bc7b0: 0x27bdffd0
    ctx->pc = 0x1bc7b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc7b4: 0x28820002
    ctx->pc = 0x1bc7b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
    // 0x1bc7b8: 0xffbf0010
    ctx->pc = 0x1bc7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc7bc: 0x7fb00000
    ctx->pc = 0x1bc7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc7c0: 0xc073494
    ctx->pc = 0x1BC7C0u;
    SET_GPR_U32(ctx, 31, 0x1BC7C8u);
    ctx->pc = 0x1BC7C4u;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1CD250u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD250_0x1cd250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7C8u; }
    }
    if (ctx->pc != 0x1BC7C8u) { return; }
    ctx->pc = 0x1BC7C8u;
    // 0x1bc7c8: 0xafa2002c
    ctx->pc = 0x1bc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1bc7cc: 0x8fa3002c
    ctx->pc = 0x1bc7ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1bc7d0: 0x10600022
    ctx->pc = 0x1BC7D0u;
    {
        const bool branch_taken_0x1bc7d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bc7d0) {
            ctx->pc = 0x1BC85Cu;
            goto label_1bc85c;
        }
    }
    ctx->pc = 0x1BC7D8u;
    // 0x1bc7d8: 0xc06bc10
    ctx->pc = 0x1BC7D8u;
    SET_GPR_U32(ctx, 31, 0x1BC7E0u);
    ctx->pc = 0x1AF040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF040_0x1af040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7E0u; }
    }
    if (ctx->pc != 0x1BC7E0u) { return; }
    ctx->pc = 0x1BC7E0u;
    // 0x1bc7e0: 0x2404000d
    ctx->pc = 0x1bc7e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bc7e4: 0xc06bde0
    ctx->pc = 0x1BC7E4u;
    SET_GPR_U32(ctx, 31, 0x1BC7ECu);
    ctx->pc = 0x1BC7E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7ECu; }
    }
    if (ctx->pc != 0x1BC7ECu) { return; }
    ctx->pc = 0x1BC7ECu;
    // 0x1bc7ec: 0x2404005f
    ctx->pc = 0x1bc7ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x1bc7f0: 0xc06bde0
    ctx->pc = 0x1BC7F0u;
    SET_GPR_U32(ctx, 31, 0x1BC7F8u);
    ctx->pc = 0x1BC7F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC7F8u; }
    }
    if (ctx->pc != 0x1BC7F8u) { return; }
    ctx->pc = 0x1BC7F8u;
    // 0x1bc7f8: 0x24040060
    ctx->pc = 0x1bc7f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1bc7fc: 0xc06bde0
    ctx->pc = 0x1BC7FCu;
    SET_GPR_U32(ctx, 31, 0x1BC804u);
    ctx->pc = 0x1BC800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC804u; }
    }
    if (ctx->pc != 0x1BC804u) { return; }
    ctx->pc = 0x1BC804u;
    // 0x1bc804: 0x24040063
    ctx->pc = 0x1bc804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1bc808: 0xc06bde0
    ctx->pc = 0x1BC808u;
    SET_GPR_U32(ctx, 31, 0x1BC810u);
    ctx->pc = 0x1BC80Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC810u; }
    }
    if (ctx->pc != 0x1BC810u) { return; }
    ctx->pc = 0x1BC810u;
    // 0x1bc810: 0x2404006c
    ctx->pc = 0x1bc810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1bc814: 0xc06bde0
    ctx->pc = 0x1BC814u;
    SET_GPR_U32(ctx, 31, 0x1BC81Cu);
    ctx->pc = 0x1BC818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC81Cu; }
    }
    if (ctx->pc != 0x1BC81Cu) { return; }
    ctx->pc = 0x1BC81Cu;
    // 0x1bc81c: 0x24040001
    ctx->pc = 0x1bc81cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc820: 0xc0675c8
    ctx->pc = 0x1BC820u;
    SET_GPR_U32(ctx, 31, 0x1BC828u);
    ctx->pc = 0x1BC824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 44));
    ctx->pc = 0x19D720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D720_0x19d720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC828u; }
    }
    if (ctx->pc != 0x1BC828u) { return; }
    ctx->pc = 0x1BC828u;
    // 0x1bc828: 0x8fa5002c
    ctx->pc = 0x1bc828u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1bc82c: 0xc06bde0
    ctx->pc = 0x1BC82Cu;
    SET_GPR_U32(ctx, 31, 0x1BC834u);
    ctx->pc = 0x1BC830u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC834u; }
    }
    if (ctx->pc != 0x1BC834u) { return; }
    ctx->pc = 0x1BC834u;
    // 0x1bc834: 0x24040004
    ctx->pc = 0x1bc834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bc838: 0xc06bc78
    ctx->pc = 0x1BC838u;
    SET_GPR_U32(ctx, 31, 0x1BC840u);
    ctx->pc = 0x1BC83Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1E0_0x1af1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC840u; }
    }
    if (ctx->pc != 0x1BC840u) { return; }
    ctx->pc = 0x1BC840u;
    // 0x1bc840: 0x101880
    ctx->pc = 0x1bc840u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc844: 0x3c020023
    ctx->pc = 0x1bc844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1bc848: 0x701821
    ctx->pc = 0x1bc848u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bc84c: 0x24424ee0
    ctx->pc = 0x1bc84cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20192));
    // 0x1bc850: 0x31880
    ctx->pc = 0x1bc850u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bc854: 0xc06ae18
    ctx->pc = 0x1BC854u;
    SET_GPR_U32(ctx, 31, 0x1BC85Cu);
    ctx->pc = 0x1BC858u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AB860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB860_0x1ab860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC85Cu; }
    }
    if (ctx->pc != 0x1BC85Cu) { return; }
    ctx->pc = 0x1BC85Cu;
label_1bc85c:
    // 0x1bc85c: 0xdfbf0010
    ctx->pc = 0x1bc85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc860: 0x7bb00000
    ctx->pc = 0x1bc860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc864: 0x3e00008
    ctx->pc = 0x1BC864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC85Cu: goto label_1bc85c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC86Cu;
    // 0x1bc86c: 0x0
    ctx->pc = 0x1bc86cu;
    // NOP
}
