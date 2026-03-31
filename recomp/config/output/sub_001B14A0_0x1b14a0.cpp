#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B14A0
// Address: 0x1b14a0 - 0x1b1580
void sub_001B14A0_0x1b14a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b14a0u;

    // 0x1b14a0: 0x27bdffc0
    ctx->pc = 0x1b14a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b14a4: 0xffbf0030
    ctx->pc = 0x1b14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b14a8: 0x7fb20020
    ctx->pc = 0x1b14a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b14ac: 0x7fb10010
    ctx->pc = 0x1b14acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b14b0: 0x7fb00000
    ctx->pc = 0x1b14b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b14b4: 0x8c830808
    ctx->pc = 0x1b14b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2056)));
    // 0x1b14b8: 0x10600029
    ctx->pc = 0x1B14B8u;
    {
        const bool branch_taken_0x1b14b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B14BCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b14b8) {
            ctx->pc = 0x1B1560u;
            goto label_1b1560;
        }
    }
    ctx->pc = 0x1B14C0u;
    // 0x1b14c0: 0x10000018
    ctx->pc = 0x1B14C0u;
    {
        const bool branch_taken_0x1b14c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B14C4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b14c0) {
            ctx->pc = 0x1B1524u;
            goto label_1b1524;
        }
    }
    ctx->pc = 0x1B14C8u;
label_1b14c8:
    // 0x1b14c8: 0x8e430808
    ctx->pc = 0x1b14c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x1b14cc: 0x1110c0
    ctx->pc = 0x1b14ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
    // 0x1b14d0: 0x512021
    ctx->pc = 0x1b14d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b14d4: 0x42040
    ctx->pc = 0x1b14d4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b14d8: 0x2402ffff
    ctx->pc = 0x1b14d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b14dc: 0x912021
    ctx->pc = 0x1b14dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b14e0: 0x480c0
    ctx->pc = 0x1b14e0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b14e4: 0x701821
    ctx->pc = 0x1b14e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b14e8: 0x8c640000
    ctx->pc = 0x1b14e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b14ec: 0x1082000c
    ctx->pc = 0x1B14ECu;
    {
        const bool branch_taken_0x1b14ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1b14ec) {
            ctx->pc = 0x1B1520u;
            goto label_1b1520;
        }
    }
    ctx->pc = 0x1B14F4u;
    // 0x1b14f4: 0x1080000a
    ctx->pc = 0x1B14F4u;
    {
        const bool branch_taken_0x1b14f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b14f4) {
            ctx->pc = 0x1B1520u;
            goto label_1b1520;
        }
    }
    ctx->pc = 0x1B14FCu;
    // 0x1b14fc: 0xc063128
    ctx->pc = 0x1B14FCu;
    SET_GPR_U32(ctx, 31, 0x1B1504u);
    ctx->pc = 0x18C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C4A0_0x18c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1504u; }
    }
    if (ctx->pc != 0x1B1504u) { return; }
    ctx->pc = 0x1B1504u;
    // 0x1b1504: 0x8e420808
    ctx->pc = 0x1b1504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x1b1508: 0x501021
    ctx->pc = 0x1b1508u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b150c: 0xc06c410
    ctx->pc = 0x1B150Cu;
    SET_GPR_U32(ctx, 31, 0x1B1514u);
    ctx->pc = 0x1B1510u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1B1040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1040_0x1b1040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1514u; }
    }
    if (ctx->pc != 0x1B1514u) { return; }
    ctx->pc = 0x1B1514u;
    // 0x1b1514: 0x8e420808
    ctx->pc = 0x1b1514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x1b1518: 0x501021
    ctx->pc = 0x1b1518u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b151c: 0xac400000
    ctx->pc = 0x1b151cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1b1520:
    // 0x1b1520: 0x26310001
    ctx->pc = 0x1b1520u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1b1524:
    // 0x1b1524: 0x96420812
    ctx->pc = 0x1b1524u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2066)));
    // 0x1b1528: 0x222102a
    ctx->pc = 0x1b1528u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1b152c: 0x1440ffe6
    ctx->pc = 0x1B152Cu;
    {
        const bool branch_taken_0x1b152c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1530u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b152c) {
            ctx->pc = 0x1B14C8u;
            goto label_1b14c8;
        }
    }
    ctx->pc = 0x1B1534u;
    // 0x1b1534: 0xc06c6a4
    ctx->pc = 0x1B1534u;
    SET_GPR_U32(ctx, 31, 0x1B153Cu);
    ctx->pc = 0x1B1A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1A90_0x1b1a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B153Cu; }
    }
    if (ctx->pc != 0x1B153Cu) { return; }
    ctx->pc = 0x1B153Cu;
    // 0x1b153c: 0x8e44080c
    ctx->pc = 0x1b153cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    // 0x1b1540: 0x10800006
    ctx->pc = 0x1B1540u;
    {
        const bool branch_taken_0x1b1540 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b1540) {
            ctx->pc = 0x1B155Cu;
            goto label_1b155c;
        }
    }
    ctx->pc = 0x1B1548u;
    // 0x1b1548: 0xc064960
    ctx->pc = 0x1B1548u;
    SET_GPR_U32(ctx, 31, 0x1B1550u);
    ctx->pc = 0x192580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192580_0x192580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1550u; }
    }
    if (ctx->pc != 0x1B1550u) { return; }
    ctx->pc = 0x1B1550u;
    // 0x1b1550: 0xc06c444
    ctx->pc = 0x1B1550u;
    SET_GPR_U32(ctx, 31, 0x1B1558u);
    ctx->pc = 0x1B1554u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2060)));
    ctx->pc = 0x1B1110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1110_0x1b1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1558u; }
    }
    if (ctx->pc != 0x1B1558u) { return; }
    ctx->pc = 0x1B1558u;
    // 0x1b1558: 0xae40080c
    ctx->pc = 0x1b1558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2060), GPR_U32(ctx, 0));
label_1b155c:
    // 0x1b155c: 0xa6400812
    ctx->pc = 0x1b155cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2066), (uint16_t)GPR_U32(ctx, 0));
label_1b1560:
    // 0x1b1560: 0xdfbf0030
    ctx->pc = 0x1b1560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1564: 0x7bb20020
    ctx->pc = 0x1b1564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1568: 0x7bb10010
    ctx->pc = 0x1b1568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b156c: 0x7bb00000
    ctx->pc = 0x1b156cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1570: 0x3e00008
    ctx->pc = 0x1B1570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B14C8u: goto label_1b14c8;
            case 0x1B1520u: goto label_1b1520;
            case 0x1B1524u: goto label_1b1524;
            case 0x1B155Cu: goto label_1b155c;
            case 0x1B1560u: goto label_1b1560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1578u;
    // 0x1b1578: 0x0
    ctx->pc = 0x1b1578u;
    // NOP
    // 0x1b157c: 0x0
    ctx->pc = 0x1b157cu;
    // NOP
}
