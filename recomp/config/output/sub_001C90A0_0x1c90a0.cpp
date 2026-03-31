#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C90A0
// Address: 0x1c90a0 - 0x1c92b0
void sub_001C90A0_0x1c90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c90a0u;

    // 0x1c90a0: 0x27bdffa0
    ctx->pc = 0x1c90a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c90a4: 0x402d
    ctx->pc = 0x1c90a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c90a8: 0xffbf0050
    ctx->pc = 0x1c90a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c90ac: 0x382d
    ctx->pc = 0x1c90acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c90b0: 0x7fb40040
    ctx->pc = 0x1c90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c90b4: 0x2402002e
    ctx->pc = 0x1c90b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c90b8: 0x7fb30030
    ctx->pc = 0x1c90b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c90bc: 0x80a02d
    ctx->pc = 0x1c90bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c90c0: 0x7fb20020
    ctx->pc = 0x1c90c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c90c4: 0x280302d
    ctx->pc = 0x1c90c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c90c8: 0x7fb10010
    ctx->pc = 0x1c90c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c90cc: 0x24030004
    ctx->pc = 0x1c90ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c90d0: 0x10000016
    ctx->pc = 0x1C90D0u;
    {
        const bool branch_taken_0x1c90d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C90D4u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1c90d0) {
            ctx->pc = 0x1C912Cu;
            goto label_1c912c;
        }
    }
    ctx->pc = 0x1C90D8u;
label_1c90d8:
    // 0x1c90d8: 0x14800008
    ctx->pc = 0x1C90D8u;
    {
        const bool branch_taken_0x1c90d8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C90DCu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 58));
        if (branch_taken_0x1c90d8) {
            ctx->pc = 0x1C90FCu;
            goto label_1c90fc;
        }
    }
    ctx->pc = 0x1C90E0u;
    // 0x1c90e0: 0x10200006
    ctx->pc = 0x1C90E0u;
    {
        const bool branch_taken_0x1c90e0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c90e0) {
            ctx->pc = 0x1C90FCu;
            goto label_1c90fc;
        }
    }
    ctx->pc = 0x1C90E8u;
    // 0x1c90e8: 0x24e70001
    ctx->pc = 0x1c90e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c90ec: 0x14e3000e
    ctx->pc = 0x1C90ECu;
    {
        const bool branch_taken_0x1c90ec = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c90ec) {
            ctx->pc = 0x1C9128u;
            goto label_1c9128;
        }
    }
    ctx->pc = 0x1C90F4u;
    // 0x1c90f4: 0x10000064
    ctx->pc = 0x1C90F4u;
    {
        const bool branch_taken_0x1c90f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C90F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c90f4) {
            ctx->pc = 0x1C9288u;
            goto label_1c9288;
        }
    }
    ctx->pc = 0x1C90FCu;
label_1c90fc:
    // 0x1c90fc: 0x14a20008
    ctx->pc = 0x1C90FCu;
    {
        const bool branch_taken_0x1c90fc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c90fc) {
            ctx->pc = 0x1C9120u;
            goto label_1c9120;
        }
    }
    ctx->pc = 0x1C9104u;
    // 0x1c9104: 0x25080001
    ctx->pc = 0x1c9104u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c9108: 0x15030003
    ctx->pc = 0x1C9108u;
    {
        const bool branch_taken_0x1c9108 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        ctx->pc = 0x1C910Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c9108) {
            ctx->pc = 0x1C9118u;
            goto label_1c9118;
        }
    }
    ctx->pc = 0x1C9110u;
    // 0x1c9110: 0x1000005d
    ctx->pc = 0x1C9110u;
    {
        const bool branch_taken_0x1c9110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9114u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c9110) {
            ctx->pc = 0x1C9288u;
            goto label_1c9288;
        }
    }
    ctx->pc = 0x1C9118u;
label_1c9118:
    // 0x1c9118: 0x10000004
    ctx->pc = 0x1C9118u;
    {
        const bool branch_taken_0x1c9118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C911Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1c9118) {
            ctx->pc = 0x1C912Cu;
            goto label_1c912c;
        }
    }
    ctx->pc = 0x1C9120u;
