#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BF580
// Address: 0x1bf580 - 0x1bf660
void sub_001BF580_0x1bf580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bf580u;

    // 0x1bf580: 0x27bdff90
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bf584: 0x282d
    ctx->pc = 0x1bf584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf588: 0xffbf0040
    ctx->pc = 0x1bf588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bf58c: 0x240600ac
    ctx->pc = 0x1bf58cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 172));
    // 0x1bf590: 0x7fb30030
    ctx->pc = 0x1bf590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bf594: 0x7fb20020
    ctx->pc = 0x1bf594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf598: 0x3c120032
    ctx->pc = 0x1bf598u;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
    // 0x1bf59c: 0x7fb10010
    ctx->pc = 0x1bf59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf5a0: 0x26526c50
    ctx->pc = 0x1bf5a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 27728));
    // 0x1bf5a4: 0x7fb00000
    ctx->pc = 0x1bf5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf5a8: 0xc041f1a
    ctx->pc = 0x1BF5A8u;
    SET_GPR_U32(ctx, 31, 0x1BF5B0u);
    ctx->pc = 0x1BF5ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5B0u; }
    }
    if (ctx->pc != 0x1BF5B0u) { return; }
    ctx->pc = 0x1BF5B0u;
    // 0x1bf5b0: 0x24020001
    ctx->pc = 0x1bf5b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf5b4: 0x3c010032
    ctx->pc = 0x1bf5b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bf5b8: 0xac226c60
    ctx->pc = 0x1bf5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27744), GPR_U32(ctx, 2));
label_1bf5bc:
    // 0x1bf5bc: 0xc0602e2
    ctx->pc = 0x1BF5BCu;
    SET_GPR_U32(ctx, 31, 0x1BF5C4u);
    ctx->pc = 0x1BF5C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180B88_0x180b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5C4u; }
    }
    if (ctx->pc != 0x1BF5C4u) { return; }
    ctx->pc = 0x1BF5C4u;
    // 0x1bf5c4: 0x0
    ctx->pc = 0x1bf5c4u;
    // NOP
    // 0x1bf5c8: 0x0
    ctx->pc = 0x1bf5c8u;
    // NOP
    // 0x1bf5cc: 0x0
    ctx->pc = 0x1bf5ccu;
    // NOP
    // 0x1bf5d0: 0x440fffa
    ctx->pc = 0x1BF5D0u;
    {
        const bool branch_taken_0x1bf5d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bf5d0) {
            ctx->pc = 0x1BF5BCu;
            goto label_1bf5bc;
        }
    }
    ctx->pc = 0x1BF5D8u;
    // 0x1bf5d8: 0x982d
    ctx->pc = 0x1bf5d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf5dc: 0x27b10054
    ctx->pc = 0x1bf5dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 84));
    // 0x1bf5e0: 0x10000011
    ctx->pc = 0x1BF5E0u;
    {
        const bool branch_taken_0x1bf5e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BF5E4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 88));
        if (branch_taken_0x1bf5e0) {
            ctx->pc = 0x1BF628u;
            goto label_1bf628;
        }
    }
    ctx->pc = 0x1BF5E8u;
label_1bf5e8:
    // 0x1bf5e8: 0x26620002
    ctx->pc = 0x1bf5e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 2));
    // 0x1bf5ec: 0xafa30050
    ctx->pc = 0x1bf5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1bf5f0: 0x27a40050
    ctx->pc = 0x1bf5f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bf5f4: 0xae220000
    ctx->pc = 0x1bf5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bf5f8: 0x131a00
    ctx->pc = 0x1bf5f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 8));
    // 0x1bf5fc: 0x3c020032
    ctx->pc = 0x1bf5fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1bf600: 0xae000000
    ctx->pc = 0x1bf600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bf604: 0x24426b40
    ctx->pc = 0x1bf604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27456));
    // 0x1bf608: 0xc060364
    ctx->pc = 0x1BF608u;
    SET_GPR_U32(ctx, 31, 0x1BF610u);
    ctx->pc = 0x1BF60Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x180D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D90_0x180d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF610u; }
    }
    if (ctx->pc != 0x1BF610u) { return; }
    ctx->pc = 0x1BF610u;
    // 0x1bf610: 0x3c030032
    ctx->pc = 0x1bf610u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1bf614: 0x132080
    ctx->pc = 0x1bf614u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1bf618: 0x24636c40
    ctx->pc = 0x1bf618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 27712));
    // 0x1bf61c: 0x26730001
    ctx->pc = 0x1bf61cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bf620: 0x641821
    ctx->pc = 0x1bf620u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf624: 0xac620000
    ctx->pc = 0x1bf624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bf628:
    // 0x1bf628: 0x8e420010
    ctx->pc = 0x1bf628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bf62c: 0x262102a
    ctx->pc = 0x1bf62cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x1bf630: 0x1440ffed
    ctx->pc = 0x1BF630u;
    {
        const bool branch_taken_0x1bf630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BF634u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1bf630) {
            ctx->pc = 0x1BF5E8u;
            goto label_1bf5e8;
        }
    }
    ctx->pc = 0x1BF638u;
    // 0x1bf638: 0x3c040032
    ctx->pc = 0x1bf638u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1bf63c: 0xc040742
    ctx->pc = 0x1BF63Cu;
    SET_GPR_U32(ctx, 31, 0x1BF644u);
    ctx->pc = 0x1BF640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27296));
    ctx->pc = 0x101D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101D08_0x101d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF644u; }
    }
    if (ctx->pc != 0x1BF644u) { return; }
    ctx->pc = 0x1BF644u;
    // 0x1bf644: 0xdfbf0040
    ctx->pc = 0x1bf644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf648: 0x7bb30030
    ctx->pc = 0x1bf648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf64c: 0x7bb20020
    ctx->pc = 0x1bf64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf650: 0x7bb10010
    ctx->pc = 0x1bf650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf654: 0x7bb00000
    ctx->pc = 0x1bf654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf658: 0x3e00008
    ctx->pc = 0x1BF658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF65Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF5BCu: goto label_1bf5bc;
            case 0x1BF5E8u: goto label_1bf5e8;
            case 0x1BF628u: goto label_1bf628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BF660u;
}
