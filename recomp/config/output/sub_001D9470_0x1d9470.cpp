#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D9470
// Address: 0x1d9470 - 0x1d9aa0
void sub_001D9470_0x1d9470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d9470u;

label_1d9470:
    // 0x1d9470: 0x27bdffa0
    ctx->pc = 0x1d9470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d9474: 0x402d
    ctx->pc = 0x1d9474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9478: 0xffbf0050
    ctx->pc = 0x1d9478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d947c: 0x382d
    ctx->pc = 0x1d947cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9480: 0x7fb40040
    ctx->pc = 0x1d9480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d9484: 0x7fb30030
    ctx->pc = 0x1d9484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d9488: 0x80a02d
    ctx->pc = 0x1d9488u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d948c: 0x7fb20020
    ctx->pc = 0x1d948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d9490: 0x7fb10010
    ctx->pc = 0x1d9490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9494: 0x7fb00000
    ctx->pc = 0x1d9494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9498: 0x80850000
    ctx->pc = 0x1d9498u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d949c: 0x10a0001e
    ctx->pc = 0x1D949Cu;
    {
        const bool branch_taken_0x1d949c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D94A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d949c) {
            ctx->pc = 0x1D9518u;
            goto label_1d9518;
        }
    }
    ctx->pc = 0x1D94A4u;
    // 0x1d94a4: 0x2402002e
    ctx->pc = 0x1d94a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1d94a8: 0x24030004
    ctx->pc = 0x1d94a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d94ac: 0x0
    ctx->pc = 0x1d94acu;
    // NOP
label_1d94b0:
    // 0x1d94b0: 0x28a40030
    ctx->pc = 0x1d94b0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 48));
    // 0x1d94b4: 0x14800008
    ctx->pc = 0x1D94B4u;
    {
        const bool branch_taken_0x1d94b4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D94B8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 58));
        if (branch_taken_0x1d94b4) {
            ctx->pc = 0x1D94D8u;
            goto label_1d94d8;
        }
    }
    ctx->pc = 0x1D94BCu;
    // 0x1d94bc: 0x10200006
    ctx->pc = 0x1D94BCu;
    {
        const bool branch_taken_0x1d94bc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d94bc) {
            ctx->pc = 0x1D94D8u;
            goto label_1d94d8;
        }
    }
    ctx->pc = 0x1D94C4u;
    // 0x1d94c4: 0x24e70001
    ctx->pc = 0x1d94c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d94c8: 0x14e3000f
    ctx->pc = 0x1D94C8u;
    {
        const bool branch_taken_0x1d94c8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        if (branch_taken_0x1d94c8) {
            ctx->pc = 0x1D9508u;
            goto label_1d9508;
        }
    }
    ctx->pc = 0x1D94D0u;
    // 0x1d94d0: 0x10000067
    ctx->pc = 0x1D94D0u;
    {
        const bool branch_taken_0x1d94d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D94D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d94d0) {
            ctx->pc = 0x1D9670u;
            goto label_1d9670;
        }
    }
    ctx->pc = 0x1D94D8u;
label_1d94d8:
    // 0x1d94d8: 0x14a20009
    ctx->pc = 0x1D94D8u;
    {
        const bool branch_taken_0x1d94d8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d94d8) {
            ctx->pc = 0x1D9500u;
            goto label_1d9500;
        }
    }
    ctx->pc = 0x1D94E0u;
    // 0x1d94e0: 0x25080001
    ctx->pc = 0x1d94e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d94e4: 0x15030004
    ctx->pc = 0x1D94E4u;
    {
        const bool branch_taken_0x1d94e4 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x1d94e4) {
            ctx->pc = 0x1D94F8u;
            goto label_1d94f8;
        }
    }
    ctx->pc = 0x1D94ECu;
    // 0x1d94ec: 0x10000060
    ctx->pc = 0x1D94ECu;
    {
        const bool branch_taken_0x1d94ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D94F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d94ec) {
            ctx->pc = 0x1D9670u;
            goto label_1d9670;
        }
    }
    ctx->pc = 0x1D94F4u;
    // 0x1d94f4: 0x0
    ctx->pc = 0x1d94f4u;
    // NOP
label_1d94f8:
    // 0x1d94f8: 0x10000003
    ctx->pc = 0x1D94F8u;
    {
        const bool branch_taken_0x1d94f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D94FCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d94f8) {
            ctx->pc = 0x1D9508u;
            goto label_1d9508;
        }
    }
    ctx->pc = 0x1D9500u;
label_1d9500:
    // 0x1d9500: 0x1000005b
    ctx->pc = 0x1D9500u;
    {
        const bool branch_taken_0x1d9500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9504u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d9500) {
            ctx->pc = 0x1D9670u;
            goto label_1d9670;
        }
    }
    ctx->pc = 0x1D9508u;
label_1d9508:
    // 0x1d9508: 0x24c60001
    ctx->pc = 0x1d9508u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d950c: 0x80c50000
    ctx->pc = 0x1d950cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9510: 0x14a0ffe7
    ctx->pc = 0x1D9510u;
    {
        const bool branch_taken_0x1d9510 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d9510) {
            ctx->pc = 0x1D94B0u;
            goto label_1d94b0;
        }
    }
    ctx->pc = 0x1D9518u;
label_1d9518:
    // 0x1d9518: 0x280202d
    ctx->pc = 0x1d9518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d951c: 0xc040de0
    ctx->pc = 0x1D951Cu;
    SET_GPR_U32(ctx, 31, 0x1D9524u);
    ctx->pc = 0x1D9520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9524u; }
    }
    if (ctx->pc != 0x1D9524u) { return; }
    ctx->pc = 0x1D9524u;
    // 0x1d9524: 0x10000004
    ctx->pc = 0x1D9524u;
    {
        const bool branch_taken_0x1d9524 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9528u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1d9524) {
            ctx->pc = 0x1D9538u;
            goto label_1d9538;
        }
    }
    ctx->pc = 0x1D952Cu;
    // 0x1d952c: 0x0
    ctx->pc = 0x1d952cu;
    // NOP
label_1d9530:
    // 0x1d9530: 0x26730001
    ctx->pc = 0x1d9530u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d9534: 0x0
    ctx->pc = 0x1d9534u;
    // NOP
label_1d9538:
    // 0x1d9538: 0xc042c56
    ctx->pc = 0x1D9538u;
    SET_GPR_U32(ctx, 31, 0x1D9540u);
    ctx->pc = 0x1D953Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9540u; }
    }
    if (ctx->pc != 0x1D9540u) { return; }
    ctx->pc = 0x1D9540u;
    // 0x1d9540: 0x262082b
    ctx->pc = 0x1d9540u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d9544: 0x10200006
    ctx->pc = 0x1D9544u;
    {
        const bool branch_taken_0x1d9544 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9548u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        if (branch_taken_0x1d9544) {
            ctx->pc = 0x1D9560u;
            goto label_1d9560;
        }
    }
    ctx->pc = 0x1D954Cu;
    // 0x1d954c: 0x2402002e
    ctx->pc = 0x1d954cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1d9550: 0x80630000
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9554: 0x1462fff6
    ctx->pc = 0x1D9554u;
    {
        const bool branch_taken_0x1d9554 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d9554) {
            ctx->pc = 0x1D9530u;
            goto label_1d9530;
        }
    }
    ctx->pc = 0x1D955Cu;
    // 0x1d955c: 0x0
    ctx->pc = 0x1d955cu;
    // NOP
