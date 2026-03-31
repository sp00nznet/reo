#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BC0F0
// Address: 0x1bc0f0 - 0x1bc1d0
void sub_001BC0F0_0x1bc0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bc0f0u;

    // 0x1bc0f0: 0x27bdffd0
    ctx->pc = 0x1bc0f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc0f4: 0x3c010032
    ctx->pc = 0x1bc0f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bc0f8: 0xffbf0010
    ctx->pc = 0x1bc0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc0fc: 0x7fb00000
    ctx->pc = 0x1bc0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc100: 0x902243c0
    ctx->pc = 0x1bc100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x1bc104: 0x3c100031
    ctx->pc = 0x1bc104u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x1bc108: 0x14400003
    ctx->pc = 0x1BC108u;
    {
        const bool branch_taken_0x1bc108 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BC10Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 26080));
        if (branch_taken_0x1bc108) {
            ctx->pc = 0x1BC118u;
            goto label_1bc118;
        }
    }
    ctx->pc = 0x1BC110u;
    // 0x1bc110: 0xc06f13c
    ctx->pc = 0x1BC110u;
    SET_GPR_U32(ctx, 31, 0x1BC118u);
    ctx->pc = 0x1BC4F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC4F0_0x1bc4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC118u; }
    }
    if (ctx->pc != 0x1BC118u) { return; }
    ctx->pc = 0x1BC118u;
label_1bc118:
    // 0x1bc118: 0xc06bddc
    ctx->pc = 0x1BC118u;
    SET_GPR_U32(ctx, 31, 0x1BC120u);
    ctx->pc = 0x1AF770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF770_0x1af770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC120u; }
    }
    if (ctx->pc != 0x1BC120u) { return; }
    ctx->pc = 0x1BC120u;
    // 0x1bc120: 0x2404005f
    ctx->pc = 0x1bc120u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x1bc124: 0xc06bde0
    ctx->pc = 0x1BC124u;
    SET_GPR_U32(ctx, 31, 0x1BC12Cu);
    ctx->pc = 0x1BC128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC12Cu; }
    }
    if (ctx->pc != 0x1BC12Cu) { return; }
    ctx->pc = 0x1BC12Cu;
    // 0x1bc12c: 0x24040060
    ctx->pc = 0x1bc12cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1bc130: 0xc06bde0
    ctx->pc = 0x1BC130u;
    SET_GPR_U32(ctx, 31, 0x1BC138u);
    ctx->pc = 0x1BC134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC138u; }
    }
    if (ctx->pc != 0x1BC138u) { return; }
    ctx->pc = 0x1BC138u;
    // 0x1bc138: 0x2404006c
    ctx->pc = 0x1bc138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1bc13c: 0xc06bde0
    ctx->pc = 0x1BC13Cu;
    SET_GPR_U32(ctx, 31, 0x1BC144u);
    ctx->pc = 0x1BC140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC144u; }
    }
    if (ctx->pc != 0x1BC144u) { return; }
    ctx->pc = 0x1BC144u;
    // 0x1bc144: 0xc06e0a8
    ctx->pc = 0x1BC144u;
    SET_GPR_U32(ctx, 31, 0x1BC14Cu);
    ctx->pc = 0x1BC148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 88));
    ctx->pc = 0x1B82A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B82A0_0x1b82a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC14Cu; }
    }
    if (ctx->pc != 0x1BC14Cu) { return; }
    ctx->pc = 0x1BC14Cu;
    // 0x1bc14c: 0x1440001b
    ctx->pc = 0x1BC14Cu;
    {
        const bool branch_taken_0x1bc14c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bc14c) {
            ctx->pc = 0x1BC1BCu;
            goto label_1bc1bc;
        }
    }
    ctx->pc = 0x1BC154u;
    // 0x1bc154: 0x86030004
    ctx->pc = 0x1bc154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bc158: 0x10600018
    ctx->pc = 0x1BC158u;
    {
        const bool branch_taken_0x1bc158 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC15Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1bc158) {
            ctx->pc = 0x1BC1BCu;
            goto label_1bc1bc;
        }
    }
    ctx->pc = 0x1BC160u;
    // 0x1bc160: 0xc06bc78
    ctx->pc = 0x1BC160u;
    SET_GPR_U32(ctx, 31, 0x1BC168u);
    ctx->pc = 0x1BC164u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1AF1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1E0_0x1af1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC168u; }
    }
    if (ctx->pc != 0x1BC168u) { return; }
    ctx->pc = 0x1BC168u;
    // 0x1bc168: 0x8e020014
    ctx->pc = 0x1bc168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bc16c: 0x27a50022
    ctx->pc = 0x1bc16cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 34));
    // 0x1bc170: 0x27a40020
    ctx->pc = 0x1bc170u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bc174: 0x84420004
    ctx->pc = 0x1bc174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc178: 0xa7a20020
    ctx->pc = 0x1bc178u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bc17c: 0x8e020014
    ctx->pc = 0x1bc17cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bc180: 0x84420006
    ctx->pc = 0x1bc180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bc184: 0xa4a20000
    ctx->pc = 0x1bc184u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bc188: 0x8e030014
    ctx->pc = 0x1bc188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bc18c: 0x87a20020
    ctx->pc = 0x1bc18cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc190: 0x84630008
    ctx->pc = 0x1bc190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bc194: 0x431021
    ctx->pc = 0x1bc194u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc198: 0xa7a20024
    ctx->pc = 0x1bc198u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bc19c: 0x8e030014
    ctx->pc = 0x1bc19cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bc1a0: 0x84a20000
    ctx->pc = 0x1bc1a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc1a4: 0x8463000a
    ctx->pc = 0x1bc1a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1bc1a8: 0x431021
    ctx->pc = 0x1bc1a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc1ac: 0xa7a20026
    ctx->pc = 0x1bc1acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bc1b0: 0x8e02000c
    ctx->pc = 0x1bc1b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc1b4: 0xc06aed8
    ctx->pc = 0x1BC1B4u;
    SET_GPR_U32(ctx, 31, 0x1BC1BCu);
    ctx->pc = 0x1BC1B8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x1ABB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB60_0x1abb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC1BCu; }
    }
    if (ctx->pc != 0x1BC1BCu) { return; }
    ctx->pc = 0x1BC1BCu;
label_1bc1bc:
    // 0x1bc1bc: 0xdfbf0010
    ctx->pc = 0x1bc1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc1c0: 0x7bb00000
    ctx->pc = 0x1bc1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc1c4: 0x3e00008
    ctx->pc = 0x1BC1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC1C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC118u: goto label_1bc118;
            case 0x1BC1BCu: goto label_1bc1bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC1CCu;
    // 0x1bc1cc: 0x0
    ctx->pc = 0x1bc1ccu;
    // NOP
}
