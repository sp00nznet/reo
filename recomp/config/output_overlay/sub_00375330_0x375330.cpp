#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00375330
// Address: 0x375330 - 0x3753d0
void sub_00375330_0x375330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x375330u;

    // 0x375330: 0x27bdffe0
    ctx->pc = 0x375330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375334: 0xffbf0010
    ctx->pc = 0x375334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375338: 0x7fb00000
    ctx->pc = 0x375338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37533c: 0x80802d
    ctx->pc = 0x37533cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375340: 0x1200001d
    ctx->pc = 0x375340u;
    {
        const bool branch_taken_0x375340 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x375340) {
            ctx->pc = 0x3753B8u;
            goto label_3753b8;
        }
    }
    ctx->pc = 0x375348u;
    // 0x375348: 0x82030000
    ctx->pc = 0x375348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37534c: 0x1060001a
    ctx->pc = 0x37534Cu;
    {
        const bool branch_taken_0x37534c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x37534c) {
            ctx->pc = 0x3753B8u;
            goto label_3753b8;
        }
    }
    ctx->pc = 0x375354u;
    // 0x375354: 0x82030001
    ctx->pc = 0x375354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x375358: 0x10600017
    ctx->pc = 0x375358u;
    {
        const bool branch_taken_0x375358 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x375358) {
            ctx->pc = 0x3753B8u;
            goto label_3753b8;
        }
    }
    ctx->pc = 0x375360u;
    // 0x375360: 0x92030553
    ctx->pc = 0x375360u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1363)));
    // 0x375364: 0x10600014
    ctx->pc = 0x375364u;
    {
        const bool branch_taken_0x375364 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x375368u;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x375364) {
            ctx->pc = 0x3753B8u;
            goto label_3753b8;
        }
    }
    ctx->pc = 0x37536Cu;
    // 0x37536c: 0x90239d12
    ctx->pc = 0x37536cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941970)));
    // 0x375370: 0x14600011
    ctx->pc = 0x375370u;
    {
        const bool branch_taken_0x375370 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x375370) {
            ctx->pc = 0x3753B8u;
            goto label_3753b8;
        }
    }
    ctx->pc = 0x375378u;
    // 0x375378: 0x92050003
    ctx->pc = 0x375378u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x37537c: 0x3c030038
    ctx->pc = 0x37537cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x375380: 0x9202054d
    ctx->pc = 0x375380u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1357)));
    // 0x375384: 0x24637e90
    ctx->pc = 0x375384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32400));
    // 0x375388: 0x528c0
    ctx->pc = 0x375388u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x37538c: 0x651821
    ctx->pc = 0x37538cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x375390: 0x21100
    ctx->pc = 0x375390u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x375394: 0x8c630000
    ctx->pc = 0x375394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x375398: 0x431021
    ctx->pc = 0x375398u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37539c: 0x8045000c
    ctx->pc = 0x37539cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3753a0: 0xc17021c
    ctx->pc = 0x3753A0u;
    SET_GPR_U32(ctx, 31, 0x3753A8u);
    ctx->pc = 0x3753A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 56));
    ctx->pc = 0x5C0870u;
    {
        auto targetFn = runtime->lookupFunction(0x5C0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3753A8u; }
        if (ctx->pc != 0x3753A8u) { return; }
    }
    ctx->pc = 0x3753A8u;
    // 0x3753a8: 0x14400003
    ctx->pc = 0x3753A8u;
    {
        const bool branch_taken_0x3753a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3753ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3753a8) {
            ctx->pc = 0x3753B8u;
            goto label_3753b8;
        }
    }
    ctx->pc = 0x3753B0u;
    // 0x3753b0: 0xc1aca38
    ctx->pc = 0x3753B0u;
    SET_GPR_U32(ctx, 31, 0x3753B8u);
    ctx->pc = 0x6B28E0u;
    {
        auto targetFn = runtime->lookupFunction(0x6B28E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3753B8u; }
        if (ctx->pc != 0x3753B8u) { return; }
    }
    ctx->pc = 0x3753B8u;
label_3753b8:
    // 0x3753b8: 0xdfbf0010
    ctx->pc = 0x3753b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3753bc: 0x7bb00000
    ctx->pc = 0x3753bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3753c0: 0x3e00008
    ctx->pc = 0x3753C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3753C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3753B8u: goto label_3753b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3753C8u;
    // 0x3753c8: 0x0
    ctx->pc = 0x3753c8u;
    // NOP
    // 0x3753cc: 0x0
    ctx->pc = 0x3753ccu;
    // NOP
}