label_1d9560:
    // 0x1d9560: 0xc042c56
    ctx->pc = 0x1D9560u;
    SET_GPR_U32(ctx, 31, 0x1D9568u);
    ctx->pc = 0x1D9564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9568u; }
    }
    if (ctx->pc != 0x1D9568u) { return; }
    ctx->pc = 0x1D9568u;
    // 0x1d9568: 0x262082b
    ctx->pc = 0x1d9568u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d956c: 0x10200002
    ctx->pc = 0x1D956Cu;
    {
        const bool branch_taken_0x1d956c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d956c) {
            ctx->pc = 0x1D9578u;
            goto label_1d9578;
        }
    }
    ctx->pc = 0x1D9574u;
    // 0x1d9574: 0x26730001
    ctx->pc = 0x1d9574u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d9578:
    // 0x1d9578: 0xc040de0
    ctx->pc = 0x1D9578u;
    SET_GPR_U32(ctx, 31, 0x1D9580u);
    ctx->pc = 0x1D957Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9580u; }
    }
    if (ctx->pc != 0x1D9580u) { return; }
    ctx->pc = 0x1D9580u;
    // 0x1d9580: 0x10000003
    ctx->pc = 0x1D9580u;
    {
        const bool branch_taken_0x1d9580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9584u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1d9580) {
            ctx->pc = 0x1D9590u;
            goto label_1d9590;
        }
    }
    ctx->pc = 0x1D9588u;
label_1d9588:
    // 0x1d9588: 0x26730001
    ctx->pc = 0x1d9588u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d958c: 0x0
    ctx->pc = 0x1d958cu;
    // NOP
label_1d9590:
    // 0x1d9590: 0xc042c56
    ctx->pc = 0x1D9590u;
    SET_GPR_U32(ctx, 31, 0x1D9598u);
    ctx->pc = 0x1D9594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9598u; }
    }
    if (ctx->pc != 0x1D9598u) { return; }
    ctx->pc = 0x1D9598u;
    // 0x1d9598: 0x262082b
    ctx->pc = 0x1d9598u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d959c: 0x10200006
    ctx->pc = 0x1D959Cu;
    {
        const bool branch_taken_0x1d959c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D95A0u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        if (branch_taken_0x1d959c) {
            ctx->pc = 0x1D95B8u;
            goto label_1d95b8;
        }
    }
    ctx->pc = 0x1D95A4u;
    // 0x1d95a4: 0x2402002e
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1d95a8: 0x80630000
    ctx->pc = 0x1d95a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d95ac: 0x1462fff6
    ctx->pc = 0x1D95ACu;
    {
        const bool branch_taken_0x1d95ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d95ac) {
            ctx->pc = 0x1D9588u;
            goto label_1d9588;
        }
    }
    ctx->pc = 0x1D95B4u;
    // 0x1d95b4: 0x0
    ctx->pc = 0x1d95b4u;
    // NOP
label_1d95b8:
    // 0x1d95b8: 0xc042c56
    ctx->pc = 0x1D95B8u;
    SET_GPR_U32(ctx, 31, 0x1D95C0u);
    ctx->pc = 0x1D95BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95C0u; }
    }
    if (ctx->pc != 0x1D95C0u) { return; }
    ctx->pc = 0x1D95C0u;
    // 0x1d95c0: 0x262082b
    ctx->pc = 0x1d95c0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d95c4: 0x10200002
    ctx->pc = 0x1D95C4u;
    {
        const bool branch_taken_0x1d95c4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d95c4) {
            ctx->pc = 0x1D95D0u;
            goto label_1d95d0;
        }
    }
    ctx->pc = 0x1D95CCu;
    // 0x1d95cc: 0x26730001
    ctx->pc = 0x1d95ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d95d0:
    // 0x1d95d0: 0xc040de0
    ctx->pc = 0x1D95D0u;
    SET_GPR_U32(ctx, 31, 0x1D95D8u);
    ctx->pc = 0x1D95D4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95D8u; }
    }
    if (ctx->pc != 0x1D95D8u) { return; }
    ctx->pc = 0x1D95D8u;
    // 0x1d95d8: 0x10000003
    ctx->pc = 0x1D95D8u;
    {
        const bool branch_taken_0x1d95d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D95DCu;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x1d95d8) {
            ctx->pc = 0x1D95E8u;
            goto label_1d95e8;
        }
    }
    ctx->pc = 0x1D95E0u;
label_1d95e0:
    // 0x1d95e0: 0x26730001
    ctx->pc = 0x1d95e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d95e4: 0x0
    ctx->pc = 0x1d95e4u;
    // NOP
label_1d95e8:
    // 0x1d95e8: 0xc042c56
    ctx->pc = 0x1D95E8u;
    SET_GPR_U32(ctx, 31, 0x1D95F0u);
    ctx->pc = 0x1D95ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95F0u; }
    }
    if (ctx->pc != 0x1D95F0u) { return; }
    ctx->pc = 0x1D95F0u;
    // 0x1d95f0: 0x262082b
    ctx->pc = 0x1d95f0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d95f4: 0x10200006
    ctx->pc = 0x1D95F4u;
    {
        const bool branch_taken_0x1d95f4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D95F8u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        if (branch_taken_0x1d95f4) {
            ctx->pc = 0x1D9610u;
            goto label_1d9610;
        }
    }
    ctx->pc = 0x1D95FCu;
    // 0x1d95fc: 0x2402002e
    ctx->pc = 0x1d95fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
    // 0x1d9600: 0x80630000
    ctx->pc = 0x1d9600u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9604: 0x1462fff6
    ctx->pc = 0x1D9604u;
    {
        const bool branch_taken_0x1d9604 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d9604) {
            ctx->pc = 0x1D95E0u;
            goto label_1d95e0;
        }
    }
    ctx->pc = 0x1D960Cu;
    // 0x1d960c: 0x0
    ctx->pc = 0x1d960cu;
    // NOP
label_1d9610:
    // 0x1d9610: 0xc042c56
    ctx->pc = 0x1D9610u;
    SET_GPR_U32(ctx, 31, 0x1D9618u);
    ctx->pc = 0x1D9614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9618u; }
    }
    if (ctx->pc != 0x1D9618u) { return; }
    ctx->pc = 0x1D9618u;
    // 0x1d9618: 0x262082b
    ctx->pc = 0x1d9618u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d961c: 0x10200002
    ctx->pc = 0x1D961Cu;
    {
        const bool branch_taken_0x1d961c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d961c) {
            ctx->pc = 0x1D9628u;
            goto label_1d9628;
        }
    }
    ctx->pc = 0x1D9624u;
    // 0x1d9624: 0x26730001
    ctx->pc = 0x1d9624u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1d9628:
    // 0x1d9628: 0xc040de0
    ctx->pc = 0x1D9628u;
    SET_GPR_U32(ctx, 31, 0x1D9630u);
    ctx->pc = 0x1D962Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9630u; }
    }
    if (ctx->pc != 0x1D9630u) { return; }
    ctx->pc = 0x1D9630u;
    // 0x1d9630: 0x322300ff
    ctx->pc = 0x1d9630u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
    // 0x1d9634: 0x304200ff
    ctx->pc = 0x1d9634u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1d9638: 0x32200
    ctx->pc = 0x1d9638u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1d963c: 0x324600ff
    ctx->pc = 0x1d963cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 18), 255));
    // 0x1d9640: 0x3085ff00
    ctx->pc = 0x1d9640u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1d9644: 0x320300ff
    ctx->pc = 0x1d9644u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 255));
    // 0x1d9648: 0x32400
    ctx->pc = 0x1d9648u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1d964c: 0xc52825
    ctx->pc = 0x1d964cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1d9650: 0x21e00
    ctx->pc = 0x1d9650u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 24));
    // 0x1d9654: 0x3c0200ff
    ctx->pc = 0x1d9654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
    // 0x1d9658: 0x822024
    ctx->pc = 0x1d9658u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d965c: 0x3c02ff00
    ctx->pc = 0x1d965cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x1d9660: 0x852025
    ctx->pc = 0x1d9660u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d9664: 0x621024
    ctx->pc = 0x1d9664u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9668: 0x441025
    ctx->pc = 0x1d9668u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d966c: 0x0
    ctx->pc = 0x1d966cu;
    // NOP