label_1c9120:
    // 0x1c9120: 0x10000059
    ctx->pc = 0x1C9120u;
    {
        const bool branch_taken_0x1c9120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9124u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c9120) {
            ctx->pc = 0x1C9288u;
            goto label_1c9288;
        }
    }
    ctx->pc = 0x1C9128u;
label_1c9128:
    // 0x1c9128: 0x24c60001
    ctx->pc = 0x1c9128u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1c912c:
    // 0x1c912c: 0x80c50000
    ctx->pc = 0x1c912cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c9130: 0x14a0ffe9
    ctx->pc = 0x1C9130u;
    {
        const bool branch_taken_0x1c9130 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C9134u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 48));
        if (branch_taken_0x1c9130) {
            ctx->pc = 0x1C90D8u;
            goto label_1c90d8;
        }
    }
    ctx->pc = 0x1C9138u;
    // 0x1c9138: 0x280202d
    ctx->pc = 0x1c9138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c913c: 0xc040de0
    ctx->pc = 0x1C913Cu;
    SET_GPR_U32(ctx, 31, 0x1C9144u);
    ctx->pc = 0x1C9140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9144u; }
    }
    if (ctx->pc != 0x1C9144u) { return; }
    ctx->pc = 0x1C9144u;
    // 0x1c9144: 0x10000002
    ctx->pc = 0x1C9144u;
    {
        const bool branch_taken_0x1c9144 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9148u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1c9144) {
            ctx->pc = 0x1C9150u;
            goto label_1c9150;
        }
    }
    ctx->pc = 0x1C914Cu;
label_1c914c:
    // 0x1c914c: 0x26730001
    ctx->pc = 0x1c914cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1c9150:
    // 0x1c9150: 0xc042c56
    ctx->pc = 0x1C9150u;
    SET_GPR_U32(ctx, 31, 0x1C9158u);
    ctx->pc = 0x1C9154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9158u; }
    }
    if (ctx->pc != 0x1C9158u) { return; }
    ctx->pc = 0x1C9158u;
    // 0x1c9158: 0x262082b
    ctx->pc = 0x1c9158u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1c915c: 0x10200006
    ctx->pc = 0x1C915Cu;
    {
        const bool branch_taken_0x1c915c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9160u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c915c) {
            ctx->pc = 0x1C9178u;
            goto label_1c9178;
        }
    }
    ctx->pc = 0x1C9164u;
    // 0x1c9164: 0x2931821
    ctx->pc = 0x1c9164u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1c9168: 0x2402002e
    ctx->pc = 0x1c9168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c916c: 0x80630000
    ctx->pc = 0x1c916cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9170: 0x1462fff6
    ctx->pc = 0x1C9170u;
    {
        const bool branch_taken_0x1c9170 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c9170) {
            ctx->pc = 0x1C914Cu;
            goto label_1c914c;
        }
    }
    ctx->pc = 0x1C9178u;
label_1c9178:
    // 0x1c9178: 0xc042c56
    ctx->pc = 0x1C9178u;
    SET_GPR_U32(ctx, 31, 0x1C9180u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9180u; }
    }
    if (ctx->pc != 0x1C9180u) { return; }
    ctx->pc = 0x1C9180u;
    // 0x1c9180: 0x262082b
    ctx->pc = 0x1c9180u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1c9184: 0x10200003
    ctx->pc = 0x1C9184u;
    {
        const bool branch_taken_0x1c9184 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9188u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        if (branch_taken_0x1c9184) {
            ctx->pc = 0x1C9194u;
            goto label_1c9194;
        }
    }
    ctx->pc = 0x1C918Cu;
    // 0x1c918c: 0x26730001
    ctx->pc = 0x1c918cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c9190: 0x2932021
    ctx->pc = 0x1c9190u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1c9194:
    // 0x1c9194: 0xc040de0
    ctx->pc = 0x1C9194u;
    SET_GPR_U32(ctx, 31, 0x1C919Cu);
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C919Cu; }
    }
    if (ctx->pc != 0x1C919Cu) { return; }
    ctx->pc = 0x1C919Cu;
    // 0x1c919c: 0x10000002
    ctx->pc = 0x1C919Cu;
    {
        const bool branch_taken_0x1c919c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C91A0u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1c919c) {
            ctx->pc = 0x1C91A8u;
            goto label_1c91a8;
        }
    }
    ctx->pc = 0x1C91A4u;
