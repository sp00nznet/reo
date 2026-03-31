#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001682E0
// Address: 0x1682e0 - 0x168378
void sub_001682E0_0x1682e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1682e0u;

    // 0x1682e0: 0x27bdffe0
    ctx->pc = 0x1682e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1682e4: 0xffb00000
    ctx->pc = 0x1682e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1682e8: 0xc0802d
    ctx->pc = 0x1682e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682ec: 0xffb10008
    ctx->pc = 0x1682ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1682f0: 0x80882d
    ctx->pc = 0x1682f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682f4: 0xffb20010
    ctx->pc = 0x1682f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1682f8: 0xa0902d
    ctx->pc = 0x1682f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682fc: 0xffbf0018
    ctx->pc = 0x1682fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x168300: 0xc05a0de
    ctx->pc = 0x168300u;
    SET_GPR_U32(ctx, 31, 0x168308u);
    ctx->pc = 0x168304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168378u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168378_0x168378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168308u; }
    }
    if (ctx->pc != 0x168308u) { return; }
    ctx->pc = 0x168308u;
    // 0x168308: 0x220202d
    ctx->pc = 0x168308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16830c: 0x240282d
    ctx->pc = 0x16830cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168310: 0xc05a0f6
    ctx->pc = 0x168310u;
    SET_GPR_U32(ctx, 31, 0x168318u);
    ctx->pc = 0x168314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1683D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001683D8_0x1683d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168318u; }
    }
    if (ctx->pc != 0x168318u) { return; }
    ctx->pc = 0x168318u;
    // 0x168318: 0x220202d
    ctx->pc = 0x168318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16831c: 0x240282d
    ctx->pc = 0x16831cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168320: 0x1440000f
    ctx->pc = 0x168320u;
    {
        const bool branch_taken_0x168320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168324u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168320) {
            ctx->pc = 0x168360u;
            goto label_168360;
        }
    }
    ctx->pc = 0x168328u;
    // 0x168328: 0xc05a370
    ctx->pc = 0x168328u;
    SET_GPR_U32(ctx, 31, 0x168330u);
    ctx->pc = 0x168DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168DC0_0x168dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168330u; }
    }
    if (ctx->pc != 0x168330u) { return; }
    ctx->pc = 0x168330u;
    // 0x168330: 0x5440000c
    ctx->pc = 0x168330u;
    {
        const bool branch_taken_0x168330 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x168330) {
            ctx->pc = 0x168334u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x168364u;
            goto label_168364;
        }
    }
    ctx->pc = 0x168338u;
    // 0x168338: 0x220202d
    ctx->pc = 0x168338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16833c: 0x240282d
    ctx->pc = 0x16833cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168340: 0xc05a242
    ctx->pc = 0x168340u;
    SET_GPR_U32(ctx, 31, 0x168348u);
    ctx->pc = 0x168344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168908u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168908_0x168908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168348u; }
    }
    if (ctx->pc != 0x168348u) { return; }
    ctx->pc = 0x168348u;
    // 0x168348: 0x220202d
    ctx->pc = 0x168348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16834c: 0x240282d
    ctx->pc = 0x16834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168350: 0x14400003
    ctx->pc = 0x168350u;
    {
        const bool branch_taken_0x168350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168354u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168350) {
            ctx->pc = 0x168360u;
            goto label_168360;
        }
    }
    ctx->pc = 0x168358u;
    // 0x168358: 0xc05a2ea
    ctx->pc = 0x168358u;
    SET_GPR_U32(ctx, 31, 0x168360u);
    ctx->pc = 0x168BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168BA8_0x168ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168360u; }
    }
    if (ctx->pc != 0x168360u) { return; }
    ctx->pc = 0x168360u;
label_168360:
    // 0x168360: 0xdfb00000
    ctx->pc = 0x168360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168364:
    // 0x168364: 0xdfb10008
    ctx->pc = 0x168364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168368: 0xdfb20010
    ctx->pc = 0x168368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16836c: 0xdfbf0018
    ctx->pc = 0x16836cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168370: 0x3e00008
    ctx->pc = 0x168370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168374u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168360u: goto label_168360;
            case 0x168364u: goto label_168364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168378u;
}