label_1d9670:
    // 0x1d9670: 0xdfbf0050
    ctx->pc = 0x1d9670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9674: 0x7bb40040
    ctx->pc = 0x1d9674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9678: 0x7bb30030
    ctx->pc = 0x1d9678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d967c: 0x7bb20020
    ctx->pc = 0x1d967cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9680: 0x7bb10010
    ctx->pc = 0x1d9680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9684: 0x7bb00000
    ctx->pc = 0x1d9684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9688: 0x3e00008
    ctx->pc = 0x1D9688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D968Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9470u: goto label_1d9470;
            case 0x1D94B0u: goto label_1d94b0;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94F8u: goto label_1d94f8;
            case 0x1D9500u: goto label_1d9500;
            case 0x1D9508u: goto label_1d9508;
            case 0x1D9518u: goto label_1d9518;
            case 0x1D9530u: goto label_1d9530;
            case 0x1D9538u: goto label_1d9538;
            case 0x1D9560u: goto label_1d9560;
            case 0x1D9578u: goto label_1d9578;
            case 0x1D9588u: goto label_1d9588;
            case 0x1D9590u: goto label_1d9590;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95D0u: goto label_1d95d0;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D95E8u: goto label_1d95e8;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D9628u: goto label_1d9628;
            case 0x1D9670u: goto label_1d9670;
            case 0x1D96C4u: goto label_1d96c4;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D9730u: goto label_1d9730;
            case 0x1D9778u: goto label_1d9778;
            case 0x1D9798u: goto label_1d9798;
            case 0x1D97C0u: goto label_1d97c0;
            case 0x1D9818u: goto label_1d9818;
            case 0x1D9830u: goto label_1d9830;
            case 0x1D9850u: goto label_1d9850;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9890u: goto label_1d9890;
            case 0x1D98D0u: goto label_1d98d0;
            case 0x1D98E8u: goto label_1d98e8;
            case 0x1D9918u: goto label_1d9918;
            case 0x1D9948u: goto label_1d9948;
            case 0x1D9998u: goto label_1d9998;
            case 0x1D99D8u: goto label_1d99d8;
            case 0x1D9A18u: goto label_1d9a18;
            case 0x1D9A30u: goto label_1d9a30;
            case 0x1D9A58u: goto label_1d9a58;
            case 0x1D9A78u: goto label_1d9a78;
            case 0x1D9A80u: goto label_1d9a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9690u;
    // 0x1d9690: 0x3082ffff
    ctx->pc = 0x1d9690u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1d9694: 0x21a00
    ctx->pc = 0x1d9694u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1d9698: 0x21203
    ctx->pc = 0x1d9698u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1d969c: 0x3063ff00
    ctx->pc = 0x1d969cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x1d96a0: 0x304200ff
    ctx->pc = 0x1d96a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1d96a4: 0x621025
    ctx->pc = 0x1d96a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d96a8: 0x3e00008
    ctx->pc = 0x1D96A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D96ACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9470u: goto label_1d9470;
            case 0x1D94B0u: goto label_1d94b0;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94F8u: goto label_1d94f8;
            case 0x1D9500u: goto label_1d9500;
            case 0x1D9508u: goto label_1d9508;
            case 0x1D9518u: goto label_1d9518;
            case 0x1D9530u: goto label_1d9530;
            case 0x1D9538u: goto label_1d9538;
            case 0x1D9560u: goto label_1d9560;
            case 0x1D9578u: goto label_1d9578;
            case 0x1D9588u: goto label_1d9588;
            case 0x1D9590u: goto label_1d9590;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95D0u: goto label_1d95d0;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D95E8u: goto label_1d95e8;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D9628u: goto label_1d9628;
            case 0x1D9670u: goto label_1d9670;
            case 0x1D96C4u: goto label_1d96c4;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D9730u: goto label_1d9730;
            case 0x1D9778u: goto label_1d9778;
            case 0x1D9798u: goto label_1d9798;
            case 0x1D97C0u: goto label_1d97c0;
            case 0x1D9818u: goto label_1d9818;
            case 0x1D9830u: goto label_1d9830;
            case 0x1D9850u: goto label_1d9850;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9890u: goto label_1d9890;
            case 0x1D98D0u: goto label_1d98d0;
            case 0x1D98E8u: goto label_1d98e8;
            case 0x1D9918u: goto label_1d9918;
            case 0x1D9948u: goto label_1d9948;
            case 0x1D9998u: goto label_1d9998;
            case 0x1D99D8u: goto label_1d99d8;
            case 0x1D9A18u: goto label_1d9a18;
            case 0x1D9A30u: goto label_1d9a30;
            case 0x1D9A58u: goto label_1d9a58;
            case 0x1D9A78u: goto label_1d9a78;
            case 0x1D9A80u: goto label_1d9a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D96B0u;
    // 0x1d96b0: 0x27bdffe0
    ctx->pc = 0x1d96b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d96b4: 0xffbf0010
    ctx->pc = 0x1d96b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d96b8: 0x7fb00000
    ctx->pc = 0x1d96b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d96bc: 0xc07651c
    ctx->pc = 0x1D96BCu;
    SET_GPR_U32(ctx, 31, 0x1D96C4u);
    ctx->pc = 0x1D96C0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D9470u;
    goto label_1d9470;
    ctx->pc = 0x1D96C4u;
