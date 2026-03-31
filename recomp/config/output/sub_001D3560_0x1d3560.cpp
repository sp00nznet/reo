#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D3560
// Address: 0x1d3560 - 0x1d3790
void sub_001D3560_0x1d3560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d3560u;

    // 0x1d3560: 0x27bdffc0
    ctx->pc = 0x1d3560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d3564: 0xffbf0030
    ctx->pc = 0x1d3564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d3568: 0x7fb20020
    ctx->pc = 0x1d3568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d356c: 0x7fb10010
    ctx->pc = 0x1d356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3570: 0x7fb00000
    ctx->pc = 0x1d3570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3574: 0x8c900004
    ctx->pc = 0x1d3574u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d3578: 0x1200000f
    ctx->pc = 0x1D3578u;
    {
        const bool branch_taken_0x1d3578 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D357Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d3578) {
            ctx->pc = 0x1D35B8u;
            goto label_1d35b8;
        }
    }
    ctx->pc = 0x1D3580u;
    // 0x1d3580: 0x10000006
    ctx->pc = 0x1D3580u;
    {
        const bool branch_taken_0x1d3580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3584u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d3580) {
            ctx->pc = 0x1D359Cu;
            goto label_1d359c;
        }
    }
    ctx->pc = 0x1D3588u;
label_1d3588:
    // 0x1d3588: 0xc06c498
    ctx->pc = 0x1D3588u;
    SET_GPR_U32(ctx, 31, 0x1D3590u);
    ctx->pc = 0x1B1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1260_0x1b1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3590u; }
    }
    if (ctx->pc != 0x1D3590u) { return; }
    ctx->pc = 0x1D3590u;
    // 0x1d3590: 0xae020000
    ctx->pc = 0x1d3590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d3594: 0x26310001
    ctx->pc = 0x1d3594u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3598: 0x26100004
    ctx->pc = 0x1d3598u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_1d359c:
    // 0x1d359c: 0x96420816
    ctx->pc = 0x1d359cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2070)));
    // 0x1d35a0: 0x222102a
    ctx->pc = 0x1d35a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1d35a4: 0x1440fff8
    ctx->pc = 0x1D35A4u;
    {
        const bool branch_taken_0x1d35a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d35a4) {
            ctx->pc = 0x1D3588u;
            goto label_1d3588;
        }
    }
    ctx->pc = 0x1D35ACu;
    // 0x1d35ac: 0x8e45080c
    ctx->pc = 0x1d35acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    // 0x1d35b0: 0xc064d60
    ctx->pc = 0x1D35B0u;
    SET_GPR_U32(ctx, 31, 0x1D35B8u);
    ctx->pc = 0x1D35B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x193580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193580_0x193580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35B8u; }
    }
    if (ctx->pc != 0x1D35B8u) { return; }
    ctx->pc = 0x1D35B8u;
label_1d35b8:
    // 0x1d35b8: 0xdfbf0030
    ctx->pc = 0x1d35b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d35bc: 0x7bb20020
    ctx->pc = 0x1d35bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d35c0: 0x7bb10010
    ctx->pc = 0x1d35c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d35c4: 0x7bb00000
    ctx->pc = 0x1d35c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35c8: 0x3e00008
    ctx->pc = 0x1D35C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3588u: goto label_1d3588;
            case 0x1D359Cu: goto label_1d359c;
            case 0x1D35B8u: goto label_1d35b8;
            case 0x1D3620u: goto label_1d3620;
            case 0x1D3634u: goto label_1d3634;
            case 0x1D3644u: goto label_1d3644;
            case 0x1D36F4u: goto label_1d36f4;
            case 0x1D376Cu: goto label_1d376c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D35D0u;
    // 0x1d35d0: 0x27bdffa0
    ctx->pc = 0x1d35d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d35d4: 0x3c03004c
    ctx->pc = 0x1d35d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)76 << 16));
    // 0x1d35d8: 0xffbf0050
    ctx->pc = 0x1d35d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d35dc: 0x30a700ff
    ctx->pc = 0x1d35dcu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 5), 255));
    // 0x1d35e0: 0x7fb40040
    ctx->pc = 0x1d35e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d35e4: 0x2463aeb0
    ctx->pc = 0x1d35e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294946480));
    // 0x1d35e8: 0x7fb30030
    ctx->pc = 0x1d35e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d35ec: 0x674021
    ctx->pc = 0x1d35ecu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d35f0: 0x7fb20020
    ctx->pc = 0x1d35f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d35f4: 0x240300ff
    ctx->pc = 0x1d35f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d35f8: 0x7fb10010
    ctx->pc = 0x1d35f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d35fc: 0x7fb00000
    ctx->pc = 0x1d35fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3600: 0x91040000
    ctx->pc = 0x1d3600u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d3604: 0x14830059
    ctx->pc = 0x1D3604u;
    {
        const bool branch_taken_0x1d3604 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D3608u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d3604) {
            ctx->pc = 0x1D376Cu;
            goto label_1d376c;
        }
    }
    ctx->pc = 0x1D360Cu;
    // 0x1d360c: 0x3c04004c
    ctx->pc = 0x1d360cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1d3610: 0x982d
    ctx->pc = 0x1d3610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3614: 0x24060c84
    ctx->pc = 0x1d3614u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3204));
    // 0x1d3618: 0x10000006
    ctx->pc = 0x1D3618u;
    {
        const bool branch_taken_0x1d3618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D361Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962224));
        if (branch_taken_0x1d3618) {
            ctx->pc = 0x1D3634u;
            goto label_1d3634;
        }
    }
    ctx->pc = 0x1D3620u;
