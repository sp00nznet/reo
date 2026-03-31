#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B4820
// Address: 0x1b4820 - 0x1b49b0
void sub_001B4820_0x1b4820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b4820u;

    // 0x1b4820: 0x27bdff90
    ctx->pc = 0x1b4820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b4824: 0xffbf0060
    ctx->pc = 0x1b4824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b4828: 0x7fb50050
    ctx->pc = 0x1b4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b482c: 0x7fb40040
    ctx->pc = 0x1b482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b4830: 0x80a82d
    ctx->pc = 0x1b4830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4834: 0x7fb30030
    ctx->pc = 0x1b4834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b4838: 0xa0a02d
    ctx->pc = 0x1b4838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b483c: 0x7fb20020
    ctx->pc = 0x1b483cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b4840: 0xc0982d
    ctx->pc = 0x1b4840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4844: 0x7fb10010
    ctx->pc = 0x1b4844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4848: 0xe0902d
    ctx->pc = 0x1b4848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b484c: 0x7fb00000
    ctx->pc = 0x1b484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4850: 0x100882d
    ctx->pc = 0x1b4850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4854: 0x120802d
    ctx->pc = 0x1b4854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4858: 0x24040002
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b485c: 0xc06a5d4
    ctx->pc = 0x1B485Cu;
    SET_GPR_U32(ctx, 31, 0x1B4864u);
    ctx->pc = 0x1B4860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9750_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4864u; }
    }
    if (ctx->pc != 0x1B4864u) { return; }
    ctx->pc = 0x1B4864u;
    // 0x1b4864: 0x1040000c
    ctx->pc = 0x1B4864u;
    {
        const bool branch_taken_0x1b4864 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4868u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4864) {
            ctx->pc = 0x1B4898u;
            goto label_1b4898;
        }
    }
    ctx->pc = 0x1B486Cu;
    // 0x1b486c: 0x3c010032
    ctx->pc = 0x1b486cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4870: 0x902243c0
    ctx->pc = 0x1b4870u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17344)));
    // 0x1b4874: 0x10400007
    ctx->pc = 0x1B4874u;
    {
        const bool branch_taken_0x1b4874 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4878u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 21), 6));
        if (branch_taken_0x1b4874) {
            ctx->pc = 0x1B4894u;
            goto label_1b4894;
        }
    }
    ctx->pc = 0x1B487Cu;
    // 0x1b487c: 0x10200005
    ctx->pc = 0x1B487Cu;
    {
        const bool branch_taken_0x1b487c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b487c) {
            ctx->pc = 0x1B4894u;
            goto label_1b4894;
        }
    }
    ctx->pc = 0x1B4884u;
    // 0x1b4884: 0xc1b7b88
    ctx->pc = 0x1B4884u;
    SET_GPR_U32(ctx, 31, 0x1B488Cu);
    ctx->pc = 0x6DEE20u;
    {
        auto targetFn = runtime->lookupFunction(0x6DEE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B488Cu; }
        if (ctx->pc != 0x1B488Cu) { return; }
    }
    ctx->pc = 0x1B488Cu;
    // 0x1b488c: 0x14400009
    ctx->pc = 0x1B488Cu;
    {
        const bool branch_taken_0x1b488c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b488c) {
            ctx->pc = 0x1B48B4u;
            goto label_1b48b4;
        }
    }
    ctx->pc = 0x1B4894u;
label_1b4894:
    // 0x1b4894: 0x2a0202d
    ctx->pc = 0x1b4894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b4898:
    // 0x1b4898: 0x280282d
    ctx->pc = 0x1b4898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b489c: 0x260302d
    ctx->pc = 0x1b489cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48a0: 0x240382d
    ctx->pc = 0x1b48a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48a4: 0x220402d
    ctx->pc = 0x1b48a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48a8: 0x200482d
    ctx->pc = 0x1b48a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48ac: 0xc06d1b8
    ctx->pc = 0x1B48ACu;
    SET_GPR_U32(ctx, 31, 0x1B48B4u);
    ctx->pc = 0x1B48B0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B46E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B46E0_0x1b46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B48B4u; }
    }
    if (ctx->pc != 0x1B48B4u) { return; }
    ctx->pc = 0x1B48B4u;