label_1d96c4:
    // 0x1d96c4: 0xae020000
    ctx->pc = 0x1d96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d96c8: 0x8e020000
    ctx->pc = 0x1d96c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d96cc: 0xdfbf0010
    ctx->pc = 0x1d96ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d96d0: 0x7bb00000
    ctx->pc = 0x1d96d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d96d4: 0x2102b
    ctx->pc = 0x1d96d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d96d8: 0x3e00008
    ctx->pc = 0x1D96D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D96DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9470u: goto label_1d9470;
            case 0x1D94B0u: goto label_1d94b0;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94F8u: goto label_1d94f8;
            case 0x1D9500u: goto label_1d9500;
            case 0x1D9508u: goto label_1d9508;
            case 0x1D9518u: goto label_1d9518;
            case 0x1D9530u: goto label_1d9530;
            case 0x1D9538u: goto label_1d9538;
            case 0x1D9560u: goto label_1d9560;
            case 0x1D9578u: goto label_1d9578;
            case 0x1D9588u: goto label_1d9588;
            case 0x1D9590u: goto label_1d9590;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95D0u: goto label_1d95d0;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D95E8u: goto label_1d95e8;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D9628u: goto label_1d9628;
            case 0x1D9670u: goto label_1d9670;
            case 0x1D96C4u: goto label_1d96c4;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D9730u: goto label_1d9730;
            case 0x1D9778u: goto label_1d9778;
            case 0x1D9798u: goto label_1d9798;
            case 0x1D97C0u: goto label_1d97c0;
            case 0x1D9818u: goto label_1d9818;
            case 0x1D9830u: goto label_1d9830;
            case 0x1D9850u: goto label_1d9850;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9890u: goto label_1d9890;
            case 0x1D98D0u: goto label_1d98d0;
            case 0x1D98E8u: goto label_1d98e8;
            case 0x1D9918u: goto label_1d9918;
            case 0x1D9948u: goto label_1d9948;
            case 0x1D9998u: goto label_1d9998;
            case 0x1D99D8u: goto label_1d99d8;
            case 0x1D9A18u: goto label_1d9a18;
            case 0x1D9A30u: goto label_1d9a30;
            case 0x1D9A58u: goto label_1d9a58;
            case 0x1D9A78u: goto label_1d9a78;
            case 0x1D9A80u: goto label_1d9a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D96E0u;
    // 0x1d96e0: 0x3c020035
    ctx->pc = 0x1d96e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d96e4: 0x3e00008
    ctx->pc = 0x1D96E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D96E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937736));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9470u: goto label_1d9470;
            case 0x1D94B0u: goto label_1d94b0;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94F8u: goto label_1d94f8;
            case 0x1D9500u: goto label_1d9500;
            case 0x1D9508u: goto label_1d9508;
            case 0x1D9518u: goto label_1d9518;
            case 0x1D9530u: goto label_1d9530;
            case 0x1D9538u: goto label_1d9538;
            case 0x1D9560u: goto label_1d9560;
            case 0x1D9578u: goto label_1d9578;
            case 0x1D9588u: goto label_1d9588;
            case 0x1D9590u: goto label_1d9590;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95D0u: goto label_1d95d0;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D95E8u: goto label_1d95e8;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D9628u: goto label_1d9628;
            case 0x1D9670u: goto label_1d9670;
            case 0x1D96C4u: goto label_1d96c4;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D9730u: goto label_1d9730;
            case 0x1D9778u: goto label_1d9778;
            case 0x1D9798u: goto label_1d9798;
            case 0x1D97C0u: goto label_1d97c0;
            case 0x1D9818u: goto label_1d9818;
            case 0x1D9830u: goto label_1d9830;
            case 0x1D9850u: goto label_1d9850;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9890u: goto label_1d9890;
            case 0x1D98D0u: goto label_1d98d0;
            case 0x1D98E8u: goto label_1d98e8;
            case 0x1D9918u: goto label_1d9918;
            case 0x1D9948u: goto label_1d9948;
            case 0x1D9998u: goto label_1d9998;
            case 0x1D99D8u: goto label_1d99d8;
            case 0x1D9A18u: goto label_1d9a18;
            case 0x1D9A30u: goto label_1d9a30;
            case 0x1D9A58u: goto label_1d9a58;
            case 0x1D9A78u: goto label_1d9a78;
            case 0x1D9A80u: goto label_1d9a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D96ECu;
    // 0x1d96ec: 0x0
    ctx->pc = 0x1d96ecu;
    // NOP
    // 0x1d96f0: 0x3c020035
    ctx->pc = 0x1d96f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d96f4: 0x3e00008
    ctx->pc = 0x1D96F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D96F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937728));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9470u: goto label_1d9470;
            case 0x1D94B0u: goto label_1d94b0;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94F8u: goto label_1d94f8;
            case 0x1D9500u: goto label_1d9500;
            case 0x1D9508u: goto label_1d9508;
            case 0x1D9518u: goto label_1d9518;
            case 0x1D9530u: goto label_1d9530;
            case 0x1D9538u: goto label_1d9538;
            case 0x1D9560u: goto label_1d9560;
            case 0x1D9578u: goto label_1d9578;
            case 0x1D9588u: goto label_1d9588;
            case 0x1D9590u: goto label_1d9590;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95D0u: goto label_1d95d0;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D95E8u: goto label_1d95e8;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D9628u: goto label_1d9628;
            case 0x1D9670u: goto label_1d9670;
            case 0x1D96C4u: goto label_1d96c4;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D9730u: goto label_1d9730;
            case 0x1D9778u: goto label_1d9778;
            case 0x1D9798u: goto label_1d9798;
            case 0x1D97C0u: goto label_1d97c0;
            case 0x1D9818u: goto label_1d9818;
            case 0x1D9830u: goto label_1d9830;
            case 0x1D9850u: goto label_1d9850;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9890u: goto label_1d9890;
            case 0x1D98D0u: goto label_1d98d0;
            case 0x1D98E8u: goto label_1d98e8;
            case 0x1D9918u: goto label_1d9918;
            case 0x1D9948u: goto label_1d9948;
            case 0x1D9998u: goto label_1d9998;
            case 0x1D99D8u: goto label_1d99d8;
            case 0x1D9A18u: goto label_1d9a18;
            case 0x1D9A30u: goto label_1d9a30;
            case 0x1D9A58u: goto label_1d9a58;
            case 0x1D9A78u: goto label_1d9a78;
            case 0x1D9A80u: goto label_1d9a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D96FCu;
    // 0x1d96fc: 0x0
    ctx->pc = 0x1d96fcu;
    // NOP
    // 0x1d9700: 0x27bdffd0
    ctx->pc = 0x1d9700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9704: 0xffbf0020
    ctx->pc = 0x1d9704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9708: 0x7fb10010
    ctx->pc = 0x1d9708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d970c: 0x7fb00000
    ctx->pc = 0x1d970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9710: 0x80802d
    ctx->pc = 0x1d9710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9714: 0x6000004
    ctx->pc = 0x1D9714u;
    {
        const bool branch_taken_0x1d9714 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D9718u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
        if (branch_taken_0x1d9714) {
            ctx->pc = 0x1D9728u;
            goto label_1d9728;
        }
    }
    ctx->pc = 0x1D971Cu;
    // 0x1d971c: 0x14400004
    ctx->pc = 0x1D971Cu;
    {
        const bool branch_taken_0x1d971c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d971c) {
            ctx->pc = 0x1D9730u;
            goto label_1d9730;
        }
    }
    ctx->pc = 0x1D9724u;
    // 0x1d9724: 0x0
    ctx->pc = 0x1d9724u;
    // NOP
label_1d9728:
    // 0x1d9728: 0x10000025
    ctx->pc = 0x1D9728u;
    {
        const bool branch_taken_0x1d9728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D972Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d9728) {
            ctx->pc = 0x1D97C0u;
            goto label_1d97c0;
        }
    }
    ctx->pc = 0x1D9730u;
label_1d9730:
    // 0x1d9730: 0xc076514
    ctx->pc = 0x1D9730u;
    SET_GPR_U32(ctx, 31, 0x1D9738u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9738u; }
    }
    if (ctx->pc != 0x1D9738u) { return; }
    ctx->pc = 0x1D9738u;
    // 0x1d9738: 0x3c020035
    ctx->pc = 0x1d9738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d973c: 0x108080
    ctx->pc = 0x1d973cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d9740: 0x24428c90
    ctx->pc = 0x1d9740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x1d9744: 0x508821
    ctx->pc = 0x1d9744u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d9748: 0x8e230000
    ctx->pc = 0x1d9748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d974c: 0x2402fffe
    ctx->pc = 0x1d974cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d9750: 0x14620009
    ctx->pc = 0x1D9750u;
    {
        const bool branch_taken_0x1d9750 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9754u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x1d9750) {
            ctx->pc = 0x1D9778u;
            goto label_1d9778;
        }
    }
    ctx->pc = 0x1D9758u;
    // 0x1d9758: 0x24030001
    ctx->pc = 0x1d9758u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d975c: 0x24428c70
    ctx->pc = 0x1d975cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x1d9760: 0x501021
    ctx->pc = 0x1d9760u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d9764: 0xc076518
    ctx->pc = 0x1D9764u;
    SET_GPR_U32(ctx, 31, 0x1D976Cu);
    ctx->pc = 0x1D9768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D976Cu; }
    }
    if (ctx->pc != 0x1D976Cu) { return; }
    ctx->pc = 0x1D976Cu;
    // 0x1d976c: 0x10000014
    ctx->pc = 0x1D976Cu;
    {
        const bool branch_taken_0x1d976c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9770u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d976c) {
            ctx->pc = 0x1D97C0u;
            goto label_1d97c0;
        }
    }
    ctx->pc = 0x1D9774u;
    // 0x1d9774: 0x0
    ctx->pc = 0x1d9774u;
    // NOP