label_1d3620:
    // 0x1d3620: 0x831821
    ctx->pc = 0x1d3620u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d3624: 0x90630001
    ctx->pc = 0x1d3624u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1d3628: 0x10600006
    ctx->pc = 0x1D3628u;
    {
        const bool branch_taken_0x1d3628 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D362Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1d3628) {
            ctx->pc = 0x1D3644u;
            goto label_1d3644;
        }
    }
    ctx->pc = 0x1D3630u;
    // 0x1d3630: 0x26730001
    ctx->pc = 0x1d3630u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d3634:
    // 0x1d3634: 0x2a630006
    ctx->pc = 0x1d3634u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 6));
    // 0x1d3638: 0x1460fff9
    ctx->pc = 0x1D3638u;
    {
        const bool branch_taken_0x1d3638 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D363Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
        if (branch_taken_0x1d3638) {
            ctx->pc = 0x1D3620u;
            goto label_1d3620;
        }
    }
    ctx->pc = 0x1D3640u;
    // 0x1d3640: 0x24030006
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_1d3644:
    // 0x1d3644: 0x12630049
    ctx->pc = 0x1D3644u;
    {
        const bool branch_taken_0x1d3644 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d3644) {
            ctx->pc = 0x1D376Cu;
            goto label_1d376c;
        }
    }
    ctx->pc = 0x1D364Cu;
    // 0x1d364c: 0x3c020038
    ctx->pc = 0x1d364cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x1d3650: 0x720c0
    ctx->pc = 0x1d3650u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 3));
    // 0x1d3654: 0x24427e90
    ctx->pc = 0x1d3654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32400));
    // 0x1d3658: 0x24030c84
    ctx->pc = 0x1d3658u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3204));
    // 0x1d365c: 0x442021
    ctx->pc = 0x1d365cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3660: 0xa1130000
    ctx->pc = 0x1d3660u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1d3664: 0x8c910000
    ctx->pc = 0x1d3664u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3668: 0x3c02004c
    ctx->pc = 0x1d3668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1d366c: 0x2631818
    ctx->pc = 0x1d366cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1d3670: 0x2442ec30
    ctx->pc = 0x1d3670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962224));
    // 0x1d3674: 0x30a500ff
    ctx->pc = 0x1d3674u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x1d3678: 0x328600ff
    ctx->pc = 0x1d3678u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 20), 255));
    // 0x1d367c: 0x3267ffff
    ctx->pc = 0x1d367cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 19), 65535));
    // 0x1d3680: 0x438021
    ctx->pc = 0x1d3680u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3684: 0xc073e58
    ctx->pc = 0x1D3684u;
    SET_GPR_U32(ctx, 31, 0x1D368Cu);
    ctx->pc = 0x1D3688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CF960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF960_0x1cf960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D368Cu; }
    }
    if (ctx->pc != 0x1D368Cu) { return; }
    ctx->pc = 0x1D368Cu;
    // 0x1d368c: 0x24030001
    ctx->pc = 0x1d368cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3690: 0x10430018
    ctx->pc = 0x1D3690u;
    {
        const bool branch_taken_0x1d3690 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1D3694u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), 255));
        if (branch_taken_0x1d3690) {
            ctx->pc = 0x1D36F4u;
            goto label_1d36f4;
        }
    }
    ctx->pc = 0x1D3698u;
    // 0x1d3698: 0x328200ff
    ctx->pc = 0x1d3698u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 255));
    // 0x1d369c: 0x3c030039
    ctx->pc = 0x1d369cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)57 << 16));
    // 0x1d36a0: 0x21100
    ctx->pc = 0x1d36a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d36a4: 0x3c010032
    ctx->pc = 0x1d36a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d36a8: 0x512021
    ctx->pc = 0x1d36a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d36ac: 0x8c32440c
    ctx->pc = 0x1d36acu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1d36b0: 0x90840002
    ctx->pc = 0x1d36b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d36b4: 0x3c020002
    ctx->pc = 0x1d36b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1d36b8: 0x34460001
    ctx->pc = 0x1d36b8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 1));
    // 0x1d36bc: 0x246389e0
    ctx->pc = 0x1d36bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937056));
    // 0x1d36c0: 0x382d
    ctx->pc = 0x1d36c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36c4: 0x41080
    ctx->pc = 0x1d36c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d36c8: 0x621021
    ctx->pc = 0x1d36c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d36cc: 0x8c440000
    ctx->pc = 0x1d36ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d36d0: 0xc07323c
    ctx->pc = 0x1D36D0u;
    SET_GPR_U32(ctx, 31, 0x1D36D8u);
    ctx->pc = 0x1D36D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36D8u; }
    }
    if (ctx->pc != 0x1D36D8u) { return; }
    ctx->pc = 0x1D36D8u;
    // 0x1d36d8: 0x240202d
    ctx->pc = 0x1d36d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36dc: 0x200282d
    ctx->pc = 0x1d36dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36e0: 0x40302d
    ctx->pc = 0x1d36e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36e4: 0x240700c8
    ctx->pc = 0x1d36e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 200));
    // 0x1d36e8: 0xc074658
    ctx->pc = 0x1D36E8u;
    SET_GPR_U32(ctx, 31, 0x1D36F0u);
    ctx->pc = 0x1D36ECu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D1960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1960_0x1d1960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36F0u; }
    }
    if (ctx->pc != 0x1D36F0u) { return; }
    ctx->pc = 0x1D36F0u;
    // 0x1d36f0: 0x328300ff
    ctx->pc = 0x1d36f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), 255));
