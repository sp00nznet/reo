#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00375550
// Address: 0x375550 - 0x375650
void sub_00375550_0x375550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x375550u;

    // 0x375550: 0x27bdffd0
    ctx->pc = 0x375550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x375554: 0x3c01004c
    ctx->pc = 0x375554u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x375558: 0xffbf0020
    ctx->pc = 0x375558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37555c: 0x7fb10010
    ctx->pc = 0x37555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x375560: 0x7fb00000
    ctx->pc = 0x375560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375564: 0x8023adf8
    ctx->pc = 0x375564u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946296)));
    // 0x375568: 0x10600031
    ctx->pc = 0x375568u;
    {
        const bool branch_taken_0x375568 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x37556Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x375568) {
            ctx->pc = 0x375630u;
            goto label_375630;
        }
    }
    ctx->pc = 0x375570u;
    // 0x375570: 0x9023aed0
    ctx->pc = 0x375570u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946512)));
    // 0x375574: 0x1460002e
    ctx->pc = 0x375574u;
    {
        const bool branch_taken_0x375574 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x375574) {
            ctx->pc = 0x375630u;
            goto label_375630;
        }
    }
    ctx->pc = 0x37557Cu;
    // 0x37557c: 0x3c010039
    ctx->pc = 0x37557cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x375580: 0x8c30edd0
    ctx->pc = 0x375580u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 4294962640)));
    // 0x375584: 0x12000009
    ctx->pc = 0x375584u;
    {
        const bool branch_taken_0x375584 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x375584) {
            ctx->pc = 0x3755ACu;
            goto label_3755ac;
        }
    }
    ctx->pc = 0x37558Cu;
    // 0x37558c: 0x882d
    ctx->pc = 0x37558cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375590:
    // 0x375590: 0xc0dd478
    ctx->pc = 0x375590u;
    SET_GPR_U32(ctx, 31, 0x375598u);
    ctx->pc = 0x375594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3751E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751E0_0x3751e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375598u; }
    }
    if (ctx->pc != 0x375598u) { return; }
    ctx->pc = 0x375598u;
    // 0x375598: 0x26310001
    ctx->pc = 0x375598u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x37559c: 0x261010e0
    ctx->pc = 0x37559cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4320));
    // 0x3755a0: 0x2a220008
    ctx->pc = 0x3755a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x3755a4: 0x1440fffa
    ctx->pc = 0x3755A4u;
    {
        const bool branch_taken_0x3755a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3755a4) {
            ctx->pc = 0x375590u;
            goto label_375590;
        }
    }
    ctx->pc = 0x3755ACu;
label_3755ac:
    // 0x3755ac: 0x3c01003b
    ctx->pc = 0x3755acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
    // 0x3755b0: 0x10000004
    ctx->pc = 0x3755B0u;
    {
        const bool branch_taken_0x3755b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3755B4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 23024)));
        if (branch_taken_0x3755b0) {
            ctx->pc = 0x3755C4u;
            goto label_3755c4;
        }
    }
    ctx->pc = 0x3755B8u;
label_3755b8:
    // 0x3755b8: 0xc0dd478
    ctx->pc = 0x3755B8u;
    SET_GPR_U32(ctx, 31, 0x3755C0u);
    ctx->pc = 0x3755BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3751E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751E0_0x3751e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755C0u; }
    }
    if (ctx->pc != 0x3755C0u) { return; }
    ctx->pc = 0x3755C0u;
    // 0x3755c0: 0x8e10001c
    ctx->pc = 0x3755c0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3755c4:
    // 0x3755c4: 0x0
    ctx->pc = 0x3755c4u;
    // NOP
    // 0x3755c8: 0x0
    ctx->pc = 0x3755c8u;
    // NOP
    // 0x3755cc: 0x1600fffa
    ctx->pc = 0x3755CCu;
    {
        const bool branch_taken_0x3755cc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x3755cc) {
            ctx->pc = 0x3755B8u;
            goto label_3755b8;
        }
    }
    ctx->pc = 0x3755D4u;
    // 0x3755d4: 0x3c01003b
    ctx->pc = 0x3755d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
    // 0x3755d8: 0x10000004
    ctx->pc = 0x3755D8u;
    {
        const bool branch_taken_0x3755d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3755DCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 22784)));
        if (branch_taken_0x3755d8) {
            ctx->pc = 0x3755ECu;
            goto label_3755ec;
        }
    }
    ctx->pc = 0x3755E0u;