label_1d9778:
    // 0x1d9778: 0xc076518
    ctx->pc = 0x1D9778u;
    SET_GPR_U32(ctx, 31, 0x1D9780u);
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9780u; }
    }
    if (ctx->pc != 0x1D9780u) { return; }
    ctx->pc = 0x1D9780u;
    // 0x1d9780: 0x8e220000
    ctx->pc = 0x1d9780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9784: 0x4410004
    ctx->pc = 0x1D9784u;
    {
        const bool branch_taken_0x1d9784 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D9788u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d9784) {
            ctx->pc = 0x1D9798u;
            goto label_1d9798;
        }
    }
    ctx->pc = 0x1D978Cu;
    // 0x1d978c: 0x1000000c
    ctx->pc = 0x1D978Cu;
    {
        const bool branch_taken_0x1d978c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d978c) {
            ctx->pc = 0x1D97C0u;
            goto label_1d97c0;
        }
    }
    ctx->pc = 0x1D9794u;
    // 0x1d9794: 0x0
    ctx->pc = 0x1d9794u;
    // NOP
label_1d9798:
    // 0x1d9798: 0xc076514
    ctx->pc = 0x1D9798u;
    SET_GPR_U32(ctx, 31, 0x1D97A0u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97A0u; }
    }
    if (ctx->pc != 0x1D97A0u) { return; }
    ctx->pc = 0x1D97A0u;
    // 0x1d97a0: 0x3c020035
    ctx->pc = 0x1d97a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d97a4: 0x24030001
    ctx->pc = 0x1d97a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d97a8: 0x24428c70
    ctx->pc = 0x1d97a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x1d97ac: 0x501021
    ctx->pc = 0x1d97acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d97b0: 0xc076518
    ctx->pc = 0x1D97B0u;
    SET_GPR_U32(ctx, 31, 0x1D97B8u);
    ctx->pc = 0x1D97B4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97B8u; }
    }
    if (ctx->pc != 0x1D97B8u) { return; }
    ctx->pc = 0x1D97B8u;
    // 0x1d97b8: 0x102d
    ctx->pc = 0x1d97b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d97bc: 0x0
    ctx->pc = 0x1d97bcu;
    // NOP
label_1d97c0:
    // 0x1d97c0: 0xdfbf0020
    ctx->pc = 0x1d97c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d97c4: 0x7bb10010
    ctx->pc = 0x1d97c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d97c8: 0x7bb00000
    ctx->pc = 0x1d97c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d97cc: 0x3e00008
    ctx->pc = 0x1D97CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D97D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9470u: goto label_1d9470;
            case 0x1D94B0u: goto label_1d94b0;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94F8u: goto label_1d94f8;
            case 0x1D9500u: goto label_1d9500;
            case 0x1D9508u: goto label_1d9508;
            case 0x1D9518u: goto label_1d9518;
            case 0x1D9530u: goto label_1d9530;
            case 0x1D9538u: goto label_1d9538;
            case 0x1D9560u: goto label_1d9560;
            case 0x1D9578u: goto label_1d9578;
            case 0x1D9588u: goto label_1d9588;
            case 0x1D9590u: goto label_1d9590;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95D0u: goto label_1d95d0;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D95E8u: goto label_1d95e8;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D9628u: goto label_1d9628;
            case 0x1D9670u: goto label_1d9670;
            case 0x1D96C4u: goto label_1d96c4;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D9730u: goto label_1d9730;
            case 0x1D9778u: goto label_1d9778;
            case 0x1D9798u: goto label_1d9798;
            case 0x1D97C0u: goto label_1d97c0;
            case 0x1D9818u: goto label_1d9818;
            case 0x1D9830u: goto label_1d9830;
            case 0x1D9850u: goto label_1d9850;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9890u: goto label_1d9890;
            case 0x1D98D0u: goto label_1d98d0;
            case 0x1D98E8u: goto label_1d98e8;
            case 0x1D9918u: goto label_1d9918;
            case 0x1D9948u: goto label_1d9948;
            case 0x1D9998u: goto label_1d9998;
            case 0x1D99D8u: goto label_1d99d8;
            case 0x1D9A18u: goto label_1d9a18;
            case 0x1D9A30u: goto label_1d9a30;
            case 0x1D9A58u: goto label_1d9a58;
            case 0x1D9A78u: goto label_1d9a78;
            case 0x1D9A80u: goto label_1d9a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D97D4u;
    // 0x1d97d4: 0x0
    ctx->pc = 0x1d97d4u;
    // NOP
    // 0x1d97d8: 0x0
    ctx->pc = 0x1d97d8u;
    // NOP
    // 0x1d97dc: 0x0
    ctx->pc = 0x1d97dcu;
    // NOP
    // 0x1d97e0: 0x3e00008
    ctx->pc = 0x1D97E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D97E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9470u: goto label_1d9470;
            case 0x1D94B0u: goto label_1d94b0;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94F8u: goto label_1d94f8;
            case 0x1D9500u: goto label_1d9500;
            case 0x1D9508u: goto label_1d9508;
            case 0x1D9518u: goto label_1d9518;
            case 0x1D9530u: goto label_1d9530;
            case 0x1D9538u: goto label_1d9538;
            case 0x1D9560u: goto label_1d9560;
            case 0x1D9578u: goto label_1d9578;
            case 0x1D9588u: goto label_1d9588;
            case 0x1D9590u: goto label_1d9590;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95D0u: goto label_1d95d0;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D95E8u: goto label_1d95e8;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D9628u: goto label_1d9628;
            case 0x1D9670u: goto label_1d9670;
            case 0x1D96C4u: goto label_1d96c4;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D9730u: goto label_1d9730;
            case 0x1D9778u: goto label_1d9778;
            case 0x1D9798u: goto label_1d9798;
            case 0x1D97C0u: goto label_1d97c0;
            case 0x1D9818u: goto label_1d9818;
            case 0x1D9830u: goto label_1d9830;
            case 0x1D9850u: goto label_1d9850;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9890u: goto label_1d9890;
            case 0x1D98D0u: goto label_1d98d0;
            case 0x1D98E8u: goto label_1d98e8;
            case 0x1D9918u: goto label_1d9918;
            case 0x1D9948u: goto label_1d9948;
            case 0x1D9998u: goto label_1d9998;
            case 0x1D99D8u: goto label_1d99d8;
            case 0x1D9A18u: goto label_1d9a18;
            case 0x1D9A30u: goto label_1d9a30;
            case 0x1D9A58u: goto label_1d9a58;
            case 0x1D9A78u: goto label_1d9a78;
            case 0x1D9A80u: goto label_1d9a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D97E8u;
    // 0x1d97e8: 0x0
    ctx->pc = 0x1d97e8u;
    // NOP
    // 0x1d97ec: 0x0
    ctx->pc = 0x1d97ecu;
    // NOP
    // 0x1d97f0: 0x27bdffe0
    ctx->pc = 0x1d97f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d97f4: 0x24020001
    ctx->pc = 0x1d97f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d97f8: 0xffbf0010
    ctx->pc = 0x1d97f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d97fc: 0x10a20006
    ctx->pc = 0x1D97FCu;
    {
        const bool branch_taken_0x1d97fc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D9800u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1d97fc) {
            ctx->pc = 0x1D9818u;
            goto label_1d9818;
        }
    }
    ctx->pc = 0x1D9804u;
    // 0x1d9804: 0x24030016
    ctx->pc = 0x1d9804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d9808: 0x3c010035
    ctx->pc = 0x1d9808u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d980c: 0x2402ffff
    ctx->pc = 0x1d980cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9810: 0x1000001f
    ctx->pc = 0x1D9810u;
    {
        const bool branch_taken_0x1d9810 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9814u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1d9810) {
            ctx->pc = 0x1D9890u;
            goto label_1d9890;
        }
    }
    ctx->pc = 0x1D9818u;