label_1d36f4:
    // 0x1d36f4: 0x3c010032
    ctx->pc = 0x1d36f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1d36f8: 0x31900
    ctx->pc = 0x1d36f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d36fc: 0x8c30440c
    ctx->pc = 0x1d36fcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1d3700: 0x711821
    ctx->pc = 0x1d3700u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d3704: 0x90630002
    ctx->pc = 0x1d3704u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d3708: 0x28610032
    ctx->pc = 0x1d3708u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 50));
    // 0x1d370c: 0x10200017
    ctx->pc = 0x1D370Cu;
    {
        const bool branch_taken_0x1d370c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d370c) {
            ctx->pc = 0x1D376Cu;
            goto label_1d376c;
        }
    }
    ctx->pc = 0x1D3714u;
    // 0x1d3714: 0x3c020039
    ctx->pc = 0x1d3714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x1d3718: 0x31880
    ctx->pc = 0x1d3718u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d371c: 0x24428aa0
    ctx->pc = 0x1d371cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937248));
    // 0x1d3720: 0x200282d
    ctx->pc = 0x1d3720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3724: 0x431021
    ctx->pc = 0x1d3724u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3728: 0x24060001
    ctx->pc = 0x1d3728u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d372c: 0x8c440000
    ctx->pc = 0x1d372cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3730: 0xc07323c
    ctx->pc = 0x1D3730u;
    SET_GPR_U32(ctx, 31, 0x1D3738u);
    ctx->pc = 0x1D3734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3738u; }
    }
    if (ctx->pc != 0x1D3738u) { return; }
    ctx->pc = 0x1D3738u;
    // 0x1d3738: 0x40302d
    ctx->pc = 0x1d3738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d373c: 0x18c0000b
    ctx->pc = 0x1D373Cu;
    {
        const bool branch_taken_0x1d373c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1d373c) {
            ctx->pc = 0x1D376Cu;
            goto label_1d376c;
        }
    }
    ctx->pc = 0x1D3744u;
    // 0x1d3744: 0x131180
    ctx->pc = 0x1d3744u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 6));
    // 0x1d3748: 0x200202d
    ctx->pc = 0x1d3748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d374c: 0x531823
    ctx->pc = 0x1d374cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3750: 0x31880
    ctx->pc = 0x1d3750u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d3754: 0x3c02004c
    ctx->pc = 0x1d3754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1d3758: 0x731823
    ctx->pc = 0x1d3758u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1d375c: 0x2442d4a0
    ctx->pc = 0x1d375cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956192));
    // 0x1d3760: 0x31880
    ctx->pc = 0x1d3760u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d3764: 0xc074664
    ctx->pc = 0x1D3764u;
    SET_GPR_U32(ctx, 31, 0x1D376Cu);
    ctx->pc = 0x1D3768u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1D1990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1990_0x1d1990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D376Cu; }
    }
    if (ctx->pc != 0x1D376Cu) { return; }
    ctx->pc = 0x1D376Cu;
label_1d376c:
    // 0x1d376c: 0xdfbf0050
    ctx->pc = 0x1d376cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3770: 0x7bb40040
    ctx->pc = 0x1d3770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3774: 0x7bb30030
    ctx->pc = 0x1d3774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3778: 0x7bb20020
    ctx->pc = 0x1d3778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d377c: 0x7bb10010
    ctx->pc = 0x1d377cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3780: 0x7bb00000
    ctx->pc = 0x1d3780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3784: 0x3e00008
    ctx->pc = 0x1D3784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3588u: goto label_1d3588;
            case 0x1D359Cu: goto label_1d359c;
            case 0x1D35B8u: goto label_1d35b8;
            case 0x1D3620u: goto label_1d3620;
            case 0x1D3634u: goto label_1d3634;
            case 0x1D3644u: goto label_1d3644;
            case 0x1D36F4u: goto label_1d36f4;
            case 0x1D376Cu: goto label_1d376c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D378Cu;
    // 0x1d378c: 0x0
    ctx->pc = 0x1d378cu;
    // NOP
}