label_3755e0:
    // 0x3755e0: 0xc0dd4cc
    ctx->pc = 0x3755E0u;
    SET_GPR_U32(ctx, 31, 0x3755E8u);
    ctx->pc = 0x3755E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x375330u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00375330_0x375330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3755E8u; }
    }
    if (ctx->pc != 0x3755E8u) { return; }
    ctx->pc = 0x3755E8u;
    // 0x3755e8: 0x8e10001c
    ctx->pc = 0x3755e8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3755ec:
    // 0x3755ec: 0x0
    ctx->pc = 0x3755ecu;
    // NOP
    // 0x3755f0: 0x0
    ctx->pc = 0x3755f0u;
    // NOP
    // 0x3755f4: 0x1600fffa
    ctx->pc = 0x3755F4u;
    {
        const bool branch_taken_0x3755f4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x3755f4) {
            ctx->pc = 0x3755E0u;
            goto label_3755e0;
        }
    }
    ctx->pc = 0x3755FCu;
    // 0x3755fc: 0xc0ddf08
    ctx->pc = 0x3755FCu;
    SET_GPR_U32(ctx, 31, 0x375604u);
    ctx->pc = 0x377C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00377C20_0x377c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375604u; }
    }
    if (ctx->pc != 0x375604u) { return; }
    ctx->pc = 0x375604u;
    // 0x375604: 0x3c010039
    ctx->pc = 0x375604u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x375608: 0x8c31edd0
    ctx->pc = 0x375608u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 1), 4294962640)));
    // 0x37560c: 0x12200008
    ctx->pc = 0x37560Cu;
    {
        const bool branch_taken_0x37560c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x375610u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37560c) {
            ctx->pc = 0x375630u;
            goto label_375630;
        }
    }
    ctx->pc = 0x375614u;
label_375614:
    // 0x375614: 0xc0dd4f4
    ctx->pc = 0x375614u;
    SET_GPR_U32(ctx, 31, 0x37561Cu);
    ctx->pc = 0x375618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3753D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003753D0_0x3753d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37561Cu; }
    }
    if (ctx->pc != 0x37561Cu) { return; }
    ctx->pc = 0x37561Cu;
    // 0x37561c: 0x26100001
    ctx->pc = 0x37561cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x375620: 0x263110e0
    ctx->pc = 0x375620u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4320));
    // 0x375624: 0x2a030008
    ctx->pc = 0x375624u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 8));
    // 0x375628: 0x1460fffa
    ctx->pc = 0x375628u;
    {
        const bool branch_taken_0x375628 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x375628) {
            ctx->pc = 0x375614u;
            goto label_375614;
        }
    }
    ctx->pc = 0x375630u;
label_375630:
    // 0x375630: 0xdfbf0020
    ctx->pc = 0x375630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375634: 0x7bb10010
    ctx->pc = 0x375634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375638: 0x7bb00000
    ctx->pc = 0x375638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37563c: 0x3e00008
    ctx->pc = 0x37563Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375640u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375590u: goto label_375590;
            case 0x3755ACu: goto label_3755ac;
            case 0x3755B8u: goto label_3755b8;
            case 0x3755C4u: goto label_3755c4;
            case 0x3755E0u: goto label_3755e0;
            case 0x3755ECu: goto label_3755ec;
            case 0x375614u: goto label_375614;
            case 0x375630u: goto label_375630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x375644u;
    // 0x375644: 0x0
    ctx->pc = 0x375644u;
    // NOP
    // 0x375648: 0x0
    ctx->pc = 0x375648u;
    // NOP
    // 0x37564c: 0x0
    ctx->pc = 0x37564cu;
    // NOP
}