label_1d9818:
    // 0x1d9818: 0xc076514
    ctx->pc = 0x1D9818u;
    SET_GPR_U32(ctx, 31, 0x1D9820u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9820u; }
    }
    if (ctx->pc != 0x1D9820u) { return; }
    ctx->pc = 0x1D9820u;
    // 0x1d9820: 0x3c040035
    ctx->pc = 0x1d9820u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x1d9824: 0x802d
    ctx->pc = 0x1d9824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9828: 0x24848c90
    ctx->pc = 0x1d9828u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937744));
    // 0x1d982c: 0x2403ffff
    ctx->pc = 0x1d982cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d9830:
    // 0x1d9830: 0x8c820000
    ctx->pc = 0x1d9830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9834: 0x10430006
    ctx->pc = 0x1D9834u;
    {
        const bool branch_taken_0x1d9834 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d9834) {
            ctx->pc = 0x1D9850u;
            goto label_1d9850;
        }
    }
    ctx->pc = 0x1D983Cu;
    // 0x1d983c: 0x26100001
    ctx->pc = 0x1d983cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d9840: 0x2a020003
    ctx->pc = 0x1d9840u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
    // 0x1d9844: 0x1440fffa
    ctx->pc = 0x1D9844u;
    {
        const bool branch_taken_0x1d9844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9848u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1d9844) {
            ctx->pc = 0x1D9830u;
            goto label_1d9830;
        }
    }
    ctx->pc = 0x1D984Cu;
    // 0x1d984c: 0x0
    ctx->pc = 0x1d984cu;
    // NOP
label_1d9850:
    // 0x1d9850: 0x24020003
    ctx->pc = 0x1d9850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d9854: 0x16020006
    ctx->pc = 0x1D9854u;
    {
        const bool branch_taken_0x1d9854 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D9858u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x1d9854) {
            ctx->pc = 0x1D9870u;
            goto label_1d9870;
        }
    }
    ctx->pc = 0x1D985Cu;
    // 0x1d985c: 0x3c010035
    ctx->pc = 0x1d985cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9860: 0xc076518
    ctx->pc = 0x1D9860u;
    SET_GPR_U32(ctx, 31, 0x1D9868u);
    ctx->pc = 0x1D9864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 2));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9868u; }
    }
    if (ctx->pc != 0x1D9868u) { return; }
    ctx->pc = 0x1D9868u;
    // 0x1d9868: 0x10000009
    ctx->pc = 0x1D9868u;
    {
        const bool branch_taken_0x1d9868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D986Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d9868) {
            ctx->pc = 0x1D9890u;
            goto label_1d9890;
        }
    }
    ctx->pc = 0x1D9870u;
label_1d9870:
    // 0x1d9870: 0x3c020035
    ctx->pc = 0x1d9870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d9874: 0x101880
    ctx->pc = 0x1d9874u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d9878: 0x24428c90
    ctx->pc = 0x1d9878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x1d987c: 0x2404fffe
    ctx->pc = 0x1d987cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d9880: 0x431021
    ctx->pc = 0x1d9880u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9884: 0xc076518
    ctx->pc = 0x1D9884u;
    SET_GPR_U32(ctx, 31, 0x1D988Cu);
    ctx->pc = 0x1D9888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D988Cu; }
    }
    if (ctx->pc != 0x1D988Cu) { return; }
    ctx->pc = 0x1D988Cu;
    // 0x1d988c: 0x200102d
    ctx->pc = 0x1d988cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d9890:
    // 0x1d9890: 0xdfbf0010
    ctx->pc = 0x1d9890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9894: 0x7bb00000
    ctx->pc = 0x1d9894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9898: 0x3e00008
    ctx->pc = 0x1D9898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D989Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9470u: goto label_1d9470;
            case 0x1D94B0u: goto label_1d94b0;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94F8u: goto label_1d94f8;
            case 0x1D9500u: goto label_1d9500;
            case 0x1D9508u: goto label_1d9508;
            case 0x1D9518u: goto label_1d9518;
            case 0x1D9530u: goto label_1d9530;
            case 0x1D9538u: goto label_1d9538;
            case 0x1D9560u: goto label_1d9560;
            case 0x1D9578u: goto label_1d9578;
            case 0x1D9588u: goto label_1d9588;
            case 0x1D9590u: goto label_1d9590;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95D0u: goto label_1d95d0;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D95E8u: goto label_1d95e8;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D9628u: goto label_1d9628;
            case 0x1D9670u: goto label_1d9670;
            case 0x1D96C4u: goto label_1d96c4;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D9730u: goto label_1d9730;
            case 0x1D9778u: goto label_1d9778;
            case 0x1D9798u: goto label_1d9798;
            case 0x1D97C0u: goto label_1d97c0;
            case 0x1D9818u: goto label_1d9818;
            case 0x1D9830u: goto label_1d9830;
            case 0x1D9850u: goto label_1d9850;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9890u: goto label_1d9890;
            case 0x1D98D0u: goto label_1d98d0;
            case 0x1D98E8u: goto label_1d98e8;
            case 0x1D9918u: goto label_1d9918;
            case 0x1D9948u: goto label_1d9948;
            case 0x1D9998u: goto label_1d9998;
            case 0x1D99D8u: goto label_1d99d8;
            case 0x1D9A18u: goto label_1d9a18;
            case 0x1D9A30u: goto label_1d9a30;
            case 0x1D9A58u: goto label_1d9a58;
            case 0x1D9A78u: goto label_1d9a78;
            case 0x1D9A80u: goto label_1d9a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D98A0u;
    // 0x1d98a0: 0x27bdffa0
    ctx->pc = 0x1d98a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d98a4: 0xffbf0040
    ctx->pc = 0x1d98a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d98a8: 0x7fb30030
    ctx->pc = 0x1d98a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d98ac: 0x7fb20020
    ctx->pc = 0x1d98acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d98b0: 0x7fb10010
    ctx->pc = 0x1d98b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d98b4: 0x7fb00000
    ctx->pc = 0x1d98b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d98b8: 0x4800005
    ctx->pc = 0x1D98B8u;
    {
        const bool branch_taken_0x1d98b8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D98BCu;
        WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1d98b8) {
            ctx->pc = 0x1D98D0u;
            goto label_1d98d0;
        }
    }
    ctx->pc = 0x1D98C0u;
    // 0x1d98c0: 0x28820003
    ctx->pc = 0x1d98c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x1d98c4: 0x14400008
    ctx->pc = 0x1D98C4u;
    {
        const bool branch_taken_0x1d98c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d98c4) {
            ctx->pc = 0x1D98E8u;
            goto label_1d98e8;
        }
    }
    ctx->pc = 0x1D98CCu;
    // 0x1d98cc: 0x0
    ctx->pc = 0x1d98ccu;
    // NOP