label_1c91a4:
    // 0x1c91a4: 0x26730001
    ctx->pc = 0x1c91a4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1c91a8:
    // 0x1c91a8: 0xc042c56
    ctx->pc = 0x1C91A8u;
    SET_GPR_U32(ctx, 31, 0x1C91B0u);
    ctx->pc = 0x1C91ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91B0u; }
    }
    if (ctx->pc != 0x1C91B0u) { return; }
    ctx->pc = 0x1C91B0u;
    // 0x1c91b0: 0x262082b
    ctx->pc = 0x1c91b0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1c91b4: 0x10200006
    ctx->pc = 0x1C91B4u;
    {
        const bool branch_taken_0x1c91b4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C91B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c91b4) {
            ctx->pc = 0x1C91D0u;
            goto label_1c91d0;
        }
    }
    ctx->pc = 0x1C91BCu;
    // 0x1c91bc: 0x2931821
    ctx->pc = 0x1c91bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1c91c0: 0x2402002e
    ctx->pc = 0x1c91c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c91c4: 0x80630000
    ctx->pc = 0x1c91c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c91c8: 0x1462fff6
    ctx->pc = 0x1C91C8u;
    {
        const bool branch_taken_0x1c91c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c91c8) {
            ctx->pc = 0x1C91A4u;
            goto label_1c91a4;
        }
    }
    ctx->pc = 0x1C91D0u;
label_1c91d0:
    // 0x1c91d0: 0xc042c56
    ctx->pc = 0x1C91D0u;
    SET_GPR_U32(ctx, 31, 0x1C91D8u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91D8u; }
    }
    if (ctx->pc != 0x1C91D8u) { return; }
    ctx->pc = 0x1C91D8u;
    // 0x1c91d8: 0x262082b
    ctx->pc = 0x1c91d8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1c91dc: 0x10200003
    ctx->pc = 0x1C91DCu;
    {
        const bool branch_taken_0x1c91dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C91E0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        if (branch_taken_0x1c91dc) {
            ctx->pc = 0x1C91ECu;
            goto label_1c91ec;
        }
    }
    ctx->pc = 0x1C91E4u;
    // 0x1c91e4: 0x26730001
    ctx->pc = 0x1c91e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c91e8: 0x2932021
    ctx->pc = 0x1c91e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1c91ec:
    // 0x1c91ec: 0xc040de0
    ctx->pc = 0x1C91ECu;
    SET_GPR_U32(ctx, 31, 0x1C91F4u);
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91F4u; }
    }
    if (ctx->pc != 0x1C91F4u) { return; }
    ctx->pc = 0x1C91F4u;
    // 0x1c91f4: 0x10000002
    ctx->pc = 0x1C91F4u;
    {
        const bool branch_taken_0x1c91f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C91F8u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1c91f4) {
            ctx->pc = 0x1C9200u;
            goto label_1c9200;
        }
    }
    ctx->pc = 0x1C91FCu;
label_1c91fc:
    // 0x1c91fc: 0x26730001
    ctx->pc = 0x1c91fcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1c9200:
    // 0x1c9200: 0xc042c56
    ctx->pc = 0x1C9200u;
    SET_GPR_U32(ctx, 31, 0x1C9208u);
    ctx->pc = 0x1C9204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9208u; }
    }
    if (ctx->pc != 0x1C9208u) { return; }
    ctx->pc = 0x1C9208u;
    // 0x1c9208: 0x262082b
    ctx->pc = 0x1c9208u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1c920c: 0x10200006
    ctx->pc = 0x1C920Cu;
    {
        const bool branch_taken_0x1c920c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9210u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c920c) {
            ctx->pc = 0x1C9228u;
            goto label_1c9228;
        }
    }
    ctx->pc = 0x1C9214u;
    // 0x1c9214: 0x2931821
    ctx->pc = 0x1c9214u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1c9218: 0x2402002e
    ctx->pc = 0x1c9218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c921c: 0x80630000
    ctx->pc = 0x1c921cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9220: 0x1462fff6
    ctx->pc = 0x1C9220u;
    {
        const bool branch_taken_0x1c9220 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c9220) {
            ctx->pc = 0x1C91FCu;
            goto label_1c91fc;
        }
    }
    ctx->pc = 0x1C9228u;