label_1b48b4:
    // 0x1b48b4: 0xdfbf0060
    ctx->pc = 0x1b48b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b48b8: 0x7bb50050
    ctx->pc = 0x1b48b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b48bc: 0x7bb40040
    ctx->pc = 0x1b48bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b48c0: 0x7bb30030
    ctx->pc = 0x1b48c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b48c4: 0x7bb20020
    ctx->pc = 0x1b48c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b48c8: 0x7bb10010
    ctx->pc = 0x1b48c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b48cc: 0x7bb00000
    ctx->pc = 0x1b48ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b48d0: 0x3e00008
    ctx->pc = 0x1B48D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B48D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4894u: goto label_1b4894;
            case 0x1B4898u: goto label_1b4898;
            case 0x1B48B4u: goto label_1b48b4;
            case 0x1B492Cu: goto label_1b492c;
            case 0x1B495Cu: goto label_1b495c;
            case 0x1B4988u: goto label_1b4988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B48D8u;
    // 0x1b48d8: 0x0
    ctx->pc = 0x1b48d8u;
    // NOP
    // 0x1b48dc: 0x0
    ctx->pc = 0x1b48dcu;
    // NOP
    // 0x1b48e0: 0x27bdffe0
    ctx->pc = 0x1b48e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b48e4: 0xa0102d
    ctx->pc = 0x1b48e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48e8: 0xffbf0010
    ctx->pc = 0x1b48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b48ec: 0xc0502d
    ctx->pc = 0x1b48ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48f0: 0x7fb00000
    ctx->pc = 0x1b48f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b48f4: 0x40302d
    ctx->pc = 0x1b48f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48f8: 0xe0182d
    ctx->pc = 0x1b48f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48fc: 0x80282d
    ctx->pc = 0x1b48fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4900: 0x100102d
    ctx->pc = 0x1b4900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4904: 0x140382d
    ctx->pc = 0x1b4904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4908: 0x120802d
    ctx->pc = 0x1b4908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b490c: 0x60402d
    ctx->pc = 0x1b490cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4910: 0x24040001
    ctx->pc = 0x1b4910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4914: 0x40482d
    ctx->pc = 0x1b4914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4918: 0xc06d1b8
    ctx->pc = 0x1B4918u;
    SET_GPR_U32(ctx, 31, 0x1B4920u);
    ctx->pc = 0x1B491Cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B46E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B46E0_0x1b46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4920u; }
    }
    if (ctx->pc != 0x1B4920u) { return; }
    ctx->pc = 0x1B4920u;
    // 0x1b4920: 0x10400002
    ctx->pc = 0x1B4920u;
    {
        const bool branch_taken_0x1b4920 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b4920) {
            ctx->pc = 0x1B492Cu;
            goto label_1b492c;
        }
    }
    ctx->pc = 0x1B4928u;
    // 0x1b4928: 0xa0500000
    ctx->pc = 0x1b4928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_1b492c:
    // 0x1b492c: 0xdfbf0010
    ctx->pc = 0x1b492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4930: 0x7bb00000
    ctx->pc = 0x1b4930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4934: 0x3e00008
    ctx->pc = 0x1B4934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4894u: goto label_1b4894;
            case 0x1B4898u: goto label_1b4898;
            case 0x1B48B4u: goto label_1b48b4;
            case 0x1B492Cu: goto label_1b492c;
            case 0x1B495Cu: goto label_1b495c;
            case 0x1B4988u: goto label_1b4988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B493Cu;
    // 0x1b493c: 0x0
    ctx->pc = 0x1b493cu;
    // NOP
    // 0x1b4940: 0x27bdffd0
    ctx->pc = 0x1b4940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4944: 0xffbf0020
    ctx->pc = 0x1b4944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b4948: 0x7fb10010
    ctx->pc = 0x1b4948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b494c: 0x7fb00000
    ctx->pc = 0x1b494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4950: 0x3c110031
    ctx->pc = 0x1b4950u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    // 0x1b4954: 0x263151d0
    ctx->pc = 0x1b4954u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20944));
    // 0x1b4958: 0x802d
    ctx->pc = 0x1b4958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b495c:
    // 0x1b495c: 0x86230000
    ctx->pc = 0x1b495cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4960: 0x10600009
    ctx->pc = 0x1B4960u;
    {
        const bool branch_taken_0x1b4960 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b4960) {
            ctx->pc = 0x1B4988u;
            goto label_1b4988;
        }
    }
    ctx->pc = 0x1B4968u;
    // 0x1b4968: 0x86230006
    ctx->pc = 0x1b4968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1b496c: 0x10600006
    ctx->pc = 0x1B496Cu;
    {
        const bool branch_taken_0x1b496c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b496c) {
            ctx->pc = 0x1B4988u;
            goto label_1b4988;
        }
    }
    ctx->pc = 0x1B4974u;
    // 0x1b4974: 0x9223000b
    ctx->pc = 0x1b4974u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x1b4978: 0x10600003
    ctx->pc = 0x1B4978u;
    {
        const bool branch_taken_0x1b4978 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B497Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 12));
        if (branch_taken_0x1b4978) {
            ctx->pc = 0x1B4988u;
            goto label_1b4988;
        }
    }
    ctx->pc = 0x1B4980u;
    // 0x1b4980: 0xc06d26c
    ctx->pc = 0x1B4980u;
    SET_GPR_U32(ctx, 31, 0x1B4988u);
    ctx->pc = 0x1B49B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B49B0_0x1b49b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4988u; }
    }
    if (ctx->pc != 0x1B4988u) { return; }
    ctx->pc = 0x1B4988u;
label_1b4988:
    // 0x1b4988: 0x26100001
    ctx->pc = 0x1b4988u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b498c: 0x2a030020
    ctx->pc = 0x1b498cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 32));
    // 0x1b4990: 0x1460fff2
    ctx->pc = 0x1B4990u;
    {
        const bool branch_taken_0x1b4990 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B4994u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 140));
        if (branch_taken_0x1b4990) {
            ctx->pc = 0x1B495Cu;
            goto label_1b495c;
        }
    }
    ctx->pc = 0x1B4998u;
    // 0x1b4998: 0xdfbf0020
    ctx->pc = 0x1b4998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b499c: 0x7bb10010
    ctx->pc = 0x1b499cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b49a0: 0x7bb00000
    ctx->pc = 0x1b49a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b49a4: 0x3e00008
    ctx->pc = 0x1B49A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B49A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4894u: goto label_1b4894;
            case 0x1B4898u: goto label_1b4898;
            case 0x1B48B4u: goto label_1b48b4;
            case 0x1B492Cu: goto label_1b492c;
            case 0x1B495Cu: goto label_1b495c;
            case 0x1B4988u: goto label_1b4988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B49ACu;
    // 0x1b49ac: 0x0
    ctx->pc = 0x1b49acu;
    // NOP
}