label_1d98d0:
    // 0x1d98d0: 0x24020009
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d98d4: 0x3c010035
    ctx->pc = 0x1d98d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d98d8: 0xac228c88
    ctx->pc = 0x1d98d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 2));
    // 0x1d98dc: 0x10000068
    ctx->pc = 0x1D98DCu;
    {
        const bool branch_taken_0x1d98dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D98E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d98dc) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D98E4u;
    // 0x1d98e4: 0x0
    ctx->pc = 0x1d98e4u;
    // NOP
label_1d98e8:
    // 0x1d98e8: 0x3c030035
    ctx->pc = 0x1d98e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x1d98ec: 0x48080
    ctx->pc = 0x1d98ecu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d98f0: 0x24638c90
    ctx->pc = 0x1d98f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937744));
    // 0x1d98f4: 0x708821
    ctx->pc = 0x1d98f4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d98f8: 0x2402fffe
    ctx->pc = 0x1d98f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d98fc: 0x8e230000
    ctx->pc = 0x1d98fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9900: 0x10620005
    ctx->pc = 0x1D9900u;
    {
        const bool branch_taken_0x1d9900 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D9904u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1d9900) {
            ctx->pc = 0x1D9918u;
            goto label_1d9918;
        }
    }
    ctx->pc = 0x1D9908u;
    // 0x1d9908: 0x3c010035
    ctx->pc = 0x1d9908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d990c: 0x2402ffff
    ctx->pc = 0x1d990cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9910: 0x1000005b
    ctx->pc = 0x1D9910u;
    {
        const bool branch_taken_0x1d9910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9914u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1d9910) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D9918u;
label_1d9918:
    // 0x1d9918: 0x8ca40004
    ctx->pc = 0x1d9918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d991c: 0x94a50002
    ctx->pc = 0x1d991cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d9920: 0xc075ec0
    ctx->pc = 0x1D9920u;
    SET_GPR_U32(ctx, 31, 0x1D9928u);
    ctx->pc = 0x1D9924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D7B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B00_0x1d7b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9928u; }
    }
    if (ctx->pc != 0x1D9928u) { return; }
    ctx->pc = 0x1D9928u;
    // 0x1d9928: 0x2943c
    ctx->pc = 0x1d9928u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d992c: 0x12943f
    ctx->pc = 0x1d992cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1d9930: 0x6410005
    ctx->pc = 0x1D9930u;
    {
        const bool branch_taken_0x1d9930 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1D9934u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 118));
        if (branch_taken_0x1d9930) {
            ctx->pc = 0x1D9948u;
            goto label_1d9948;
        }
    }
    ctx->pc = 0x1D9938u;
    // 0x1d9938: 0x3c010035
    ctx->pc = 0x1d9938u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d993c: 0x2402ffff
    ctx->pc = 0x1d993cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9940: 0x1000004f
    ctx->pc = 0x1D9940u;
    {
        const bool branch_taken_0x1d9940 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9944u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1d9940) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D9948u;
label_1d9948:
    // 0x1d9948: 0xc076514
    ctx->pc = 0x1D9948u;
    SET_GPR_U32(ctx, 31, 0x1D9950u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9950u; }
    }
    if (ctx->pc != 0x1D9950u) { return; }
    ctx->pc = 0x1D9950u;
    // 0x1d9950: 0xc076518
    ctx->pc = 0x1D9950u;
    SET_GPR_U32(ctx, 31, 0x1D9958u);
    ctx->pc = 0x1D9954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9958u; }
    }
    if (ctx->pc != 0x1D9958u) { return; }
    ctx->pc = 0x1D9958u;
    // 0x1d9958: 0x982d
    ctx->pc = 0x1d9958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d995c: 0x260182d
    ctx->pc = 0x1d995cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9960: 0x26620001
    ctx->pc = 0x1d9960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d9964: 0x29c3c
    ctx->pc = 0x1d9964u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9968: 0x3143c
    ctx->pc = 0x1d9968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d996c: 0x2143f
    ctx->pc = 0x1d996cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d9970: 0x284141a0
    ctx->pc = 0x1d9970u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 16800));
    // 0x1d9974: 0x10200038
    ctx->pc = 0x1D9974u;
    {
        const bool branch_taken_0x1d9974 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9978u;
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        if (branch_taken_0x1d9974) {
            ctx->pc = 0x1D9A58u;
            goto label_1d9a58;
        }
    }
    ctx->pc = 0x1D997Cu;
    // 0x1d997c: 0x3c030035
    ctx->pc = 0x1d997cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x1d9980: 0x3c020035
    ctx->pc = 0x1d9980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x1d9984: 0x24638c70
    ctx->pc = 0x1d9984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937712));
    // 0x1d9988: 0x24428c90
    ctx->pc = 0x1d9988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x1d998c: 0x709021
    ctx->pc = 0x1d998cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d9990: 0x508821
    ctx->pc = 0x1d9990u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d9994: 0x0
    ctx->pc = 0x1d9994u;
    // NOP
label_1d9998:
    // 0x1d9998: 0xc076514
    ctx->pc = 0x1D9998u;
    SET_GPR_U32(ctx, 31, 0x1D99A0u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99A0u; }
    }
    if (ctx->pc != 0x1D99A0u) { return; }
    ctx->pc = 0x1D99A0u;
    // 0x1d99a0: 0x8e430000
    ctx->pc = 0x1d99a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d99a4: 0x24020001
    ctx->pc = 0x1d99a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d99a8: 0x1462000b
    ctx->pc = 0x1D99A8u;
    {
        const bool branch_taken_0x1d99a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D99ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x1d99a8) {
            ctx->pc = 0x1D99D8u;
            goto label_1d99d8;
        }
    }
    ctx->pc = 0x1D99B0u;
    // 0x1d99b0: 0x2404ffff
    ctx->pc = 0x1d99b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d99b4: 0x24428c70
    ctx->pc = 0x1d99b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x1d99b8: 0x3c010035
    ctx->pc = 0x1d99b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d99bc: 0x501821
    ctx->pc = 0x1d99bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d99c0: 0x24020071
    ctx->pc = 0x1d99c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 113));
    // 0x1d99c4: 0xac640000
    ctx->pc = 0x1d99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1d99c8: 0xc076518
    ctx->pc = 0x1D99C8u;
    SET_GPR_U32(ctx, 31, 0x1D99D0u);
    ctx->pc = 0x1D99CCu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 2));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99D0u; }
    }
    if (ctx->pc != 0x1D99D0u) { return; }
    ctx->pc = 0x1D99D0u;
    // 0x1d99d0: 0x1000002b
    ctx->pc = 0x1D99D0u;
    {
        const bool branch_taken_0x1d99d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D99D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d99d0) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D99D8u;