label_1c9228:
    // 0x1c9228: 0xc042c56
    ctx->pc = 0x1C9228u;
    SET_GPR_U32(ctx, 31, 0x1C9230u);
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9230u; }
    }
    if (ctx->pc != 0x1C9230u) { return; }
    ctx->pc = 0x1C9230u;
    // 0x1c9230: 0x262082b
    ctx->pc = 0x1c9230u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1c9234: 0x10200003
    ctx->pc = 0x1C9234u;
    {
        const bool branch_taken_0x1c9234 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9238u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        if (branch_taken_0x1c9234) {
            ctx->pc = 0x1C9244u;
            goto label_1c9244;
        }
    }
    ctx->pc = 0x1C923Cu;
    // 0x1c923c: 0x26730001
    ctx->pc = 0x1c923cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c9240: 0x2932021
    ctx->pc = 0x1c9240u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1c9244:
    // 0x1c9244: 0xc040de0
    ctx->pc = 0x1C9244u;
    SET_GPR_U32(ctx, 31, 0x1C924Cu);
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C924Cu; }
    }
    if (ctx->pc != 0x1C924Cu) { return; }
    ctx->pc = 0x1C924Cu;
    // 0x1c924c: 0x322300ff
    ctx->pc = 0x1c924cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
    // 0x1c9250: 0x304200ff
    ctx->pc = 0x1c9250u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1c9254: 0x32200
    ctx->pc = 0x1c9254u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1c9258: 0x324600ff
    ctx->pc = 0x1c9258u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 18), 255));
    // 0x1c925c: 0x3085ff00
    ctx->pc = 0x1c925cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1c9260: 0x320300ff
    ctx->pc = 0x1c9260u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 255));
    // 0x1c9264: 0x32400
    ctx->pc = 0x1c9264u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9268: 0xc52825
    ctx->pc = 0x1c9268u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c926c: 0x21e00
    ctx->pc = 0x1c926cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c9270: 0x3c0200ff
    ctx->pc = 0x1c9270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
    // 0x1c9274: 0x822024
    ctx->pc = 0x1c9274u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c9278: 0x3c02ff00
    ctx->pc = 0x1c9278u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x1c927c: 0x852025
    ctx->pc = 0x1c927cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c9280: 0x621024
    ctx->pc = 0x1c9280u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c9284: 0x441025
    ctx->pc = 0x1c9284u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1c9288:
    // 0x1c9288: 0xdfbf0050
    ctx->pc = 0x1c9288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c928c: 0x7bb40040
    ctx->pc = 0x1c928cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9290: 0x7bb30030
    ctx->pc = 0x1c9290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9294: 0x7bb20020
    ctx->pc = 0x1c9294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9298: 0x7bb10010
    ctx->pc = 0x1c9298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c929c: 0x7bb00000
    ctx->pc = 0x1c929cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c92a0: 0x3e00008
    ctx->pc = 0x1C92A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C92A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C90D8u: goto label_1c90d8;
            case 0x1C90FCu: goto label_1c90fc;
            case 0x1C9118u: goto label_1c9118;
            case 0x1C9120u: goto label_1c9120;
            case 0x1C9128u: goto label_1c9128;
            case 0x1C912Cu: goto label_1c912c;
            case 0x1C914Cu: goto label_1c914c;
            case 0x1C9150u: goto label_1c9150;
            case 0x1C9178u: goto label_1c9178;
            case 0x1C9194u: goto label_1c9194;
            case 0x1C91A4u: goto label_1c91a4;
            case 0x1C91A8u: goto label_1c91a8;
            case 0x1C91D0u: goto label_1c91d0;
            case 0x1C91ECu: goto label_1c91ec;
            case 0x1C91FCu: goto label_1c91fc;
            case 0x1C9200u: goto label_1c9200;
            case 0x1C9228u: goto label_1c9228;
            case 0x1C9244u: goto label_1c9244;
            case 0x1C9288u: goto label_1c9288;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C92A8u;
    // 0x1c92a8: 0x0
    ctx->pc = 0x1c92a8u;
    // NOP
    // 0x1c92ac: 0x0
    ctx->pc = 0x1c92acu;
    // NOP
}
