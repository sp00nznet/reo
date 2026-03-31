#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00181650
// Address: 0x181650 - 0x181708
void sub_00181650_0x181650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x181650u;

    // 0x181650: 0x3c030023
    ctx->pc = 0x181650u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x181654: 0x27bdffe0
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181658: 0x8c66fa10
    ctx->pc = 0x181658u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x18165c: 0x3c028101
    ctx->pc = 0x18165cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181660: 0xffb10008
    ctx->pc = 0x181660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181664: 0xa0882d
    ctx->pc = 0x181664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181668: 0xffb20010
    ctx->pc = 0x181668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18166c: 0x80902d
    ctx->pc = 0x18166cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181670: 0xffb00000
    ctx->pc = 0x181670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181674: 0x34428001
    ctx->pc = 0x181674u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x181678: 0x10c0001d
    ctx->pc = 0x181678u;
    {
        const bool branch_taken_0x181678 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x18167Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x181678) {
            ctx->pc = 0x1816F0u;
            goto label_1816f0;
        }
    }
    ctx->pc = 0x181680u;
    // 0x181680: 0xc061e90
    ctx->pc = 0x181680u;
    SET_GPR_U32(ctx, 31, 0x181688u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181688u; }
    }
    if (ctx->pc != 0x181688u) { return; }
    ctx->pc = 0x181688u;
    // 0x181688: 0x3c030028
    ctx->pc = 0x181688u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x18168c: 0x14400004
    ctx->pc = 0x18168Cu;
    {
        const bool branch_taken_0x18168c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181690u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x18168c) {
            ctx->pc = 0x1816A0u;
            goto label_1816a0;
        }
    }
    ctx->pc = 0x181694u;
    // 0x181694: 0x3c028101
    ctx->pc = 0x181694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181698: 0x10000015
    ctx->pc = 0x181698u;
    {
        const bool branch_taken_0x181698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18169Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x181698) {
            ctx->pc = 0x1816F0u;
            goto label_1816f0;
        }
    }
    ctx->pc = 0x1816A0u;
label_1816a0:
    // 0x1816a0: 0x8e030004
    ctx->pc = 0x1816a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1816a4: 0x3c028101
    ctx->pc = 0x1816a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1816a8: 0x14600011
    ctx->pc = 0x1816A8u;
    {
        const bool branch_taken_0x1816a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1816ACu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x1816a8) {
            ctx->pc = 0x1816F0u;
            goto label_1816f0;
        }
    }
    ctx->pc = 0x1816B0u;
    // 0x1816b0: 0xc042c56
    ctx->pc = 0x1816B0u;
    SET_GPR_U32(ctx, 31, 0x1816B8u);
    ctx->pc = 0x1816B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816B8u; }
    }
    if (ctx->pc != 0x1816B8u) { return; }
    ctx->pc = 0x1816B8u;
    // 0x1816b8: 0x220282d
    ctx->pc = 0x1816b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816bc: 0x2c430080
    ctx->pc = 0x1816bcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x1816c0: 0x3c028101
    ctx->pc = 0x1816c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1816c4: 0x2604041c
    ctx->pc = 0x1816c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
    // 0x1816c8: 0x10600009
    ctx->pc = 0x1816C8u;
    {
        const bool branch_taken_0x1816c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1816CCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x1816c8) {
            ctx->pc = 0x1816F0u;
            goto label_1816f0;
        }
    }
    ctx->pc = 0x1816D0u;
    // 0x1816d0: 0x2402000b
    ctx->pc = 0x1816d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1816d4: 0xae120000
    ctx->pc = 0x1816d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1816d8: 0xc042bf0
    ctx->pc = 0x1816D8u;
    SET_GPR_U32(ctx, 31, 0x1816E0u);
    ctx->pc = 0x1816DCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816E0u; }
    }
    if (ctx->pc != 0x1816E0u) { return; }
    ctx->pc = 0x1816E0u;
    // 0x1816e0: 0x34038427
    ctx->pc = 0x1816e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 33831));
    // 0x1816e4: 0xc062228
    ctx->pc = 0x1816E4u;
    SET_GPR_U32(ctx, 31, 0x1816ECu);
    ctx->pc = 0x1816E8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816ECu; }
    }
    if (ctx->pc != 0x1816ECu) { return; }
    ctx->pc = 0x1816ECu;
    // 0x1816ec: 0x102d
    ctx->pc = 0x1816ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1816f0:
    // 0x1816f0: 0xdfb00000
    ctx->pc = 0x1816f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1816f4: 0xdfb10008
    ctx->pc = 0x1816f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1816f8: 0xdfb20010
    ctx->pc = 0x1816f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1816fc: 0xdfbf0018
    ctx->pc = 0x1816fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181700: 0x3e00008
    ctx->pc = 0x181700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1816A0u: goto label_1816a0;
            case 0x1816F0u: goto label_1816f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181708u;
}