label_1d99d8:
    // 0x1d99d8: 0xc076518
    ctx->pc = 0x1D99D8u;
    SET_GPR_U32(ctx, 31, 0x1D99E0u);
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99E0u; }
    }
    if (ctx->pc != 0x1D99E0u) { return; }
    ctx->pc = 0x1D99E0u;
    // 0x1d99e0: 0x86240000
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d99e4: 0x27a5005e
    ctx->pc = 0x1d99e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 94));
    // 0x1d99e8: 0x27a6005c
    ctx->pc = 0x1d99e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d99ec: 0xc075f48
    ctx->pc = 0x1D99ECu;
    SET_GPR_U32(ctx, 31, 0x1D99F4u);
    ctx->pc = 0x1D99F0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 90));
    ctx->pc = 0x1D7D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7D20_0x1d7d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99F4u; }
    }
    if (ctx->pc != 0x1D99F4u) { return; }
    ctx->pc = 0x1D99F4u;
    // 0x1d99f4: 0x2143c
    ctx->pc = 0x1d99f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d99f8: 0x2143f
    ctx->pc = 0x1d99f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d99fc: 0x4410006
    ctx->pc = 0x1D99FCu;
    {
        const bool branch_taken_0x1d99fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D9A00u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1d99fc) {
            ctx->pc = 0x1D9A18u;
            goto label_1d9a18;
        }
    }
    ctx->pc = 0x1D9A04u;
    // 0x1d9a04: 0x3c010035
    ctx->pc = 0x1d9a04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9a08: 0x2402ffff
    ctx->pc = 0x1d9a08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9a0c: 0x1000001c
    ctx->pc = 0x1D9A0Cu;
    {
        const bool branch_taken_0x1d9a0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9A10u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1d9a0c) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D9A14u;
    // 0x1d9a14: 0x0
    ctx->pc = 0x1d9a14u;
    // NOP
label_1d9a18:
    // 0x1d9a18: 0x87a3005e
    ctx->pc = 0x1d9a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x1d9a1c: 0x24020002
    ctx->pc = 0x1d9a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9a20: 0x10620003
    ctx->pc = 0x1D9A20u;
    {
        const bool branch_taken_0x1d9a20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D9A24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1d9a20) {
            ctx->pc = 0x1D9A30u;
            goto label_1d9a30;
        }
    }
    ctx->pc = 0x1D9A28u;
    // 0x1d9a28: 0x1462000b
    ctx->pc = 0x1D9A28u;
    {
        const bool branch_taken_0x1d9a28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d9a28) {
            ctx->pc = 0x1D9A58u;
            goto label_1d9a58;
        }
    }
    ctx->pc = 0x1D9A30u;
label_1d9a30:
    // 0x1d9a30: 0xc07690c
    ctx->pc = 0x1D9A30u;
    SET_GPR_U32(ctx, 31, 0x1D9A38u);
    ctx->pc = 0x1DA430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA430_0x1da430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A38u; }
    }
    if (ctx->pc != 0x1D9A38u) { return; }
    ctx->pc = 0x1D9A38u;
    // 0x1d9a38: 0x260182d
    ctx->pc = 0x1d9a38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a3c: 0x26620001
    ctx->pc = 0x1d9a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d9a40: 0x29c3c
    ctx->pc = 0x1d9a40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d9a44: 0x3143c
    ctx->pc = 0x1d9a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d9a48: 0x2143f
    ctx->pc = 0x1d9a48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d9a4c: 0x284241a0
    ctx->pc = 0x1d9a4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16800));
    // 0x1d9a50: 0x1440ffd1
    ctx->pc = 0x1D9A50u;
    {
        const bool branch_taken_0x1d9a50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D9A54u;
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        if (branch_taken_0x1d9a50) {
            ctx->pc = 0x1D9998u;
            goto label_1d9998;
        }
    }
    ctx->pc = 0x1D9A58u;
label_1d9a58:
    // 0x1d9a58: 0x87a3005e
    ctx->pc = 0x1d9a58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x1d9a5c: 0x24020004
    ctx->pc = 0x1d9a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9a60: 0x10620005
    ctx->pc = 0x1D9A60u;
    {
        const bool branch_taken_0x1d9a60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D9A64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 104));
        if (branch_taken_0x1d9a60) {
            ctx->pc = 0x1D9A78u;
            goto label_1d9a78;
        }
    }
    ctx->pc = 0x1D9A68u;
    // 0x1d9a68: 0x3c010035
    ctx->pc = 0x1d9a68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d9a6c: 0x2402ffff
    ctx->pc = 0x1d9a6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9a70: 0x10000003
    ctx->pc = 0x1D9A70u;
    {
        const bool branch_taken_0x1d9a70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D9A74u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 3));
        if (branch_taken_0x1d9a70) {
            ctx->pc = 0x1D9A80u;
            goto label_1d9a80;
        }
    }
    ctx->pc = 0x1D9A78u;
label_1d9a78:
    // 0x1d9a78: 0x102d
    ctx->pc = 0x1d9a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a7c: 0x0
    ctx->pc = 0x1d9a7cu;
    // NOP
label_1d9a80:
    // 0x1d9a80: 0xdfbf0040
    ctx->pc = 0x1d9a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9a84: 0x7bb30030
    ctx->pc = 0x1d9a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9a88: 0x7bb20020
    ctx->pc = 0x1d9a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9a8c: 0x7bb10010
    ctx->pc = 0x1d9a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9a90: 0x7bb00000
    ctx->pc = 0x1d9a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9a94: 0x3e00008
    ctx->pc = 0x1D9A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9A98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9470u: goto label_1d9470;
            case 0x1D94B0u: goto label_1d94b0;
            case 0x1D94D8u: goto label_1d94d8;
            case 0x1D94F8u: goto label_1d94f8;
            case 0x1D9500u: goto label_1d9500;
            case 0x1D9508u: goto label_1d9508;
            case 0x1D9518u: goto label_1d9518;
            case 0x1D9530u: goto label_1d9530;
            case 0x1D9538u: goto label_1d9538;
            case 0x1D9560u: goto label_1d9560;
            case 0x1D9578u: goto label_1d9578;
            case 0x1D9588u: goto label_1d9588;
            case 0x1D9590u: goto label_1d9590;
            case 0x1D95B8u: goto label_1d95b8;
            case 0x1D95D0u: goto label_1d95d0;
            case 0x1D95E0u: goto label_1d95e0;
            case 0x1D95E8u: goto label_1d95e8;
            case 0x1D9610u: goto label_1d9610;
            case 0x1D9628u: goto label_1d9628;
            case 0x1D9670u: goto label_1d9670;
            case 0x1D96C4u: goto label_1d96c4;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D9730u: goto label_1d9730;
            case 0x1D9778u: goto label_1d9778;
            case 0x1D9798u: goto label_1d9798;
            case 0x1D97C0u: goto label_1d97c0;
            case 0x1D9818u: goto label_1d9818;
            case 0x1D9830u: goto label_1d9830;
            case 0x1D9850u: goto label_1d9850;
            case 0x1D9870u: goto label_1d9870;
            case 0x1D9890u: goto label_1d9890;
            case 0x1D98D0u: goto label_1d98d0;
            case 0x1D98E8u: goto label_1d98e8;
            case 0x1D9918u: goto label_1d9918;
            case 0x1D9948u: goto label_1d9948;
            case 0x1D9998u: goto label_1d9998;
            case 0x1D99D8u: goto label_1d99d8;
            case 0x1D9A18u: goto label_1d9a18;
            case 0x1D9A30u: goto label_1d9a30;
            case 0x1D9A58u: goto label_1d9a58;
            case 0x1D9A78u: goto label_1d9a78;
            case 0x1D9A80u: goto label_1d9a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9A9Cu;
    // 0x1d9a9c: 0x0
    ctx->pc = 0x1d9a9cu;
    // NOP
}
